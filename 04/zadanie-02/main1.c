#include<stdio.h>
    int main() {
        int i; 
char imie[21];
printf("Podaj imie:  ");
scanf("%20s", imie);

if(imie[0] >= 'a' && imie[0] <= 'z') {
imie[0] = imie[0] - ('a' - 'A');

}
for( i = 1; imie[i] != '\0'; i++) {
    if(imie[i] >= 'A' && imie[i] <= 'Z') {
        imie[i] = imie[i] + ('a' - 'A');
    } 
}
printf("Imie: %s\n", imie);
return 0;
} 
