#include<bits/stdc++.h>
using namespace std;
int generateCarry(long long int mirrored_minute) {
    int carry = 0;
    if(mirrored_minute == 0) {
            carry = 0;
        }
        else {
            carry = 1;
        }
    return carry;
}
int main()
{
    long long int testCase = 0;
    scanf("%lld", &testCase);
    while(testCase--) {
        int carry = 0;
        long long int hour = 0, minute = 0, mirrored_hour = 0, mirrored_minute = 0;
        scanf("%lld:%lld", &hour, &minute);
        mirrored_minute = (60 - minute) % 60;
        if(hour == 12 || hour == 6) {
            carry = generateCarry(mirrored_minute);
            mirrored_hour = hour - carry;
        }
        else {
            carry = generateCarry(mirrored_minute);
            mirrored_hour = 12 - hour - carry;
        }
        if(mirrored_hour == 0) {
            mirrored_hour = 12;
        }
        if(mirrored_hour < 10) {
            cout<<"0"<<mirrored_hour;
        }
        else {
            cout<<mirrored_hour;
        }
        cout<<":";
        if(mirrored_minute < 10) {
            cout<<"0"<<mirrored_minute;
        }
        else {
            cout<<mirrored_minute;
        }
        cout<<endl;
    }
    return 0;
}
