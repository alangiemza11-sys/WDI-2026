#include<stdio.h>
int main() {
    char w1[30];
    char w2[30];
    int l1 = 0;
    int l2 = 0;
    int i;
    printf("Podaj pierwsza liczbe: ");
    scanf("%29s", w1);
    printf("Podaj druga liczbe: ");
    scanf("%29s", w2);

    while(w1[l1] != '\0') {
        l1++;
    }
     while(w2[l2] != '\0') {
        l2++;
    }
    
if( l1 != l2) {
    printf("Liczby %s i %s NIE sa lustrzane.\n", w1, w2);
    return 0;
}

    for(i = 0; i < l1 && i < l2; i++) {
        if(w1[i] != w2[l2 - 1 - i]) {
            printf("Liczby %s i %s NIE sa lustrzane.\n", w1, w2);
            return 0;
        }
    }


     printf("Liczby %s i %s sa lustrzane.\n", w1, w2);

return 0;
}