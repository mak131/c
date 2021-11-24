#include <stdio.h>
#include <stdlib.h>
/*this function are replace string to one character like "namr" convert to '*'
strset(string name,'character')*/
int main()
{
    char str[6] = "Aamir";
    strset(str,'*');
    printf("\n%s",str);
    return 0;
}
