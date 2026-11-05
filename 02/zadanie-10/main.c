#include <stdio.h>


double potega(double liczba, int wykladnik) {
    double wynik = 1.0;
    
   
    int w = (wykladnik < 0) ? -wykladnik : wykladnik;

    
    for (int i = 0; i < w; i++) {
        wynik *= liczba;
    }

   
    if (wykladnik < 0) {
        return 1.0 / wynik;
    }

    return wynik;
}

int main() {
    double podstawa;
    int wykladnik;

    printf("Podaj podstawę potęgi: ");
    scanf("%lf", &podstawa);
    
    printf("Podaj wykładnik całkowity: ");
    scanf("%d", &wykladnik);

    double wynik = potega(podstawa, wykladnik);
    
    printf("%.2f do potęgi %d wynosi: %.5f\n", podstawa, wykladnik, wynik);

    return 0;
}
