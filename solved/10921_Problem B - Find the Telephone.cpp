#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string expression;
    while(scanf("%s", expression) == 1) {
    //cin>>expression;
    int length = expression.length();
    for(int i=0; i<length; i++) {
        if(expression[i] == '1' || expression[i] == '0' || expression[i] == '-') {
            printf("%c", expression[i]);
        }
        else if(expression[i] == 'A' || expression[i] == 'B' || expression[i] == 'C') {
            printf("2");
        }
        else if(expression[i] == 'D' || expression[i] == 'E' || expression[i] == 'F') {
            printf("3");
        }
        else if(expression[i] == 'G' || expression[i] == 'H' || expression[i] == 'I') {
            printf("4");
        }
        else if(expression[i] == 'J' || expression[i] == 'K' || expression[i] == 'L') {
            printf("5");
        }
        else if(expression[i] == 'M' || expression[i] == 'N' || expression[i] == 'O') {
            printf("6");
        }
        else if(expression[i] == 'P' || expression[i] == 'Q' || expression[i] == 'R' || expression[i] == 'S') {
            printf("7");
        }
        else if(expression[i] == 'T' || expression[i] == 'U' || expression[i] == 'V') {
            printf("8");
        }
        else if(expression[i] == 'W' || expression[i] == 'X' || expression[i] == 'Y' || expression[i] == 'Z') {
            printf("9");
        }
    }
    }
    return 0;
}
