#include <stdio.h>

int main (void)

{
    int lämpötila;
    
    printf("Syötä lämpötila: ");
    scanf("%i", &lämpötila);
    
        if(lämpötila >=0 && lämpötila <10)
            {
                printf("KYLMÄÄ \n");
            }
            else if (lämpötila >=11 && lämpötila <15)
            {
                printf("KOLEAA \n");
            }
            else if(lämpötila >=16 && lämpötila <20)
            {
                printf("MELKO LÄMMINTÄ \n");
            }
            else if(lämpötila >=21 && lämpötila <25)
            {
                printf("LÄMMINTÄ \n");
            }
            else
            {
                printf("HELLETTÄ \n");
            }
}
    
