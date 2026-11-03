#include <stdio.h>



double potega(double liczba, int wykladnik) {
    double wynik = 1.0;
    int w = (wykladnik < 0) ? -wykladnik : wykladnik;
    
    for(int i = 1; i <= w; i++){
        wynik *= liczba;
    }
    
    if (wykladnik < 0) {
        return 1.0 / wynik;
    }
    return wynik;
}

double kwadrat_liczby(double liczba) {
    return liczba * liczba;
}

long long silnia(int a) {
    if (a < 0){
        return -1;
    }
    long long wynik = 1;
    for (int i = 2; i <= a; i++){
        wynik *= i;
    }
    return wynik;
}

double mnozenie_dwoch_liczb(double a, double b) {
    return a * b; 
}

double dzielenie_liczby(double a, double b) {
    return a / b;
}



int main() {
    int wybor;

    do {
        printf("\n=============================\n");
        printf("       KALKULATOR GŁÓWNY     \n");
        printf("=============================\n");
        printf("1. Dodawanie n liczb\n");
        printf("2. Odejmowanie od liczby aż do 0\n");
        printf("3. Mnożenie dwóch liczb\n");
        printf("4. Dzielenie liczby\n");
        printf("5. Potęgowanie\n");
        printf("6. Kwadrat liczby\n");
        printf("7. Silnia\n");
        printf("0. Wyjście z programu\n");
        printf("Wybierz opcję (0-7): ");
        
        if (scanf("%d", &wybor) != 1) {
            printf("Błąd odczytu!\n");
            break;
        }

        switch (wybor) {
            case 1: {
                int ile;
                double liczba, wynik = 0;
                printf("Ile liczb chcesz dodać? ");
                scanf("%d", &ile);
                for(int i = 1; i <= ile; i++) {
                    printf("Podaj liczbę %d: ", i);
                    scanf("%lf", &liczba);
                    wynik += liczba;
                }
                printf("Wynik dodawania: %.5f\n", wynik);
                break;
            }
            case 2: {
                double start, liczba;
                printf("Podaj liczbę początkową: ");
                scanf("%lf", &start);
                printf("Podawaj kolejne liczby do odjęcia (wpisz 0, aby zakończyć):\n");
                while(1) {
                    printf("Podaj liczbę: ");
                    scanf("%lf", &liczba);
                    if(liczba == 0) {
                        break;
                    }
                    start -= liczba;
                }
                printf("Wynik odejmowania: %.5f\n", start);
                break;
            }
            case 3: {
                double a, b;
                printf("Podaj pierwszą liczbę: ");
                scanf("%lf", &a);
                printf("Podaj drugą liczbę: ");
                scanf("%lf", &b);
                double wynik = mnozenie_dwoch_liczb(a, b);
                printf("Wynik mnożenia: %.5f\n", wynik);
                break;
            }
            case 4: {
                double a, b;
                printf("Podaj dzielną: ");
                scanf("%lf", &a);
                printf("Podaj dzielnik: ");
                scanf("%lf", &b);
                if (b == 0) {
                    printf("Błąd: Dzielenie przez zero!\n");
                } else {
                    double wynik = dzielenie_liczby(a, b);
                    printf("Wynik dzielenia: %.5f\n", wynik);
                }
                break;
            }
            case 5: {
                double liczba;
                int wykladnik;
                printf("Podaj podstawę: ");
                scanf("%lf", &liczba);
                printf("Podaj wykładnik całkowity: ");
                scanf("%d", &wykladnik);
                double wynik = potega(liczba, wykladnik);
                printf("Wynik potęgowania: %.8f\n", wynik);
                break;
            }
            case 6: {
                double liczba;
                printf("Podaj liczbę do kwadratu: ");
                scanf("%lf", &liczba);
                double wynik = kwadrat_liczby(liczba);
                printf("Kwadrat liczby wynosi: %.5f\n", wynik);
                break;
            }
            case 7: {
                int n;
                printf("Podaj liczbę całkowitą nieujemną do silni: ");
                scanf("%d", &n);
                long long wynik = silnia(n);
                if (wynik != -1) {
                    printf("Silnia z %d wynosi: %lld\n", n, wynik);
                } else {
                    printf("Błąd: Silnia nie jest zdefiniowana dla liczb ujemnych!\n");
                }
                break;
            }
            case 0:
                printf("Zamykanie kalkulatora. Do zobaczenia!\n");
                break;
            default:
                printf("Nie ma takiej opcji w menu! Wybierz liczbę od 0 do 7.\n");
        }

    } while (wybor != 0);

    return 0;
}