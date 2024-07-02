#include <stdio.h>

int main() {
    int Vetor1[10], Vetor2[20], VetorC[10];
    int C, D, L = 0;

    for (int i = 0; i < 10; i++) {
        printf("Entre com o %d Número: ", i + 1);
        scanf("%d", &Vetor1[i]);
    }

    for (int i = 0; i < 20; i++) {
        printf("Entre com o %d Número: ", i + 1);
        scanf("%d", &Vetor2[i]);
    }

    for (int i = 0; i < 10; i++) 
    {
        C = 0;
        while (Vetor1[i] != Vetor2[C] && C < 20) 
            C++;
        if (C < 20) 
        { // Significa que encontramos um elemento comum
            D = 0;
            while (D < L && Vetor1[i] != VetorC[D])
            {
                D++;
            }
            if (D == L) { // Significa que o elemento não está no VetorC ainda
                VetorC[L] = Vetor1[i];
                L++;
            }
        }
    }

    if (L != 0) {
        printf("\nElementos comuns:");
        for (int i = 0; i < L; i++) 
            printf("\n%d", VetorC[i]);
    }
    else
    {
        printf("\nNão ha elementos em comuns:");
    }

    return 0;
}
