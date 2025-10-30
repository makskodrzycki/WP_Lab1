#include <stdio.h>

// Zmienna globalna – istnieje przez cały czas działania programu
int licznik = 0;

void funkcja() {
    licznik+=1;
}

int main() {
    printf("Podana wartość licznika = %d \n", licznik);
    funkcja();
    funkcja();
    funkcja();
    printf("Po trzykrotnym wywołaniu funkcji licznik przyjmuje wartość = %d \n", licznik);
    return 0;
}