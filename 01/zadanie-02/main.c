#include <stdio.h>
int main() {
    float liczba;
    printf("Podaj jedną liczbe zmiennoprzecinkową:");
    scanf("%f", &liczba);
    printf("Z dokładnością do 1 miejsca: %.1f\n", liczba);
    printf("Z dokładnością do 3 miejsca: %.3f\n", liczba);
    printf("Z dokładnością do 5 miejsca: %.5f\n", liczba);

    return 0;

    
}