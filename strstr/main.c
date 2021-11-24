#include <stdio.h>
#include <stdlib.h>
/* this function are excetly  same to strchr() (and strrchr same with strrstr function)function only one difference are in both
strchr() function are print after search to first character and strstr() function are print after search an string to match then print*/
int main()
{
    char an[100] = "this function are excetly  same to strchr() function only one difference are in both";
    char *p;
    p = strstr(an,"are");
    printf("%s",p);

}
