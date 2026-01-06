#include <stdio.h>
#include<limits.h>
int main()
{
    int a ; 
    scanf("%d", &a);
    int max =INT_MAX ;
    for (int i = 1; i <=a; i++)
    {
        int val ; 
        scanf("%d", &val);
        if (val < max)
        {
            max = val;
        }
        
    }
    printf("%d\n", max);        
    
    return 0;
}