#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n) == 1) {
        int sum = n;
        while(n >= 3) {
            sum = sum + n/3;
            n   = n/3 + n%3;
        }
        if(n == 2) {
            sum = sum + 1;
        }
        printf("%d\n", sum);
    }
    return 0;
}
