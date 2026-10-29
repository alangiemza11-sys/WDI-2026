#include <stdio.h>

int main() {
    int n;
    long long suma = 0;
    do {
        printf("Podaj liczbe n z zakresu 1-100: ");
        if (scanf("%d", &n) != 1) {
            printf("Błąd: Nie podano poprawnej liczby całkowitej!\n");
            return 1;
        }
        
        if (n < 1 || n > 100) {
            printf("Liczba spoza zakresu (1-100). Spróbuj ponownie.\n");
        }
    } while (n < 1 || n > 100);
    for (int i = 1; i <= n; i++) {
        suma += (long long)i * i;
    }

    // Wyświetlenie wyniku
    printf("Suma kwadratów od 1*1 do %d*%d wynosi: %lld\n", n, n, suma);

    return 0;
}