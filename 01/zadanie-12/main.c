#include<stdio.h>
int main() {
    int liczba;
    int suma = 0;
    printf("Podaj liczbe naturalna");
    scanf("%d", &liczba);
    

    for (int i = 0; i < liczba; i++) {
        suma = suma + i;
    }
    printf("suma kolejnych liczb mniejszych od %d to: %d\n", liczba, suma);
    return 0;
}