#include <stdio.h>

void main()
{
    int viisikymmentä, kaksikymmentä, kymmenen, viisi, kaksi;
    int rahasumma, jaljella;
    
    
    printf ("Valitse rahasumma 0-100 sentin väliltä:\n");
    scanf ("%i", &rahasumma);
    
    viisikymmentä = rahasumma / 50;
    
    jaljella = rahasumma % 50;
    
    kaksikymmentä = jaljella / 20;
    
    jaljella = jaljella % 20;
    
    kymmenen = jaljella / 10;
    
    jaljella = jaljella % 10;
    
    viisi = jaljella / 5;
    
    jaljella = jaljella % 5;
    
    kaksi = jaljella / 2;
    
    jaljella = jaljella &2;
    
    printf ("Takaisin maksetaan: \n");
    printf ("%i kappaletta 50 senttiä \n", viisikymmentä);
    printf ("%i kappaletta 20 senttiä \n", kaksikymmentä);
    printf ("%i kappaletta 10 senttiä \n", kymmenen);
    printf ("%i kappaletta 5 senttiä \n", viisi);
    printf ("%i kappaletta 2 senttiä \n", kaksi);
    
}
