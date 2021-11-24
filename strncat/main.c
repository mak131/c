#include <stdio.h>
#include <stdlib.h>
/*strncat(a,b) this function are use to how many character are join */
int main()
{
    char    a[20]= "Aamir ";
    char    b[10]= "Khans";
    strncat(a,b,4);
    printf("%s",a);
    return 0;
}
