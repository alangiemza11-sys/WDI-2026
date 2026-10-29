#include <stdio.h>

int main() {
    int n;
    float liczba, suma = 0;

    printf("Podaj ile liczb chcesz wczytac (n): ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        printf("Podaj liczbe nr %d: ", i);
        scanf("%f", &liczba);

        suma += liczba; 
    }

    
    float srednia = suma / n;

    
    printf("\n--- WYNIKI ---\n");
    printf("Suma podanych liczb wynosi: %.2f\n", suma);
    printf("Średnia podanych liczb wynosi: %.2f\n", srednia);

    return 0;
}