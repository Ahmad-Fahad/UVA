#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int testCase = 0;
    scanf("%lld", &testCase);
    while(testCase--) {
        long long int n = 0, sum = 0;
        scanf("%lld", &n);
        sum = n*(n+1);
        sum /= 2;
        if(sum%3 == 0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
return 0;
}



