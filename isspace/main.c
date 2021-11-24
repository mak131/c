#include <stdio.h>
#include <ctype.h>

/*isspace() Sthis function are check user type space or nota*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(isspace(ch))
    {
        printf("You are Entered space");
    }
    else
    {
        printf("You are Not Entered space");
    }
}
