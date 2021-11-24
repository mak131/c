#include <stdio.h>
#include <ctype.h>

/*isdigit() Sthis function are use to check user type number or not*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isdigit(ch))
    {
        printf("Valid Character");
    }
    else
    {
        printf("Invalid Character");
    }
}
