#include <stdio.h>
#include <conio.h>
void add(int, int);

 main()
{
    int a,b,c;
    printf("Enter a two numbers: ");
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("\nCorrect\n");

}
void add(int n,int m)
{
    int s;
    s = n + m;
    printf("\nAddition is: %d",s);
}
