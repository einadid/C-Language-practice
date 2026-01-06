#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &ar[i]);
        
    }
    int min = ar[0];
    for (int i = 1; i < n; i++) {
        if ( ar[i] < min )
        {           
            min = ar[i];
        }
    }
    
    printf("%d\n", min) ;
    
    
    return 0;
}