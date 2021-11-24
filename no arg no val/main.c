#include <stdio.h>
#include <conio.h>
void massege(void);
int main()
{
    printf("main function\n");
    massege();
    printf("\nafter calling function\n");
    massege();

}
void massege(void)
{
    printf("\nI am a subprogram\n");
}
