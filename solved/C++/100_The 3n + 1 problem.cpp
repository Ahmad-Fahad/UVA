#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i = 0, j = 0, temp_i = 0, temp_j = 0;
    while ( scanf ("%lld %lld", &i, &j) != EOF ) {
        temp_i = i;
        temp_j = j;
        if ( i > j ) swap (i, j);
    long long int  max = 0, n = 0;
    for(int m = i; m<=j; m++) {
        long long int count = 0;
        n = m;
        while(1) {
            count++;
            if(n == 1) {
                break;
            }
            else if(n%2 == 0 ) {
                n = n /2;
            }
            else {
                n = 3*n + 1;
            }
        }
        if(count > max) {
            max = count;
        }
    }

    cout<<temp_i<<" "<<temp_j<<" "<<max<<endl;

    }


    return 0;
}

