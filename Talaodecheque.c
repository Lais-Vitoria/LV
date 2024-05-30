#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{//Contorle de uso de talão de cheque.
    setlocale(LC_ALL, "Portuguese");

    int Numero[20], Dia[20], Mes[20], Ano[20], Opcao;
    float Valor[20], Valor1();
    char Destino[20][31], Validar();

    printf("|-----------------------------------------|");
    printf("\n|  Controle de uso de talão de cheque!    |");
    printf("\n|-----------------------------------------|");

    do
    {
        for (int i = 0; i < 20; i++)
        {   //Leitura numero do cheque
            printf("\n\nNúmero do Cheque: ");
            scanf(" %d", &Numero[i]);

            //leitura da data do cheque.
            printf("\n\nEntre com a data no formato dd/mm/aaaa: ");
            scanf(" %2d/%2d/%4d", &Dia[i], &Mes[i], &Ano[i]);


            //leitura do valor do cheque.
            Valor[i] = Valor1(); 

            //Leitura do destino do cheque.
            Validar(Destino[i]);
            
        }
        //relatorio dos cheque.
        printf("\n\n|--------------------------------------------------------------------------------|");
        printf("\n|   Número do cheque   |    Data    |    Valor    |           Destino            |");
        printf("\n|--------------------------------------------------------------------------------|");
        for (int i = 0; i < 20; i++)
        {
            printf("\n| %-19d  | %02d/%02d/%4d |  %.2f     |%-30s|", Numero[i], Dia[i], Mes[i], Ano[i], Valor[i], Destino[i]);
        }

        printf("\nDeseja continuar 1 p/sim e 2 p/Não: ");
        scanf("%d", &Opcao);
        
    } while (Opcao == 1);
   
}

// Validação para que o valor seja de 10,00 á 1.000,00.

float Valor1()
{
    float Vcheque;
    do {
        printf("Digite um valor de 10,00 a 1.000,00: ");
        scanf("%f", &Vcheque);
        if (Vcheque < 10.00 || Vcheque > 1000.00) {
            printf("Valor inválido. ");
        }
    } while (Vcheque < 10.00 || Vcheque > 1000.00);
    return Vcheque;
}

// Validação para que destino tenha apenas 30 caracteres.

char Validar(char *Destino)
{
    do {
        printf("Digite o destino (até 30 caracteres): ");
        scanf(" %[^\n]s", Destino);
        if (strlen(Destino) > 30) 
        {
            printf("Destino muito longo. ");
        }
    } while (strlen(Destino) > 30);
}