#include <stdio.h>

// return_type function_name(parameters)
// {

//     return
// }

int sub(  ){
    int a , b ;
    scanf("%d %d ", &a, &b );
    int ans = a - b;
    return ans; 
}

int sum ( )
{
    int   c, d;
    scanf(" %d %d", &d, &c);
    int ans2 = c + d;
    return  ans2;
}

int main()
{

    
    int ans2 = sum();
    int ans1 = sub();
 

    printf("%d\n",ans1);
    printf("%d\n",ans2);
    
    return 0;
}