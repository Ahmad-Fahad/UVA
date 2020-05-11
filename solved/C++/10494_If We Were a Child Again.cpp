#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    int k = 0, index = 0;
    string expression;
    getline(std::cin,expression);
    int length = expression.length();
    for(int i=0; i<length; i++) {
        if(expression[i] == '%') {
            k = 1;
            index = i;
            break;
        }
        else if(expression[i] == '/') {
            k = 2;
            index = i;
            break;
        }
    }
    string number_1 = expression.substr(0, index-1);
    string number_2 = expression.substr(index+2, length-1);

    int int_1 = 0, int_2 = 0;

    stringstream stream_1;
    stream_1 << number_1;
    stream_1 >> int_1;

    stringstream stream_2;
    stream_2 << number_2;
    stream_2 >> int_2;

    int result = 0;

    if(k == 1) {
        result = int_1 % int_2;
    }
    else if(k == 2) {
        result = int_1 / int_2;
    }

    printf("%d\n", result);

    return 0;
}
