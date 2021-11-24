#include <stdio.h>
#include <string.h>

/*this function are compare to string character by character
stricmp(str1,str2) and this function are not case sensitive*/
int main()
{
    int n;
    char str1[10] = "AAMIR";
    char str2[10] = "Aamir";
    n = stricmp(str1,str2);
    printf("\n%d",n);
    return 0;
}
