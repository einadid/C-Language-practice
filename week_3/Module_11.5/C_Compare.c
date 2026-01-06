// C. Compare
// time limit per test1 second
// memory limit per test256 megabytes
// Given two strings X and Y . Print the smallest lexicographical one.

// Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

// Input
// Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

// Output
// Print the smallest lexicographical string.

// Note: If both of X and Y are equal, print any of them.

// Example
// Input
// acm
// acpc
// Output
// acm
// Note
// For more information visit Lexicographical order: https://en.wikipedia.org/wiki/Lexicographical_order


#include <stdio.h>

int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);

    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] < b[i])
        {
            printf("%s\n", a);
            return 0;
        }
        else if (a[i] > b[i])
        {
            printf("%s\n", b);
            return 0;
        }
        i++;
    }

     if (a[i] == '\0' && b[i] == '\0')
        printf("%s\n", a);           
    else if (a[i] == '\0')
        printf("%s\n", a);   
    else
        printf("%s\n", b);       

    return 0;
}
