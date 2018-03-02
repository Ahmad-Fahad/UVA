#include<bits/stdc++.h>
using namespace std;
int power(int base, int expotent)
{
    int result = 1;
    for(int i=0; i<expotent; i++) {
        result = result * base;
    }
    return result;
}
int main()
{
    string number;
    while(1) {
        long long int digit = 0, value = 0, sum = 0;
        cin>>number;
        int length = number.length();
        int p = length;
        if(length == 1 && number[0] - 48 == 0) {
                break;
        }
        else {
            for(int i=1; i<=length; i++) {
                digit = number[i-1] - 48;
                if(digit) {
                    value = power(2, p) - 1;
                    value = digit * value;
                }
                else {
                    value = 0;
                }
                sum = sum + value;
                p--;
            }
            printf("%lld\n", sum);
        }

    }
    return 0;
}
