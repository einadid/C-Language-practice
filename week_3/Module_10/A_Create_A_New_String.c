#include <stdio.h>

int main()
{
    char s[10001], t[100001];
    scanf("%s %s", &s , &t);

    printf("%zu %zu\n", strlen(s),strlen(t));
    printf("%s %s\n", s, t);
        
    
    
    return 0;
}