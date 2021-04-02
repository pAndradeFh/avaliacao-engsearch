#include <stdio.h>

int main(int args)
{
    char input[100];
    int length, aux = 0;
    scanf("%s", input);
    while (input[aux] != '\0')
        aux++;
    printf("%i", aux)
}