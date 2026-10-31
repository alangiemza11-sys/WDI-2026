#include <stdio.h>

int main() {
    double a, b;
    char znak;

    printf("Podaj pierwszą liczbę: ");
    scanf("%lf", &a);
    
    printf("Podaj znak działania (+, -, *, /, %%): ");
    scanf(" %c", &znak); 

    printf("Podaj drugą liczbę: ");
    scanf("%lf", &b);

    switch (znak) {
        case '+':
            printf("Wynik: %.2f\n", a + b);
            break;
        case '-':
            printf("Wynik: %.2f\n", a - b);
            break;
        case '*':
            printf("Wynik: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Wynik: %.2f\n", a / b);
            } else {
                printf("Błąd: Dzielenie przez zero!\n");
            }
            break;
        case '%':
            
            printf("Wynik: %d\n", (int)a % (int)b);
            break;
        default:
            printf("Błąd: Nieznany operator działania!\n");
    }

    return 0;
}