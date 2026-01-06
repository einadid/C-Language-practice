// #include<stdio.h>
// int main(){
//     for (int i = 100; i >= 1; i--)
//     {
//         if (i%2 == 1)
//         {
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    int i =100;
    while (i >= 1)
    {
        if (i % 2 == 1)
        {
           printf("%d", i); 
        }
        
        i--;
    }
    
    return 0;
}