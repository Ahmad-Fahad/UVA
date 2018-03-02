#include<bits/stdc++.h>
using namespace std;
long long int addSum(long long int n)
{
    long long int r = 0, sum = 0;

    while(n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    return sum;
}
int main()
{
    long long int n, result = 0;

    while(1)
    {
        scanf("%lld", &n);

        if(n == 0)
        {
            break;
        }
        else
        {
            result = n;

            while(1)
            {
                if(result > 9)
                {
                    result = addSum(result);
                }
                else
                {
                    printf("%lld\n", result);
                    break;
                }
            }
        }
    }

    return 0;
}
