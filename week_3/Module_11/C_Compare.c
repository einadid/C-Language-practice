#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int result = strcmp(a,b);     

    if (result < 0)
    {
        printf("%s", a);
    }
    else{
        printf("%s", b);
    }
    
    return 0;
}

