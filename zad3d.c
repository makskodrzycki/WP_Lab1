#include <stdio.h>

int main() {

    float temperatura1, temperatura2;
    char kierunek;

    printf("Podaj temperaturę do konwersji: \n");
    scanf("%f", &temperatura1);
    printf("Podaj kierunek: \n");
    scanf(" %c", &kierunek);

    if(kierunek=='F')
        {
            temperatura2=(temperatura1-32)*1.8;
        }
    else
        {
            if (kierunek=='C')
            {
                temperatura2=temperatura1*1.8+32;
            }
        else
            {
                printf("Został podany niepoprawny kierunek.\n");
                return 0;
            }
            
        }

        printf("Twoja temperatura po zmianie na inną jednostkę to %.2f stopni.\n", temperatura2);

    return 0;
}