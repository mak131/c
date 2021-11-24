#include <stdio.h>
#include <stdlib.h>
int add(int,int);
 main()
{
    int a,b,ans;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&a,&b);
    ans = add(a,b);
    printf("Addition is %d: ",ans);

}
int add(int n,int m)
{
    int c;
    c = n + m;
return(c);

}

