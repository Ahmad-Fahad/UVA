#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int testCase = 0, count = 0;
    scanf("%lld", &testCase);
    while(testCase--) {
        long long int number = 0, n = 0, r = 0, sum = 0;
        scanf("%lld", &number);
        n = number;
        while(1) {
            if(n<=9) {
                sum = n;
                break;
            }
            else {
                while(n != 0) {
                    r = n % 10;
                    sum = sum + r*r;
                    n /= 10;
                }
                n = sum;
                sum = 0;
            }
        }

        if(sum == 1 || sum == 7) {
            printf("Case #%lld: %lld is a Happy number.\n", ++count, number);
        }
        else {
            printf("Case #%lld: %lld is an Unhappy number.\n", ++count, number);
        }
    }
return 0;
}


