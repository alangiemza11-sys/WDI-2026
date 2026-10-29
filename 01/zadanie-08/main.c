#include <stdio.h>

int main() {
    int a, b;
    char znak;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj znak dzialania (+, -, *, /, %): ");
    scanf(" %c", &znak);

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    
    if (znak == '+') {
        printf("Wynik: %d + %d = %d\n", a, b, a + b);
    } 
    else if (znak == '-') {
        printf("Wynik: %d - %d = %d\n", a, b, a - b);
    } 
    else if (znak == '*') {
        printf("Wynik: %d * %d = %d\n", a, b, a * b);
    } 
    else if (znak == '/') {
        if (b == 0) {
            printf("Blad: Nie mozna dzielic przez zero!\n");
        } else {
            printf("Wynik: %d / %d = %.2f\n", a, b, (float)a / b);
        }
    } 
    else if (znak == '%') {
        if (b == 0) {
            printf("Blad: Nie mozna brac reszty z dzielenia przez zero!\n");
        } else {
            printf("Wynik: %d %% %d = %d\n", a, b, a % b);
        }
    } 
    else {
        printf("Blad: Nieznany operator działania!\n");
    }

    return 0;
}
