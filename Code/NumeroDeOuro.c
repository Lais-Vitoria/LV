#include <stdio.h>

int Fibonacci(int n)
{
    int a = 0, b = 1;
    int proximo;

    if (n == 0)
    {
        return a;
    }
    else
    {
        if (n == 1)
        {
            return b;
        }
    }

    for (int i = 2; i <= n; i++)
    {
        proximo = a + b;
        a = b;
        b = proximo; 
    }
    return b;
}

double NumAurea()
{
    int a = Fibonacci(50);
    int b = Fibonacci(49);
    double Naura =(double) a/b;

    return Naura;
}

double valorx( double x)
{
    double mult;
    
    mult = x * NumAurea();
    
    return mult;
}

void maiorlado( double n[], double n2[], int N)
{
    for (int i = 0; i < N; i++)
    {
        n2[i] = valorx(n[i]); 
    }
    
}
int main()
{
    int Num;

    printf("\nDigite a quantidade de retãngulo: ");
    scanf("%d", &Num);

    double N[Num]; 
    double N2[Num];

    for (int i = 0; i < Num; i++)
    {
        printf("\nEntre com lado menor do %d retângulo: ", i + 1);
        scanf("%lf", &N[i]);
    }
    maiorlado(N,N2,Num);

    printf("\nLista de Retângulos\n\n");
    for (int i = 0; i < Num; i++)
    {
        printf("%d Retângulo - Altura = %.2lf - Largura = %.2lf - Área do retângulo = %.4lf\n",
        i+1, N[i], N2[i], N[i] * N2[i]);
    }
    
    
}   