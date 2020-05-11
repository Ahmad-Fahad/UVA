#include<bits/stdc++.h>
using namespace std;
int main() {
    int testCase = 0, cases = 0;
    scanf("%d",&testCase);
    while(testCase--) {
        int n = 0, k = 0, p = 0;
        scanf("%d %d %d", &n, &p, &k);
        int currentPerson = 0;
        currentPerson = (p + k) % n;
        if(currentPerson == 0) {
            currentPerson = n;
        }
        printf("Case %d: %d\n",++cases, currentPerson);
    }

    return 0;
}
