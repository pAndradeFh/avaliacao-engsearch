#include <stdio.h>

int main()
{
    int i = 0;
    while (i++ < 100)
        i % 3 == 0 ? (i % 5 == 0 ? printf("FooBaa") : printf("Baa")) : (i % 5 == 0 ? printf("Foo") : printf("%i", i));
    return 0;
}
