#include <stdio.h>

int main() {
    double a = 0, b = 0;
    char znak = '+';
    int wybor;

    do {
        
        
        printf("AKTUALNY STAN: %.2f %c %.2f = ", a, znak, b);
        switch (znak) {
            case '+': printf("%.2f\n", a + b); break;
            case '-': printf("%.2f\n", a - b); break;
            case '*': printf("%.2f\n", a * b); break;
            case '/': 
                if (b != 0) printf("%.2f\n", a / b); 
                else printf("Nieoznaczono (dzielenie przez 0)\n"); 
                break;
            case '%': printf("%d\n", (int)a % (int)b); break;
        }
        

        // Menu główne
        printf("1. Zmień pierwszą liczbę (obecnie: %.2f)\n", a);
        printf("2. Zmień drugą liczbę (obecnie: %.2f)\n", b);
        printf("3. Wybierz działanie (+, -, *, /, %%) (obecnie: %c)\n", znak);
        printf("0. Zakończ program\n");
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);

        switch (wybor) {
            case 1:
                printf("Podaj nową pierwszą liczbę: ");
                scanf("%lf", &a);
                break;
            case 2:
                printf("Podaj nową drugą liczbę: ");
                scanf("%lf", &b);
                break;
            case 3:
                printf("Podaj nowy znak działania (+, -, *, /, %%): ");
                scanf(" %c", &znak);
                break;
            case 0:
                printf("Zamykanie kalkulatora...\n");
                break;
            default:
                printf("Nie ma takiej opcji w menu!\n");
        }
    } while (wybor != 0);

    return 0;
}
