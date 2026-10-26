#include <stdio.h>
int main() {
    int liczba;
    printf("Podaj liczbe calkowita");
    scanf("%d", &liczba);
    if(liczba > 0 && liczba % 2 == 0){
    printf("Liczba %d jest jednocześnie dodatnia i parzysta!\n", liczba);
    } else {
        printf("Liczba %d nie jest jednoczesnie parzysta i dodatnia.\n", liczba);
    }
    
}