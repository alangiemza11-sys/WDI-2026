#include<stdio.h>
#define N 1000
int main() {
char szyfr[N];
    int n;
    int i;
    int c;
int menu;
printf("Podaj swój kod skladajcy sie z cyfr alfabetu:    ");
    scanf("%999s", szyfr);
    printf("Podaj klucz: ");
    scanf("%d", &n);
do {
printf("------MENU-------\n");
printf("Aktualny stan Kodu: %s     Klucz szyfrujacy: %d\n  ", szyfr, n);
printf("1. Szyfruj\n");
printf("2. Deszyfruj\n");
printf("3. Zmien klucz\n");
printf("0. koniec\n");
 printf("Wybor: ");
        scanf("%d", &menu);


switch(menu) {
case 1:
for(i= 0; szyfr[i] != '\0'; i++) {
        if(szyfr[i] >= 'A' && szyfr[i] <= 'Z') {
            szyfr[i] = szyfr[i] + ('a' - 'A');
        }
    }
for(i = 0; szyfr[i] != '\0'; i++) {
        c = szyfr[i] + n; 
        szyfr[i] = c;
    } 
    printf("kod zaszyfrowany wedlug klucza : %s\n", szyfr);
    break;
    case 2:
    for(i= 0; szyfr[i] != '\0'; i++) {
        if(szyfr[i] >= 'A' && szyfr[i] <= 'Z') {
            szyfr[i] = szyfr[i] + ('a' - 'A');
        }
    }
for(i = 0; szyfr[i] != '\0'; i++) {
        c = szyfr[i] - n; 
        szyfr[i] = c;
}
        printf("Kod odszyfrowany:  %s\n", szyfr);
break;
        case 3:
        printf("Podaj nowy kod");
        
    scanf("%d", &n);
    break;
    case 0:
    return 0;
    break;
    default: 
    printf("Nie ma takiej opcji\n");
                break;
}
} while (menu != 0);

   
    
   

    
    return 0;
    }
     
