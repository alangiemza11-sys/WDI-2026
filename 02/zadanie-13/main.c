#include <stdio.h>


long long fibonacci(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0) {
        return 0;  
    }
    if (n == 1) {
        return 1;  
    }

    long long poprzedni2 = 0;
    long long poprzedni1 = 1;
    long long aktualny = 0;

    for (int i = 2; i <= n; i++) {
        aktualny = poprzedni1 + poprzedni2;
        poprzedni2 = poprzedni1;
        poprzedni1 = aktualny;
    }

    return aktualny;
}

int main() {
    int n;
    
    printf("Podaj numer wyrazu (n) ciagu Fibonacciego: ");
    if (scanf("%d", &n) != 1) {
        printf("Blad odczytu danych!\n");
        return 1;
    }

    long long wynik = fibonacci(n);

    if (wynik != -1) {
        printf("%d. wyraz ciągu Fibonacciego wynosi: %lld\n", n, wynik);
    } else {
        printf("Blad: Indeks nie moze byc ujemny!\n");
    }

    return 0;
}
