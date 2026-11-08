#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    // Deklaracja tablicy z gotowymi wartosciami
    int tablica[5] = {5, 12, 9, 23, 42};

    // 1. PETLA FOR
    printf("--- PETLA FOR ---\n");
    printf("Od poczatku do konca:\n");
    for(i = 0; i < 5; i++) {
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }

    printf("Od konca do poczatku:\n");
    for(i = 4; i >= 0; i--) {
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }


    // 2. PETLA WHILE
    printf("\n--- PETLA WHILE ---\n");
    printf("Od poczatku do konca:\n");
    i = 0;
    while(i < 5) {
        printf("tablica[%d] = %d\n", i, tablica[i]);
        i++;
    }

    printf("Od konca do poczatku:\n");
    i = 4;
    while(i >= 0) {
        printf("tablica[%d] = %d\n", i, tablica[i]);
        i--;
    }


    // 3. PETLA DO-WHILE
    printf("\n--- PETLA DO-WHILE ---\n");
    printf("Od poczatku do konca:\n");
    i = 0;
    do {
        printf("tablica[%d] = %d\n", i, tablica[i]);
        i++;
    } while(i < 5);

    printf("Od konca do poczatku:\n");
    i = 4;
    do {
        printf("tablica[%d] = %d\n", i, tablica[i]);
        i--;
    } while(i >= 0);

    return 0;
}
