#include <stdio.h>

int main() {
    int liczba;
    char napis[16];
    char tmp[16];
    int i = 0, k = 0;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    long long n = liczba;
    int ujemna = 0;

    if (n < 0) {
        n = -n;
        ujemna = 1;
    }

    if (n == 0)
        napis[k++] = '0';

    while (n > 0) {
        napis[k++] = '0' + (n % 10);
        n /= 10;
    }

    if (ujemna)
        napis[k++] = '-';

    while (k > 0) {
        tmp[i] = napis[k - 1];
        i++;
        k--;
    }
    tmp[i] = '\0';

    printf("Liczba jako napis: %s\n", tmp);
    return 0;
}