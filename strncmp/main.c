#include <stdio.h>
#include <string.h>

/*this function are use how many character are compare
strncmp(str1,str2) and this function are case sensitive*/
int main()
{
    int n;
    char str1[10] = "MAKEofrto";
    char str2[10] = "MAKEit";
    n = strncmp(str1,str2,4);
    printf("%d",n);
    return 0;
}
