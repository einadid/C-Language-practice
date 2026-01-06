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

    int min = ar[0];
    int pos = 1;   // 1-indexed position

    for (int i = 1; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            pos = i + 1;   // convert index to position
        }
    }

    printf("%d %d\n", min, pos);

    return 0;
}
