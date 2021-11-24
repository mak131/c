#include <stdio.h>
#include <ctype.h>
/*this function are use to
tolower() = convert lower to upper or
toupper() = convert upper to lower*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("\nOutput: %c",toupper(ch));

    return 0;
}
