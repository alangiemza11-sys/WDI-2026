#include <stdio.h>

#define N 5

int tab[N];   
int ile = 0;  

int pokaz()
{
    int i;
    if (ile == 0) {
        printf("Tablica jest pusta.\n");
        return 0;
    }
    printf("Tablica: ");
    for (i = 0; i < ile; i++)
        printf("%d ", tab[i]);
    printf("\n");
    return 0;
}

int dodaj(int x)
{
    if (ile == N) {
        printf("Tablica jest pelna!\n");
        return 0;
    }
    tab[ile] = x;
    ile++;
    return 0;
}

int fifo()
{
    int i, x;
    if (ile == 0) {
        printf("Tablica jest pusta!\n");
        return 0;
    }
    x = tab[0];
    for (i = 0; i < ile - 1; i++)   
        tab[i] = tab[i + 1];
    ile--;
    printf("FIFO - zdjeto: %d\n", x);
    return 0;
}

int lifo()
{
    int x;
    if (ile == 0) {
        printf("Tablica jest pusta!\n");
        return 0;
    }
    x = tab[ile - 1];
    ile--;
    printf("LIFO - zdjeto: %d\n", x);
    return 0;
}

int main()
{
    int i, x, wybor;

    printf("Wpisz %d liczb:\n", N);
    for (i = 0; i < N; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &x);
        dodaj(x);
    }
    pokaz();

    do {
        printf("\n1. FIFO (zdejmij pierwszy)\n");
        printf("2. LIFO (zdejmij ostatni)\n");
        printf("3. Dodaj liczbe\n");
        printf("0. Koniec\n");
        printf("Wybor: ");
        scanf("%d", &wybor);

        if (wybor == 1) {
            fifo();
            pokaz();
        } else if (wybor == 2) {
            lifo();
            pokaz();
        } else if (wybor == 3) {
            printf("Podaj liczbe: ");
            scanf("%d", &x);
            dodaj(x);
            pokaz();
        }
    } while (wybor != 0);

    return 0;
}