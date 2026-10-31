#include <stdio.h>

int main() {

    const unsigned granica = 20U;
    unsigned int suma = 0U;

    for (unsigned int i = 1U; i <= granica; i++) {
        if (i % 3 == 0) {
            suma += i;
        }
    }

    
    printf("Suma liczb od 1 do %u podzielnych przez 3 wynosi: %u\n", granica, suma);

    return 0;
}