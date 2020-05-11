#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1) {
        int h = 0, h1 = 0, h2 = 0, m = 0, m1 = 0, m2 = 0, sleepingTime = 0;
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) {
            break;
        }
        else {
            if(h2 > h1) {
                if(m2 >= m1) {
                    m = m2 - m1;
                    h = h2 - h1;
                }
                else {
                    m = 60 + m2 - m1;
                    h = h2 - h1 - 1;
                }
            }
            else if(h2 < h1) {
                if(m2 >= m1) {
                    m = m2 - m1;
                    h = 24 + h2 - h1;
                }
                else {
                    m = 60 + m2 -m1;
                    h = 24 + h2 - h1 - 1;
                }
            }
            else if(h2 == h1) {
                if(m2 >= m1) {
                    m = m2 - m1;
                    h = 0;
                }
                else {
                    m = m2 - m1;
                    h = 24;
                }
            }
            sleepingTime = (h*60) + m;
            printf("%d\n", sleepingTime );
        }
    }
    return 0;
}
