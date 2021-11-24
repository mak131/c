#include <stdio.h>
#include <stdlib.h>
/* this function are use to convert string or character case*/
int main()
{
    char a[10] = "AAMIR";
    char b[10] = "khan";
    strlwr(a);
    strupr(b);
    printf("%s",a);
    printf("\n%s",b);
}
