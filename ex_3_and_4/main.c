#include <stdio.h>
#include <string.h>

void ConcatRemove(char s, char t, char k)
{
    int length = strlen(s);
    printf("Length of the string = %d\n", length);
}

int main(args)
{
    char s[100], t[100];
    int k;
    scanf("%s", s);
    scanf("%s", t);
    scanf("%i", &k);
    ConcatRemove(s, t, k);
}