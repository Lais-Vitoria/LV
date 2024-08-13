#include <stdio.h>

int main ()
{
    char Char[50] = "AMO FAZER EXERCICIO NO URI";

    printf("<%s>", Char);
    printf("\n<%30s>", Char);
    printf("\n<%.20s>", Char);
    printf("\n<%-20s>", Char);
    printf("\n<%-30s>", Char);
    printf("\n<%.30s>", Char);
    printf("\n<%30.20s>", Char);
    printf("\n<%-30.20s>\n", Char);
}