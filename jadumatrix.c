#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if(n != m)
    {
        printf("NO\n");
        return 0;
    }

    int jadu = 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j || i + j == n - 1)
            {
                if(a[i][j] != 1)
                {
                    jadu = 0;
                }
            }
            else
            {
                if(a[i][j] != 0)
                {
                    jadu = 0;
                }
            }
        }
    }

    if(jadu)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}