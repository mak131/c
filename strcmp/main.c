#include <stdio.h>
#include <string.h>
/*this function are compare to string character by character
strcmp(str1,str2) and this function are case sensitive*/
int main()
{
    int n;
    char str1[10] = "Make";
    char str2[10] = "Make";
    n = strcmp(str1,str2);
    printf("\n%d",n);
    return 0;
}
