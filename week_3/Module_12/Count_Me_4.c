// Problem Statement

// You will be given a string S as input. 
// The string will contain only English small alphabets and will not contain any spaces. 
// You need to tell how many time each alphabets from a to z appears. 
// But if the count is zero, you don't need to prin that.

// Input Format

// Input will contain only S.
// Constraints

// 1 <= |S| <= 10000; Here |S| means the length of S.
// Output Format

// Ouput in the format show in the sample output.
// Sample Input 0

// thefoxisbrave
// Sample Output 0

// a - 1
// b - 1
// e - 2
// f - 1
// h - 1
// i - 1
// o - 1
// r - 1
// s - 1
// t - 1
// v - 1
// x - 1
// Sample Input 1

// dotheyloveme
// Sample Output 1

// d - 1
// e - 3
// h - 1
// l - 1
// m - 1
// o - 2
// t - 1
// v - 1
// y - 1

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char S[10001];
//     scanf("%s", S);
    
//     int count[26] = {0}; 
//     for (int i = 0; S[i] != '\0'; i++) {
//         count[S[i] - 'a']++; 
//     }
    
//     for (int i = 0; i < 26; i++) {
//         if (count[i] > 0) {
//             printf("%c - %d\n", 'a' + i, count[i]);
//         }
//     }
    
//     return 0;
// }


#include <stdio.h>

int main() {
    char s[10001];
    scanf("%s", s);

    printf("Input string: %s\n\n", s);

    int freq[26] = {0};
    printf("All frequency initialized to 0\n\n");

    // Counting frequency
    for(int i = 0; s[i] != '\0'; i++) {

        printf("Character s[%d] = %c\n", i, s[i]);

        int index = s[i] - 'a';
        printf("Index = %c - 'a' = %d\n", s[i], index);

        freq[index]++;
        printf("freq[%d] increased to %d\n\n", index, freq[index]);
    }

    printf("Final Result:\n");

    // Printing result
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("%c - %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
