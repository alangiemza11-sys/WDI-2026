#include <stdio.h>

void quick_sort(int tab[], int lewy, int prawy) {
    int i = lewy;
    int j = prawy;
    int pivot = tab[(lewy + prawy) / 2];
    int temp;

    while (i <= j) {
        while (tab[i] < pivot) {
            i++;
        }
        while (tab[j] > pivot) {
            j--;
        }

        if (i <= j) {
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
            i++;
            j--;
        }
    }

    if (lewy < j) {
        quick_sort(tab, lewy, j);
    }
    if (i < prawy) {
        quick_sort(tab, i, prawy);
    }
}

int main() {
    int tab[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Podaj %d liczbe: ", i + 1);
        scanf("%d", &tab[i]);
    }

    quick_sort(tab, 0, 9);

    printf("Po sortowaniu:");
    for (i = 0; i < 10; i++) {
        printf(" %d", tab[i]);
    }
    printf("\n");

    return 0;
}