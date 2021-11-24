#include <stdio.h>
#include <string.h>
/*this function are same compare to string character by character
strcmpi(str1,str2) and this function are not case sensitive*/
int main()
{
    int n;
    char str1[10] = "Make";
    char str2[10] = "MAKE";
    n = strcmpi(str1,str2);
    printf("\n%d",n);
    return 0;
}

