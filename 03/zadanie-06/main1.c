#include <stdio.h>
#include <stdlib.h>
double oblicz_srednia(int tab[]) {
    int suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += tab[i];
    }
    return (double)suma / 5;
}
int main() {
    int i;
    int tablica[5];
    for(i = 0; i < 5; i++) {
        printf("Podaj element tablica[%d]: ", i);
        scanf("%d", &tablica[i]);
    }
   double srednia = oblicz_srednia(tablica);

    printf("Srednia %d liczb z tablicy wynosi: %.2lf\n ", i,  srednia);  
    printf("liczby wieksze od sredniej to:\n");
    for ( i = 0; i < 5; i++){
    if( tablica[i] > srednia){ 
        
        printf("%d\n", tablica[i]);
    }
}
return 0;
}
