#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n );

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &ar[i]);
    }
    int sum = 0 ; 
    int sub = 0 ;
    for (int i = 0; i < n; i++)
    {
        if ( ar[i] > 0)
        {
            sum += ar[i]; 
        }
        else if (ar[i] < 0)
        
        
        {
            sub += ar[i]; 
        }
        
    }
    printf("%d %d\n", sum , sub);
    
    
    
    return 0;
}