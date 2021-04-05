#include <stdio.h>
#include <assert.h>

char *ConcatRemove(char *s, char *t, int k)
{
    int i = 0, size_s = 0, size_t = 0;
    // get the common size
    while (s[i] != '\0' && t[i] != '\0' && s[i] == t[i])
    {
        i++;
        size_s++;
        size_t++;
    }
    // get the size of each string, separately
    while (s[size_s] != '\0')
    {
        size_s++;
    }

    while (t[size_t] != '\0')
    {
        size_t++;
    }
    int p = 0;
    int min_s = size_s - i; //string to be removed from the source
    int min_t = size_t - i; //string to be appended on the source end

    // printf("%i %i %i %i",min_s, min_t, i, k - (min_s + min_t));

    if (k < min_s + min_t)
    { //case the number of steps cannot even cover the removing/appending on the source end
        p = 0;
    }
    else
    {
        // otherwise, we check if we can keep removing/addind one element till we exauste our steps
        // In this case, we need k - (min_s + min_t) to be an even number
        if ((k - (min_s + min_t)) % 2 == 0)
            p = 1;
        else if ((k - size_s - (min_s + min_t)) >= 0 && (k - size_s - (min_s + min_t)) % 2 == 0)
            // Case we can remove all the strings and reuse it
            p = 1;
        else
            p = 0;
    }
    return p == 0 ? "no" : "yes";
}

int main(int args)
{
    char s[100], t[100], *result;
    int k;
    scanf("%s", s); //starting
    scanf("%s", t); //desire
    scanf("%i", &k);
    result = ConcatRemove(s, t, k);
    printf("%s", result);

    assert(ConcatRemove("tab", "tab", 7) == "yes");
}