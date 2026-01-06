#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] < b[i])
        {
            printf("%s\n", a);
            return 0;
        }
        else if (a[i] > b[i])
        {
            printf("%s\n", b);
            return 0;
        }
        i++;
    }

    if (a[i] == '\0' && b[i] == '\0')
        printf("%s\n", a);           
    else if (a[i] == '\0')
        printf("%s\n", a);   
    else
        printf("%s\n", b);       

    return 0;
}
