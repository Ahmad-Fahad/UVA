#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int cases = 0;
    while(1) {
        long long int N = 0;
        long long int edge = 0;
        double d = 0;
        scanf("%lld", &N);
        if(N == 0) {
            break;
        }
        else {
                d    = sqrt(9 + 8*N);
                edge = ceil((3 + d) / 2);
            }
            printf("Case %lld: %lld\n", ++cases, edge);

    }
    return 0;
}
