#include <stdio.h>
#include <ctype.h>

/*ispunct() this function are check user type Punctuation character or not*/
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ispunct(ch))
    {
        printf("Character is a Punctuation character");
    }
    else
    {
        printf("Character is Not Punctuation character");
    }
}
