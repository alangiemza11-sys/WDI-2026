#include <stdio.h>

int suma_cyfr(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + suma_cyfr(n / 10);
}

int main() {
    int liczba;

    printf("Podaj nieujemna liczbe calkowita: ");
    if (scanf("%d", &liczba) != 1) {
        printf("Blad odczytu danych!\n");
        return 1;
    }

    if (liczba < 0) {
        printf("Blad: Liczba musi byc nieujemna!\n");
        return 1;
    }

    int wynik = suma_cyfr(liczba);

    printf("Suma cyfr liczby %d wynosi: %d\n", liczba, wynik);

    return 0;
}