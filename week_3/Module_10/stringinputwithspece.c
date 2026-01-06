#include <stdio.h>

int main()
{
    char s[50];
    // gets(s);
    fgets(s, 50, stdin);
    printf("%s\n", s);
    
    
    return 0;
}