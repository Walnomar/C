#include <stdio.h>

int main (void)
{
    float maksettu1, maksettu2, hinta, takaisin;

    printf("Tuotteen hinta: \n");
    scanf("%f", &hinta);
    
    printf("Anna rahaa: \n");
    scanf("%f", &maksettu1);
    
        if(maksettu1 <hinta)
            {
            printf("Tarvitaan lisää rahaa \n");
            scanf("%f", &maksettu2);
            }
            if(maksettu1 + maksettu2 <hinta)
            {
            printf("Olet liian köyhä \n");
            }
            else if(maksettu1 + maksettu2 ==hinta)
            {
            printf("Kiitos \n");
            }
            else if(maksettu1 + maksettu2 >hinta)
            {
            takaisin = (maksettu1 + maksettu2) - hinta;
            printf("Maksetaan takaisin vaihtorahoina %.2f € \n", takaisin);
            }
}
//takaisin = (maksettu + maksettu) - hinta
