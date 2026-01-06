#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &ar[i]);
        
    }
    long long int searching;
    scanf("%lld", &searching);

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == searching)
        {
            printf("%d\n", i);
            return 0 ;
        } 
        
        
    }
    
    
    printf("-1");
    
    
    
    return 0;
}