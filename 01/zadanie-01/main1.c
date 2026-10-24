#include <stdio.h>

int main() {
    int wiek;
    printf("Witaj użytkowniku!\n");
    printf("Ile masz lat? ");
    scanf("%d", &wiek);
    
    printf("Podany przez ciebie wiek to: %d lat.\n", wiek);
    
    return 0;
}