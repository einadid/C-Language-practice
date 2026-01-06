#include <stdio.h>
#include <string.h>

int main (){
    char a[101], b[101];
    scanf("%s %s", a , b);
    
    int i = 0;
    while (a[i] != '\0')
    {
        
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    return 0 ;
 
    
}