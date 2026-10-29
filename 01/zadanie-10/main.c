#include <stdio.h>

int main() {
    float o1, o2, o3, o4, o5;
    int licznik_niedostatecznych = 0;

    printf("Podaj 5 ocen (oddzielone spacjami): ");
    scanf("%f %f %f %f %f", &o1, &o2, &o3, &o4, &o5);

    
    float suma = o1 + o2 + o3 + o4 + o5;
    float srednia = suma / 5.0;


    if (o1 < 3.0) {
        licznik_niedostatecznych++;
    }
    if (o2 < 3.0) {
        licznik_niedostatecznych++;
    }
    if (o3 < 3.0) {
        licznik_niedostatecznych++;
    }
    if (o4 < 3.0) {
        licznik_niedostatecznych++;
    }
    if (o5 < 3.0) {
        licznik_niedostatecznych++;
    }

    printf("Średnia Twoich ocen wynosi: %.2f\n", srednia);
    printf("Liczba ocen niedostatecznych (poniżej 3): %d\n", licznik_niedostatecznych);

    return 0;
}