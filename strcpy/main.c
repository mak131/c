#include <stdio.h>
#include <string.h>

main()
{
    char a[10]={"Aamir"};
    char b[5] = {"Khan"};
    strncpy(a,b,3);
    printf("%s\n%s",a,b);

    return 0;
}
