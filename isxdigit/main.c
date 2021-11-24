#include <stdio.h>
#include <ctype.h>
/*isxdigit() Sthis function are use to check user type hexadecimal number or not*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isxdigit(ch))
    {
        printf("Valid Character");
    }
    else
    {
        printf("Invalid Character");
    }
}
