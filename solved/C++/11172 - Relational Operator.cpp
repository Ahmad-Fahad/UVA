#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0;

    long long int a = 0, b = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%lld %lld",&a, &b);

        if(a < b)
        {
            printf("<\n");
        }
        else if(a > b)
        {
            printf(">\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
