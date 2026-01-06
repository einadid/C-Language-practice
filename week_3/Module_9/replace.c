#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);

    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int indx, valu; 
    scanf("%d %d", &indx, &valu);
    
    for (int i = n; i > indx; i--) {
        a[i] = a[i-1];
        
    }
    a[indx] = valu; 

    for (int i = 0; i <=n; i++) {
        
        
        printf("%d ", a[i]);
    }
    
    
    return 0;
}   