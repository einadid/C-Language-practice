#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    scanf("%s", &s);

    
    int sum = 0;
    int lenth =strlen(s);
    for (int  i = 0; i < lenth; i++)
    {
        sum += s[i] - '0' ;
        // sum += s[i] - 48 ;
    }
    printf("%d\n", sum);
    
    
    return 0;
}