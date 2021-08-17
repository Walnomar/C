#include <stdio.h>
//#include <math.h>

int main (void) {
    int kwhY, kwhP;
    int päiväsähköhinta, yösähköhihnta;
    int sähkölaskuP, sähkölaskuY, sähkölaskuYht;
    int neliöt;
    float kulutusperneliö;
    
    
    printf("Sähkön kulutus päivällä per vuosi(kwh): \n");
    scanf("%i", &kwhP);
    
    printf("Sähkön kulutus yöllä per vuosi(kwh): \n");
    scanf("%i", &kwhY);
    
    printf("Päiväsähköhinta senteissä: \n");
    scanf("%i", &päiväsähköhinta);
    
    printf("Yösähköhinta senteissä: \n");
    scanf("%i", &yösähköhihnta);
    
    
    sähkölaskuP = (kwhP * päiväsähköhinta) / 100;
    printf("Päiväsähkön hinta euroissa on: %i \n", sähkölaskuP);
    
    sähkölaskuY = (kwhY * yösähköhihnta) / 100;
    printf("Yösähkön hinta euroissa on: %i \n", sähkölaskuY);
    
    sähkölaskuYht = sähkölaskuY + sähkölaskuP;
    printf("Sähkön hinta yhteensä vuodessa on: %i \n", sähkölaskuYht);
    
    
    printf("Talon pinta-ala m2: \n");
    scanf("%i", &neliöt);
    
    kulutusperneliö = (kwhP + kwhY) / neliöt;
    printf("Kulutus neliötä kohden: %.2f kwh \n", kulutusperneliö);
    
    if (kulutusperneliö < 200) {
        printf("Kulutat keskimäärää vähemmän sähköä. \n");
    }
}
