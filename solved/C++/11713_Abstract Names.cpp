#include<bits/stdc++.h>
using namespace std;

int main()
{

int testCase = 0;
scanf("%d", &testCase);
while(testCase--) {
    int flag = 0;
    string realName, gameName;
    cin>>realName>>gameName;
    int rN_length = realName.length();
    int gN_length = gameName.length();
    if(rN_length == gN_length) {
        for(int i=0; i<rN_length; i++) {
            if(realName[i] != gameName[i]) {
                if(realName[i] != 'a' && realName[i] != 'e' && realName[i] != 'i' && realName[i] != 'o' && realName[i] != 'u') {
                    printf("No\n");
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0) {
            printf("Yes\n");
        }
    }
    else {
        printf("No\n");
    }
}

return 0;
}
