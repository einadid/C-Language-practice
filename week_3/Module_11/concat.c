#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] , b[100];
    scanf("%s %s", &a, &b);

    int lena = strlen(a);
    int lenb = strlen(b);

    for (int i = 0; i <= lenb; i++) {
        a[i+lenb]= b[i];
        
    }

    for (int i = 0; i < lena; i++)
    {
       b[i+lena] =  a[i] ;
    }
    printf("%s\n", b);

    printf("%s", a);

        
    
    
    
    return 0;
}