#include <stdio.h>
long long funkcja(int n){
    if (n < 0) {
        return -1;
    }
    if(n == 1) {
        return 1;
    }
    if(n == 2) {
        return 2;
    }
    if(n == 3) {
        return 3;
    }
    long long wynik = 0;
    long long l1 = 3;
    long long l2 = 2;

    long long l3 = 1;
    for( int i = 4; i <= n; i++) {

       
        wynik = (l1 * l2) - l3;
        l3 = l2;
        l2 = l1;
        l1 = wynik;
    }
       return wynik;
}
int main() {
    int n;
    
    printf("Podaj numer wyrazu (n) funkcji: ");
    if (scanf("%d", &n) != 1) {
        printf("Blad odczytu danych!\n");
        return 1;
    }

    long long wynik = funkcja(n);
    

    if (wynik != -1) {
        printf("%d. wyraz funkcji wynosi: %lld\n", n, wynik);
    } else {
        printf("Blad: Indeks nie moze byc ujemny!\n");
    }

    return 0;
}