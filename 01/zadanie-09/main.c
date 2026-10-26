#include <stdio.h>

int main() {
    int a, b;
    printf("Podaj dwie liczby: ");
    scanf("%d %d", &a, &b);

    if (b == 0) {
   printf("Nie mozna dzielic przez 0\n");
    }
    else if (a % b == 0){
    printf("Liczba %d jest podzielna przez %d\n: ", a, b);
    }
    else {
        printf("Liczba %d nie jest podzielnna przez %d\n: ", a, b);
    }
    return 0;
}