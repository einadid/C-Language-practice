#include <stdio.h>

// return_type function_name(parameters)
// {

//     return
// }

int sub(  int num3, int num4){
    printf("%d %d\n", num3, num4);
    int ans = num3 - num4;
    return ans; 
}

int sum (int num1, int num2)
{
    printf("%d %d\n", num1, num2);
    int ans = num1 + num2;
    return  ans;
}

int main()
{

    int a , b, c, d;
    scanf("%d %d %d %d", &a, &b, &d, &c);
        

    int val = sum(a,b);
    int val3 = sub(c,d);

    printf("%d\n",val);
    printf("%d\n",val3);
    
    return 0;
}