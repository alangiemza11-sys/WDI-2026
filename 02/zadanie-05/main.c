#include <stdio.h>
int main() {
    char klasa;
    printf("Wybierz klasę społeczną (P - Poddany, G - Giermek, R - Rycerz, M - Mag, K - Królowa):");
    scanf(" %c", &klasa);
    switch (klasa) {
        case 'P':
        printf("Poddany: Może czcić Króla");
        break;
        case 'G':
        printf("Giermek: Może wchodzić na dziedziniec zamkowy codziennie,");
        break;
        case 'R':
        printf("Rycerz: Może wchodzić do zamku codziennie oraz rekrutować giermków");
        break;
        case 'M':
        printf("Mag: Może rozmawiać z Królem");
        break;
        case 'K':
        printf("Królowa: Może rozkazywać Królowi\n");
break;
        default:
            printf("Nieznana klasa społeczna w królestwie!\n");
    }

    return 0;

 

}