#include <stdio.h>
#include <conio.h>
int add(void);

int main()
{
    int ans;
    ans = add();//function call
    printf("\nAddition is: %d",ans);

}//function decleration
int add(void)
{
    int a,b,c;
    printf("Enter a two Number: ");
    scanf("%d%d",&a,&b);
    c = a+b;
    return(c);
}
