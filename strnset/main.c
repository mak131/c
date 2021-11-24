#include <stdio.h>
#include <stdlib.h>
/* this function are use to how many characters are convert
strnset*/
int main()
{
    char str[12] = "Aamir Khan";
    strnset(str,'#',6);
    printf("\n%s",str);
    return 0;
}
