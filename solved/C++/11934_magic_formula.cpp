#include<bits/stdc++.h>
using namespace std;

int main()
{

while(1) {
    long long int count = 0, f = 0, a = 0, b = 0, c = 0, d = 0, l = 0;
    scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &d, &l);
    if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0) {
        break;
    }
    else {
        for(int i=0; i<=l; i++) {
            f = a*i*i + b*i + c;
            if(f%d == 0) {
                count++;
            }
        }

        cout<<count<<endl;
    }
}

return 0;
}

