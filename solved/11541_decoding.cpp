#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0, cases = 0;
    scanf("%d", &testCase);
    getchar();
    while(testCase--) {
        int times[1000], k = 0, l = 0;
        char s[1000];
    for(int i=0; 1 ; i++) {
        if(i%2 == 0) {
            scanf("%c", &s[k]);
            if(s[k] == '\n') {
                break;
            }
            k++;
        }
        else {
            scanf("%d", &times[l]);
            l++;
        }
    }
    printf("Case %d: ", ++cases);
    for(int i= 0; i<k; i++) {
        for(int j=0; j<times[i]; j++) {
            printf("%c",s[i]);
        }
    }
    printf("\n");
  }
    return 0;
}
