#include <stdio.h>
#include <stdlib.h>
/*strcat(a,b) this function are use to join to string or character*/
int main()
{
    char    a[20]= "Aamir";
    char    b[10]= " Khan";
    strcat(a," b");
    printf("%s",a);
    return 0;
}
