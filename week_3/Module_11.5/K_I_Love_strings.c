// K. I Love strings
// time limit per test2 seconds
// memory limit per test64 megabytes
// Given two strings S and T. Print a new string that contains the following:

// 1. The first letter of the string S followed by the first letter of the string T.
// 2. the second letter of the string S followed by the second letter of the string T.
// 3. and so on...
// In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
// Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

// Input
// The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

// Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

// Output
// For each test case, print the required string.

// Example
// Input
// 2
// ipAsu ccsit
// ey gpt
// Output
// icpcAssiut
// egypt

#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int test = 0; test < n; test++) {
        char S[51], T[51];
        scanf("%s %s", S, T);
        
        int lenS = strlen(S);
        int lenT = strlen(T);
        int minLen = lenS < lenT ? lenS : lenT;
        
        for (int i = 0; i < minLen; i++) {
            printf("%c%c", S[i], T[i]);
        }
        
        if (lenS > lenT) {
            for (int i = minLen; i < lenS; i++) {
                printf("%c", S[i]);
            }
        } else {
            for (int i = minLen; i < lenT; i++) {
                printf("%c", T[i]);
            }
        }
        
        printf("\n");
    }
    return 0;
}