#include <stdio.h>

int main ()
{
    float Numero;
    int i, total = 0;

    for ( i = 0; i < 6; i++)
    {
        scanf("%f", &Numero);
        if (Numero > 1)
        {
            total += 1;
        }
        
    }
    printf("%d valores positivos\n", total);
    
}