#include <stdio.h>
#include <string.h>
/*strchr(str,a) this function are use to print string starting character */
int main()
{
    char a[100] = "this function are use to print string to some charactre";
    char *p;
    char *c;
    p = strchr(a,'f');
    c = strrchr(a,'t'); /* this function are use to print string last character */
    printf("\n%s",p);
    printf("\n%s",c);

}
