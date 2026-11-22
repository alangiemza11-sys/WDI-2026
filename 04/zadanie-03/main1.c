#include<stdio.h>

    int main() {
        int i; 
        int licznik[26] = {0};
char znaki[1000];
printf("Podaj ciag znakow:  ");
scanf("%999s", znaki);
for(i = 0; znaki[i] != '\0'; i++) {
if (znaki[i] >= 'a' && znaki[i] <= 'z'){
    licznik[znaki[i] - 'a']++; }
else if (znaki[i] >= 'A' && znaki[i] <= 'Z') {
    licznik[znaki[i] - 'A']++;
}   
}

for(i = 0; i < 26; i++ ) {
    if(licznik[i] > 0) {
        printf(" %c: %d\n", 'a' + i, licznik[i]);
    }

}




return 0;
} 
