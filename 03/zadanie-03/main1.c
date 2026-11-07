#include <stdio.h>

int moje_floor(double x) {
    int wynik = (int)x;
    if (x < 0 && x != wynik) {
        wynik--;
    }
    return wynik;
}

int moje_ceil(double x) {
    int wynik = (int)x;
    if (x > 0 && x != wynik) {
        wynik++;
    }
    return wynik;
}

int moje_round(double x) {
    if (x >= 0) {
        return (int)(x + 0.5);
    } else {
        return (int)(x - 0.5);
    }
}

int main() {
    double liczba;
    
    printf("Podaj dowolna liczbe: ");
    if (scanf("%lf", &liczba) != 1) {
        printf("Blad odczytu danych!\n");
        return 1;
    }
    
    printf("\nWyniki dla liczby %.2f:\n", liczba);
    printf("podloga: %d\n", moje_floor(liczba));
    printf("sufit: %d\n", moje_ceil(liczba));
    printf("zaokraglenie: %d\n", moje_round(liczba));
    
    return 0;
}