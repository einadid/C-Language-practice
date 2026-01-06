#include <stdio.h>

int main() {
    int a = 12;  // Binary: 00001100 (1100)
    int b = 10;  // Binary: 00001010 (1010)
    
    printf("a = %d (%08x) = %s\n", a, a, "00001100");
    printf("b = %d (%08x) = %s\n\n", b, b, "00001010");
    
    // 1. & Bitwise AND
    printf("& AND: %d (%08x)\n", a & b, a & b);  // 00001000 = 8
    
    // 2. | Bitwise OR  
    printf("| OR : %d (%08x)\n", a | b, a | b);  // 00001110 = 14
    
    // 3. ^ Bitwise XOR
    printf("^ XOR: %d (%08x)\n", a ^ b, a ^ b);  // 00000110 = 6
    
    // 4. ~ Bitwise NOT
    printf("~ NOT a: %d (%08x)\n", ~a, ~a);       // সব বিট উল্টে
    
    // 5. << Left Shift
    printf("a << 2: %d (%08x)\n", a << 2, a << 2);  // 00110000 = 48
    
    // 6. >> Right Shift
    printf("a >> 2: %d (%08x)\n", a >> 2, a >> 2);  // 00000011 = 3
    
    return 0;
}
