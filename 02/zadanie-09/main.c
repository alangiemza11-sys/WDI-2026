#include <stdio.h>
long long silnia(int a) {
    if (a < 0){
        return -1;
    }
    long long wynik = 1;
    for ( int i = 2; i <= a; i++){
        wynik *= i;
    }
    return wynik;

}
int main() {
    int n;
    printf("Podaj liczbe calkowita nieujemna: ");
    scanf("%d", &n);
    long long wynik = silnia(n);
    if (wynik != -1) {
        printf("Silnia z %d wynosi: %lld\n", n, wynik);
    } else {
        printf("Blad: Silnia nie jest zdefiniowana dla liczb ujemnych!\n");
    }
    return 0;
}  
