#include <stdio.h>
#include <ctype.h>
/*isalnum() Sthis function are use to check user type alphabet or number*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isalnum(ch))
    {
        printf("Valid Character");
    }
    else
    {
        printf("Invalid Character");
    }

}
