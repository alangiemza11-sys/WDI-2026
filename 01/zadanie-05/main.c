#include<stdio.h>
int main() {
    float ocena, suma = 0;
    int liczba_ocen = 5;
    printf("Podaj 5 ocen:\n");
    for(int i = 1; i <= liczba_ocen; i ++) {
        printf("Ocena %d", i);
        scanf("%f", &ocena);
        
        suma = suma + ocena;
    }
    float srednia = suma / liczba_ocen;
    printf("srednia %.2f\n", srednia);
    
    return 0;
}