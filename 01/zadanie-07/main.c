#include <stdio.h>

int main() {
    int a, b;
    
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Wieksza liczba to: %d\n", a);
        printf("Mniejsza liczba to: %d\n", b);
        printf("Relacja: %d > %d\n", a, b);
    } else if (b > a) {
        printf("Wieksza liczba to: %d\n", b);
        printf("Mniejsza liczba to: %d\n", a);
        printf("Relacja: %d < %d\n", a, b);
    } else {
        printf("Obie liczby sa rowne.\n");
        printf("Relacja: %d = %d\n", a, b);
    }

    return 0;
}