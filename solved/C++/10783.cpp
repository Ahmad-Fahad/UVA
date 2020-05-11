#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase, Case = 0;

    scanf("%d", &testCase);

    while(testCase--)
    {
        int a = 0, b = 0, sum = 0;

        scanf("%d %d",&a, &b);

        if(a%2 == 0)
        {
            a = a+1;
        }

        for(int i=a; i<=b; i += 2)
        {
            sum = sum + i;
        }

        printf("Case %d: %d\n", ++Case, sum);

    }
    return 0;
}
