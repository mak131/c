#include <stdio.h>
#include <string.h>
/*strspn() this function are use to match two string */
int main()
{
    int n;
    char c[10]= "Aamirn";
    char d[20]= "AamirKhan";
    n = strspn(c,d);
    printf("\n%d",n);
    return 0;
}
