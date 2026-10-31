#include <stdio.h>

int main() {
    int miesiac;

    printf("Podaj numer miesiąca (1-12): ");
    scanf("%d", &miesiac);

    switch (miesiac) {
        case 1:
        case 2:
        case 3:
            printf("Miesiąc %d należy do I kwartału.\n", miesiac);
            break;
        case 4:
        case 5:
        case 6:
            printf("Miesiąc %d należy do II kwartału.\n", miesiac);
            break;
        case 7:
        case 8:
        case 9:
            printf("Miesiąc %d należy do III kwartału.\n", miesiac);
            break;
        case 10:
        case 11:
        case 12:
            printf("Miesiąc %d należy do IV kwartału.\n", miesiac);
            break;
        default:
            printf("Błąd: Nie ma takiego miesiąca! Podaj liczbę z zakresu 1-12.\n");
    }

    return 0;
}