#include<stdio.h>
#define N 1000
int main() {
    char znaki[N];
    int i = 0;
    int znak = 1;
    int wynik = 0;
    printf("Podaj ciag znakow:  ");
    scanf("%999s", znaki);
    if(znaki[0] == '-') {
        i = 1;
        znak = -1;
    }
    if(znaki[i] == '\0') {
        printf("nie jest to liczba calkowita");
        return 0;
    }
    for(; znaki[i] != '\0'; i++) {
        if(znaki[i] < '0' || znaki[i] > '9') {
                    printf("nie jest to liczba calkowita");
                    return 0;
        }    
        wynik = wynik * 10 + (znaki[i] - '0');   

    }
    wynik = wynik * znak;
printf("To jest liczba calkowita: %d\n", wynik);
return 0;
}