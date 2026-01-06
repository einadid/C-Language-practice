#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[100];
    scanf("%s %s", &a , &b);
        
    strcat(b, a);

    printf("%s\n", b);
    
    return 0;
}