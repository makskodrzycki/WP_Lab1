#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia;
    float wzrost;
    bool prawko=true;

    printf("Podaj rok uroedzenia: ");
    scanf("%d", &rok_urodzenia);
    printf("Podaj swój wzrost: ");
    scanf(" %f", &wzrost);
    printf("Jestem urodzony w %d roku, mam %.2f m wzrostu, mam prawo jazdy.\n", rok_urodzenia, wzrost);
    int wiek=2025-rok_urodzenia;
    printf("Mam %d lat.\n", wiek);

    return 0;
}