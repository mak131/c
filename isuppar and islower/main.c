#include <stdio.h>
#include <ctype.h>
/*islower() or isupper Sthis function are use to check user type lowercase or uppercase*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(islower(ch))
    {
        printf("You Enter lowercase character");
    }

    else
    {
        printf("Invalid Character");
    }

}
