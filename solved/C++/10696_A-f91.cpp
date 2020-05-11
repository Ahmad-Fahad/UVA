#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1) {
        long long int n = 0, result = 0;
        scanf("%lld", &n);
        if(n == 0) {
            break;
        }
        else {
            if(n <= 100) {
                result = 91;
            }
            else {
                result = n - 10;
            }
        }
        printf("f91(%lld) = %lld\n", n, result);
    }
return 0;
}

