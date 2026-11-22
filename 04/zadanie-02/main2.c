#include<stdio.h>
#include<ctype.h>
    int main() {
        int i; 
char imie[21];
printf("Podaj imie:  ");
scanf("%s", imie);

imie[0] = toupper((unsigned char) imie[0]);

for( i = 1; imie[i] != '\0'; i++) {
    imie[i] = tolower((unsigned char) imie[i]);
}

printf("Imie: %s\n", imie);
return 0;
} 
