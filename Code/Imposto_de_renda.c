#include <stdio.h>

int main ()
{
    float Salario;

    scanf("%f", &Salario);

    if (Salario > 0.00 && Salario <= 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        if (Salario > 2000.01 && Salario <= 3000.00)
        {
            Salario = (Salario - 2000.00) * 0.08;
            printf("R$ %.2f\n", Salario);
        }
        else
        {
            if (Salario > 3000.01 && Salario <= 4500.00 )
            {
                Salario =  1000.00 * 0.08 + (Salario - 3000.00) * 0.18;
                printf("R$ %.2f\n", Salario);
            }
            else
            {
                if (Salario > 4500.00)
                {
                    Salario = 1000.00 * 0.08 + 1500.00 * 0.18 + (Salario - 4500.0) * 0.28;
                    printf("R$ %.2f\n", Salario);
                }
            }
        }
        
    }
    
}
