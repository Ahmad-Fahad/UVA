#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        int groups = 0;
        scanf("%d", &groups);
        if(groups == 0) {
            break;
        }
        else {
            getchar();
            string stng;
            cin>>stng;
            int length = stng.length();
            int elementPerGroup = length / groups;
            int limit = 0;
            int index = elementPerGroup;
            for(int i=0; i<groups; i++) {
                for(int j=index-1; j>=limit; j--) {
                    printf("%c", stng[j]);
                }
                limit = limit + elementPerGroup;
                index = index + elementPerGroup;
            }
        }
        printf("\n");
    }
    return 0;
}
