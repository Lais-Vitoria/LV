#include <stdio.h>

int main ()
{
    int Num1, Num2, Num3, Aux, Orig1, Orig2, Orig3;

    scanf("%d", &Num1);
    scanf("%d", &Num2);
    scanf("%d", &Num3);

    Orig1 = Num1;
    Orig2 = Num2;
    Orig3 = Num3;

    if (Num1 > Num2) 
    {
        Aux = Num1;
        Num1 = Num2;
        Num2 = Aux;
    }
    if (Num1 > Num3) 
    {
        Aux = Num1;
        Num1 = Num3;
        Num3 = Aux;
    }
    if (Num2 > Num3) 
    {
        Aux = Num2;
        Num2 = Num3;
        Num3 = Aux;
    }
    printf("%d\n", Num1);
    printf("%d\n", Num2);
    printf("%d\n", Num3);
    printf("\n");
    printf("%d\n", Orig1);
    printf("%d\n", Orig2);
    printf("%d\n", Orig3);
    
}