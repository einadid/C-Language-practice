#include <stdio.h>
#include <math.h>

int main()
{
    int a = -10;
    double x = 4.3;
    double y = 9;

    int c1 = (int)ceil(x);     
    // ceil(): দশমিক সংখ্যাকে উপরের পূর্ণসংখ্যায় নেয়

    int c2 = (int)floor(x);    
    // floor(): দশমিক সংখ্যাকে নিচের পূর্ণসংখ্যায় নেয়

    int c3 = (int)round(x);    
    // round(): দশমিক সংখ্যাকে সবচেয়ে কাছের পূর্ণসংখ্যায় নেয়

    int c4 = (int)sqrt(y);     
    // sqrt(): কোনো সংখ্যার বর্গমূল বের করে

    int c5 = (int)pow(2, 3);   
    // pow(): একটি সংখ্যার power বের করে (2 এর power 3)

    int c6 = abs(a);           
    // abs(): কোনো সংখ্যার ধনাত্মক মান (absolute value) দেয়

    printf("ceil   = %d\n", c1);
    printf("floor  = %d\n", c2);
    printf("round  = %d\n", c3);
    printf("sqrt   = %d\n", c4);
    printf("power  = %d\n", c5);
    printf("abs    = %d\n", c6);

    return 0;
}
