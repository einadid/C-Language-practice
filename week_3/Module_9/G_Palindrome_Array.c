#include <stdio.h>

int main()
{
    int n; 
    scanf("%d", &n);
        
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int i = 0;
    int j = n-1 ; 
    int palilindrome = 1; 

    while (i < j){
        if (a[i] != a[j])
        {
            palilindrome = 0; 
            break;
            printf("YES");
        }
        i++;
        j--;
    }

    if (palilindrome == 1)
    {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}