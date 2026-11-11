#include <stdio.h>

#define N 10

int bubble_sort(int t[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (t[j] > t[j + 1]) {      
                tmp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = tmp;
            }
        }
    }
    return 0;
}

int pokaz(int t[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", t[i]);
    printf("\n");
    return 0;
}

int main()
{
    int tab[N];
    int i;

    printf("Wpisz %d liczb:\n", N);
    for (i = 0; i < N; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Przed sortowaniem: ");
    pokaz(tab, N);

    bubble_sort(tab, N);

    printf("Po sortowaniu:     ");
    pokaz(tab, N);

    return 0;
}