#include <stdio.h>
int main() {
    float ocena1, ocena2, ocena3, ocena4, ocena5;

    printf("Podaj 5 ocen: ");
    scanf("%f %f %f %f %f", &ocena1, &ocena2, &ocena3, &ocena4, &ocena5);

    float suma = ocena1 + ocena2 + ocena3 + ocena4 + ocena5;
    float srednia = suma / 5.0;
    printf("Srednia Twoich ocen wynosi: %.2f\n", srednia);
    return 0;
}
