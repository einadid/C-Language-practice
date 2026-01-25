#include <stdio.h>

int main()
{
    int n;

    for (int i = 1; i <=4; i++)
    {
        for (int j = 0; j <= i; j++) {
            printf("*");
            
        }
    }

    printf("\n");

    for (int i = 1; i <=3; i++) {
        
        for(int j=1; j <= 3; j++){
            printf("%d", i );
        }

        
    }
    printf("%d\n");
    
        

    
    
    return 0;
}