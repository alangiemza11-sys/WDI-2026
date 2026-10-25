#include <stdio.h>
int main() {
    int a, b, c;
    printf("Podaj 3 liczby calkowite");
    scanf("%d %d %d", &a, &b, &c);

    int suma = a + b + c;
    printf("suma 3 liczb %d\n", suma);

int roznica = a - b;
printf("roznica 2 liczb %d\n", roznica);

int iloczyn = a * c;
printf("iloczyn pierwszej i trzeciej liczby %d\n", iloczyn);

if( b != 0 ) {
    float iloraz = (float)c / b;
    printf("Iloraz trzeciej i drugiej: %.2f\n", iloraz);
} else {
    printf("4. Blad: Nie mozna dzielic przez zero!\n");
}
return 0;


}