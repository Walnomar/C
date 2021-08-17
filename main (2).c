#include <stdio.h>

int main(void) {
    
    float paino, pituus, puhelinnumero, syntymävuosi;
    char nimi;
    
    printf("Syötä puhelinnumerosi: \n");
    scanf("%f", &puhelinnumero);
    
    printf("Syötä nimi: \n");
    scanf("%s", &nimi);
    
    printf("Syötä syntymävuosi: \n");
    scanf("%f", &syntymävuosi);
    
    printf("Syötä pituus ja paino: \n");
    scanf("%f %f \n", &pituus, &paino);
    
    if(pituus || paino < 0) {
            printf("Virheellinen arvio \n");
    }

}

