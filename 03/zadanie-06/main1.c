#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int suma = 0;
    double srednia = 1;
    int tablica[5];
    for(i = 0; i < 5; i++) {
        printf("Podaj element tablica[%d]: ", i);
        scanf("%d", &tablica[i]);
    }
    for ( i = 0; i < 5; i++) {
        suma = suma + tablica[i];
        srednia = (double)suma / 5;
    }
    printf("Srednia %d liczb z tablicy wynosi: %.2lf\n ", i,  srednia);  
    printf("liczby wieksze od sredniej to:\n");
    for ( i = 0; i < 5; i++){
    if( tablica[i] > srednia){ 
        
        printf("%d\n", tablica[i]);
    }
}
return 0;
}