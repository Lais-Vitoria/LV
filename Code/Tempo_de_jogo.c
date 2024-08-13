#include <stdio.h>

int main ()
{
    int H1, H2, M1, M2, D;

    scanf("%d%d%d%d", &H1, &M1, &H2, &M2);

    H1 = H1 * 60;
    H2 = H2 * 60;
    D = (H2 + M2)-(H1 + M1);

    if(D <= 0)
    {
        D = D + 24*60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", D/60, D%60);
}