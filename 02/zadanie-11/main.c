#include <stdio.h>


double potega(double liczba, int wykladnik) {
    
    if (wykladnik == 0) {
        return 1.0;
    }
    
    
    if (wykladnik < 0) {
        return 1.0 / potega(liczba, -wykladnik);
    }
    
    
    return liczba * potega(liczba, wykladnik - 1);
}

int main() {
    double liczba;
    int wykladnik;

    printf("Podaj podstawe potegi: ");
    scanf("%lf", &liczba);
    
    printf("Podaj wykladnik calkowity: ");
    scanf("%d", &wykladnik);

    double wynik = potega(liczba, wykladnik);
    
    printf("%lf do potegi %d wynosi: %lf\n", liczba, wykladnik, wynik);

    return 0;
}
