#include <stdio.h>
double potega(double liczba,int wykladnik) {
    double wynik = 1.0;
    if (wykladnik < 0) {
        return 1.0 / wynik;
    }
    for(int i = 1; i <= wykladnik; i++){
        wynik *= liczba;
    }
    
    return wynik;
}
int main() {
    double liczba;
    int wykladnik;

    printf("Podaj liczbe:");
    scanf("%lf", &liczba);
    printf("Podaj wykladnik:");
    scanf("%d", &wykladnik );
    double wynik = potega(liczba, wykladnik);
        printf("Potega o wykładniku %d liczby %lf wynosi: %lf", wykladnik, liczba, wynik);
        
return 0;
    

}