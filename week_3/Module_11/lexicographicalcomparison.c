#include<stdio.h>
#include<stdbool.h>
int main (){
    char a[1001], b[1001];
    scanf("%s %s", &a, &b);

    int i= 0 ;
    while (true)
    {
        if (a[i] == '\0' && b[i]== '\0')
        {
            printf("Equal");
            break;
        } 
        else if (a[i ] == '\0' )
        {
            /* code */
            printf("A is small ");
                        break;
        }
        else if (b[i] == '\0' )
        {
            /* code */
            printf("B" );
                        break;
        }
        else if (a[i ] == b[i] )
        {
            /* code */
            i++;
        }
        else if (a[i] < b[i] )
        {
            /* code */
            printf("A is small " );
                        break;
        }
        else if (a[i] > b[i] )
        {
            /* code */
            printf("B is small ");
                        break;
        }
        
        
        
        
    }
    return 0 ;
}