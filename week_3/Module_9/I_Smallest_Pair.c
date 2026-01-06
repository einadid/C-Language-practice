#include<stdio.h>
int main()
{
    int t; 
    scanf("%d", &t );
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
 
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
 
        long long minSum = 1e18; 
 
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                long long sum = (long long)a[i] + a[j] + (j - i);
                if (sum < minSum)
                    minSum = sum;
            }
        }
        
        printf("%lld\n", minSum);
    }
    
    return 0;
}
