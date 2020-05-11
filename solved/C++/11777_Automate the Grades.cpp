#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0, cases = 0;
    scanf("%d", &testCase);
    while(testCase--) {
        int numbers[7];
        for(int i=0; i<7; i++) {
            scanf("%d", &numbers[i]);
        }
        int temp = 0;
        for(int i=4; i<7; i++) {
            for(int j=4; j<6; j++) {
                if(numbers[j] < numbers[j+1]) {
                    temp         = numbers[j];
                    numbers[j]   = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }
        }
        int averageCt = (numbers[4] + numbers[5]) / 2;
        int sum = 0;
        for(int i=0; i<4; i++) {
            sum = sum + numbers[i];
        }
        int totalMarks = averageCt + sum;
        if(totalMarks >= 90) {
            printf("Case %d: A\n", ++cases);
        }
        else if(totalMarks >= 80 && totalMarks < 90) {
            printf("Case %d: B\n", ++cases);
        }
        else if(totalMarks >= 70 && totalMarks < 80) {
            printf("Case %d: C\n", ++cases);
        }
        else if(totalMarks >= 60 && totalMarks < 70) {
            printf("Case %d: D\n", ++cases);
        }
        else if(totalMarks < 60) {
            printf("Case %d: F\n", ++cases);
        }
    }
    return 0;
}
