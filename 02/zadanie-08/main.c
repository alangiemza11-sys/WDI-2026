#include <stdio.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}


int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;

    printf("Podaj dwie liczby całkowite: ");
    scanf("%d %d", &x, &y);

   
    printf("Większa liczba (max): %d\n", max(x, y));
    printf("Mniejsza liczba (min): %d\n", min(x, y));

    return 0;
}