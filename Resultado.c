#include <stdio.h>

float Validar()
{
    float Nota[3], ValorTotal = 0 ;
    for (int i = 0; i < 3; i++)
    {
        printf("\nDigite a Nota: ");
        scanf("%f", &Nota[i]);
        if (Nota[i] < 1 || Nota[i] > 10.0)
        {
            printf("Nota invalida digite novamente: ");
            scanf("%f", &Nota[i]);
        }   
        ValorTotal = ValorTotal + Nota[i];
    }
    return ValorTotal /3 ;
}

int main ()
{
    int Opcao;
    float Media[1], Validar();
    char Nome[1][50];
    printf("digite um numero superio p/ finalizar: ");
    scanf("%d", &Opcao);
    getchar();
    for (int i = 0; i < Opcao; i++)
    {
        printf("\nDigite o nome do(a) aluno: ");
        scanf("%[^\n]", Nome[i]);
        Media[i]= Validar();
        getchar();
    }
    printf("\nLista Numerada\n");
    for (int i = 0; i < Opcao; i++)
    {
        printf("\n%d. %s - Media: %.1f - ", i+1, Nome[i], Media[i]);
        if (Media[i] >= 6.0)
        {
            printf("AP");
        }
        else
        {
            printf("RP");
        }
    }
    
}
