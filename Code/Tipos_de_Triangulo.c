#include <stdio.h>

int main ()
{
    float A, B, C, Aux;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if (A < B )
    {
        Aux = A;
        A = B;
        B = Aux;
    }
    if (A < C)
    {
        Aux = A;
        A = C;
        C = Aux;
    }
    if (B < C)
    {
        Aux = B;
        B = C;
        C = Aux;
    }
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ( A*A > B*B + C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
    }
    if (A*A < B*B + C*C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (A == B && B == C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else
    {
        if ( B == C || A == B )
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    if ( A*A == B*B + C*C)
    {   
        printf("TRIANGULO RETANGULO\n");
    }
}