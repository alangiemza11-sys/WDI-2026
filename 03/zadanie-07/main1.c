#include <stdio.h>

// 1. Zwraca double (średnią)
double policz_srednia(int tab[]) {
    int i;
    int suma = 0;
    for(i = 0; i < 10; i++) {
        suma = suma + tab[i];
    }
    return (double)suma / 10;
}


int pokaz_wieksze(int tab[], double srednia) {
    int i;
     
    
    printf("Liczby wieksze od sredniej:\n");
    for(i = 0; i < 10; i++) {
        if(tab[i] > srednia) {
            printf("%d\n", tab[i]);
            }
    }
    return 0;
 
}


int pokaz_min_max(int tab[]) {
    int i;
    int min = tab[0];
    int max = tab[0];
    
    for(i = 0; i < 10; i++) {
        if(tab[i] < min) {
            min = tab[i];
        }
        if(tab[i] > max) {
            max = tab[i];
        }
    }
    printf("Najmniejsza liczba to: %d\n", min);
    printf("Najwieksza liczba to: %d\n", max);
    
    return 0; 
}


int suma_nieparzystych(int tab[]) {
    int i;
    int suma_np = 0;
    for(i = 0; i < 10; i++) {
        if(tab[i] % 2 != 0) {
            suma_np = suma_np + tab[i];
        }
    }
    return suma_np; 
}


int pokaz_od_konca(int tab[]) {
    int i;
    printf("Tablica od ostatniego elementu:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0; 
}

int main() {
    int i;
    int tablica[10];
    double srednia;

    for(i = 0; i < 10; i++) {
        printf("Podaj element tablica[%d]: ", i);
        scanf("%d", &tablica[i]);
    }

    printf("\n--- WYNIKI DZIALANIA PROGRAMU ---\n\n");


    srednia = policz_srednia(tablica);
    printf("1. Srednia arytmetyczna wynosi: %.2lf\n\n", srednia);

    int ile_wiekszych = pokaz_wieksze(tablica, srednia);
   

    pokaz_min_max(tablica);
    printf("\n");

    int wynik_sumy = suma_nieparzystych(tablica);
    printf("4. Suma elementow nieparzystych wynosi: %d\n\n", wynik_sumy);

    pokaz_od_konca(tablica);

    return 0;
}