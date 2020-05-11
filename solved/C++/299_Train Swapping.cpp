#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0;
    scanf("%d", &testCase);
    while(testCase--) {
        int length = 0;
        scanf("%d", &length);
        vector <int> carriges;
        int temp = 0, Input = 0, swapCount = 0;
        for(int i=0; i<length; i++) {
            scanf("%d", &Input);
            carriges.push_back(Input);
        }
        for(int i=0; i<length; i++) {
            for(int j = 0; j<length-1; j++) {
                if(carriges[j] > carriges[j+1]) {
                    temp          = carriges[j];
                    carriges[j]   = carriges[j+1];
                    carriges[j+1] = temp;
                    swapCount++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swapCount);
    }
    return 0;
}
