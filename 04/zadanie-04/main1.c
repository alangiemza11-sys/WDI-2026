#include<stdio.h>

    int main() {
        int i; 
        int licznik1[26] = {0};
        int licznik2[26] = {0};
char wyraz1[20];
char wyraz2[20];
printf("Podaj 1 wyraz:  ");
scanf("%19s", wyraz1);
printf("Podaj 2 wyraz:  ");
scanf("%19s", wyraz2);
for(i = 0; wyraz1[i] != '\0'; i++) {
if (wyraz1[i] >= 'a' && wyraz1[i] <= 'z'){
    licznik1[wyraz1[i] - 'a']++; }
else if (wyraz1[i] >= 'A' && wyraz1[i] <= 'Z') {
    licznik1[wyraz1[i] - 'A']++;
}   
}
printf("%s\n", wyraz1);
for(i = 0; i < 26; i++ ) {
    if(licznik1[i] > 0) {
      
    }

}
for(i = 0; wyraz2[i] != '\0'; i++) {
if (wyraz2[i] >= 'a' && wyraz2[i] <= 'z'){
    licznik2[wyraz2[i] - 'a']++; }
else if (wyraz2[i] >= 'A' && wyraz2[i] <= 'Z') {
    licznik2[wyraz2[i] - 'A']++;
}   
}
printf("%s\n", wyraz2);
for(i = 0; i < 26; i++ ) {
    if(licznik2[i] > 0) {
       
    }

}
for (i = 0; i < 26; i++) {
    if (licznik1[i] != licznik2[i]) {
        printf("To nie sa anagramy\n");
        return 0;
    }
}
printf("To sa anagramy\n");



return 0;
} 
