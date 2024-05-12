#include <stdio.h>
#include <locale.h>

int main ()
{   int SeqA[10], SeqB[10], soma[10] , Opcao, k, Validar();
    setlocale(LC_ALL, "Portuguese");
    do
    {
        printf("\nPrimeira sequência\n");
        for (int i = 0; i < 10; i++)
        {
            SeqA[i] = Validar();
        }
        printf("\nSegunda sequência\n");
        for (int j = 0; j < 10; j++)
        {
            SeqB[j] = Validar();
        }
        for ( k = 0; k < 10; k++)
        {
            soma[k] = SeqA[k] + SeqB[k];
        }
        for ( k = 0; k < 10; k++)
        {
            printf("Vetor soma [%d] = %d\n", k +1, soma[k]);
        }
        
        printf("\nSe Deseja continuar tecle 1 p/Sim ou 2 P/ Nao: ");
        scanf("%d", &Opcao);
        
    } while (Opcao == 1);
}

int Validar ()
{
    int Valor;
    printf("Digite um número de 1 a 99: ");
    scanf("%d", &Valor);
    while (Valor < 1 || Valor > 99)
    {
        printf("Número inválido tecle outro: ");
        scanf("%d", &Valor);
    }
    return Valor;
}
    
