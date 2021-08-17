#include <stdio.h>
int main (void)

{
    int luku1, luku2;
    
    printf ("Syötä valitsemasi luku \n");
    
    scanf ("%i", &luku1);
    
    printf ("Syötä valitsemasi luku \n");
    
    scanf ("%i", &luku2);
    
    if(luku1 > luku2)
        {
            printf ("%i on suurempi tai \n", luku1);
        }
        else if (luku2 > luku1)
        {
            printf ("%i on suurempi \n", luku2);
        }
        else
        {
            printf ("luvut olivat yhtä suuret\n");
        }

}
