// #include <stdio.h>

// int main()
// {
//     int a ; 
//     scanf("%d", &a);
//     int n;
//     for (int i = 1; i <=a; i++)
//     {

//         scanf("%d", &n);
//         if (n == 0)
//         {
//             printf("0");
//         }
        
//         while (n != 0)
//         {
//             printf("%d ", n%10);
//             n/= 10;
//         }
//         printf("\n");
        
        
//     }
    
//     return 0;
// }

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int n;
    for (int i = 1; i <= a; i++)
    {

        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n /= 10;
        } while (n != 0);

        printf("\n");
    }

    return 0;
}