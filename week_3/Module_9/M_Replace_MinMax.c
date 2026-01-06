#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
        
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min = a[0] ; 
    int max = a[0] ; 

    int minpos = 0 , maxpos = 0 ; 

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] < min)
        {
            /* code */
            min = a[i];
            minpos = i;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxpos = i; 

            /* code */
        }
    }

    int temp = a[minpos]; 
    a[minpos] = a[maxpos];
    a[maxpos] = temp ; 
    for (int i = 0; i < n; i++) {
        
        
        printf("%d ", a[i]);
    }
    
    return 0;
}