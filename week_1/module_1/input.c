
#include <stdio.h>

int main(void) {
    int a;
    float g;
    char d;

    // প্রথমে int এবং float নিব
    scanf("%d %f", &a, &g);

    // এরপর char নেওয়ার সময় আগের newline/space স্কিপ করতে "%c" এর আগে একটি স্পেস
    scanf(" %c", &d);  // ← লক্ষ্য করো: "%c" এর আগে স্পেস আছে

    printf("%d %.2f %c\n", a, g, d);
    return 0;
}
