#include <stdio.h>
#include <conio.h>
int add(int, int);

 main()
{
    int a,b,ans;
    printf("Enter a two number: ");
    scanf("%d%d",&a,&b);
    ans = add(a,b);
    printf("Addition is: %d",ans);

}
int add(int n,int m)
{

    return(n + m);
}
