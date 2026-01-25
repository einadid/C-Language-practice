#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int x;
    scanf("%d", &x);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            int val = ar[i] + ar[k];
            if (val == x)
            {
                printf("Found: %d + %d = %d\n", ar[i], ar[k], val);
                found = 1;
            }
        }
    }

    if (!found)
    {
        printf("No pair found\n");
    }

    return 0;
}
