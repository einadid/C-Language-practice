#include <stdio.h>

int main()
{
    char N;
    scanf("%c", &N);

    if (N >= 'a' && N <= 'z' )
    {
        printf("ALPHA\nIS SMALL\n");
    } else if (N >= 'A' && N <= 'Z')
    {
        printf("ALPHA\nIS SMALL\n");
    } else {
        printf("IS DISIT\n");
    }
    
    

    return 0;
}