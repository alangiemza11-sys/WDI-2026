#include <stdio.h>
int main() {
    int liczba_sekund;
    printf("Podaj liczbe sekund: ");
    scanf("%d", &liczba_sekund);
    int godziny = liczba_sekund / 3600;
    int reszta_sekund = liczba_sekund % 3600;
    int minuty = reszta_sekund / 60;
    int sekundy = reszta_sekund % 60;
    printf("%d, sekundn to: %d h %d m %d s", liczba_sekund, godziny, minuty, sekundy);
    return 0;






}
