#include<bits/stdc++.h>
using namespace std;
string removeSpace(string cardNumber) {
    int countSpace = 0;
    int numberLength = cardNumber.length();
    for(int i=0; i<numberLength; i++) {
        if(cardNumber[i] == ' ') {
            countSpace++;
            for(int j=i; j<numberLength-1; j++) {
                cardNumber[j] = cardNumber[j+1];
            }
        }
    }
    cardNumber = cardNumber.substr(0, numberLength-countSpace);
    return cardNumber;
}
int main()
{
    int testCase = 0;
    scanf("%d", &testCase);
    getchar();
    while(testCase--) {
        int oddPositionSum = 0, temp = 0, evenPositionSum = 0, sum = 0, seperateDigit = 0;
        string cardNumber;
        stringstream strm;
        getline(cin, cardNumber);
        cardNumber = removeSpace(cardNumber);
        for(int i=0; i<16; i++) {
            strm << cardNumber[i];
            strm >> temp;
            if(i%2 != 0) {
                oddPositionSum = oddPositionSum + temp;
            }
            else {
                int tempSum = 0;
                temp = temp * 2;
                while(temp != 0) {
                    seperateDigit = temp % 10;
                    tempSum = tempSum + seperateDigit;
                    temp = temp / 10;
                }
                evenPositionSum = evenPositionSum + tempSum;
            }
        strm.clear();
        }
        sum = oddPositionSum + evenPositionSum;
        int endingDigit = sum % 10;
        if(endingDigit == 0) {
            printf("Valid\n");
        }
        else {
            printf("Invalid\n");
        }
    }
    return 0;
}
