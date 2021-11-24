#include <stdio.h>
#include <stdlib.h>

/*strrev(); this function are use to reverse the string or character */
int main()
{
    char a[10] = "AAMIR";
    char b[10] = "khan";
    strrev(a);
    strrev(b);
    printf("%s",a);
    printf("\n%s",b);
}
