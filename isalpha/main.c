#include <stdio.h>
#include <ctype.h>
/*isalpha() Sthis function are use to find user type alphabet or not*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        printf("Valid Character");
    }
    else
    {
        printf("Invalid Character");
    }

}
