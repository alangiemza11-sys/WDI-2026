#include <stdio.h>
#include <limits.h>
int main () {
    int liczba;
    int licznik = 0, suma = 0;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    printf("Podawaj liczby (wpisanie liczby parzystej zakonczy):\n");
    while (1) {
        scanf("%d", &liczba);
    if (liczba % 2 == 0) {
        break;
    }
    suma = suma + liczba;
    licznik ++;
    if (liczba < minVal) minVal = liczba;
    if (liczba > maxVal) maxVal = liczba;
}
if (licznik > 0){
    printf("Suma: %d\n", suma);
        printf("Średnia: %.2f\n", (double)suma / licznik);
        printf("Najmniejsza: %d\n", minVal);
        printf("Największa: %d\n", maxVal);
    } else {
        printf("Nie podano żadnej liczby przed warunkiem stopu.\n");
    }

    return 0;
}



