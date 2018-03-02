#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k = 0, n = 0, m =0, x = 0, y = 0;

    while(1)
    {
        scanf("%lld",&k);

        if(k == 0)
        {
            break;
        }
        else
        {
            scanf("%lld %lld",&n, &m);

            while(k--)
            {
                scanf("%lld %lld",&x, &y);

                if(x == n || y == m)
                {
                    printf("divisa");
                }
                else
                {
                    if(y > m)
                    {
                        printf("N");
                    }
                    else
                    {
                        printf("S");
                    }
                    if(x > n)
                    {
                        printf("E");
                    }
                    else
                    {
                        printf("O");
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
