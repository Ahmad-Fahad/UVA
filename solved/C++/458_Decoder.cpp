#include<bits/stdc++.h>
using namespace std;

int main()
{
char chc = '\0', chd = '\0';
while(scanf("%c", &chc) != EOF) {
    if(chc == '\n') {
        cout<<endl;
    }
    else {
        chd = (chc-7);
        printf("%c", chd);
    }
}
return 0;
}
