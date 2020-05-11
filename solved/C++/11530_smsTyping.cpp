#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testCase = 0, Case = 0;
	
	scanf("%d", &testCase);
	
	getchar();
	
	while(testCase--)
	{
		int sum = 0;

		string sms = "";
		
		getline(cin, sms);
		
		int length = sms.length();
	
		for(int i=0; i<length; i++)
		{
		    int keyPress = 0;

		    if(sms[i]  == 'a' || sms[i] == 'd' || sms[i] == 'g' || sms[i] == 'j' || sms[i] == 'm' || sms[i] == 'p' || sms[i] == 't' || sms[i] == 'w' || sms[i] == ' ')
		    {
			keyPress = 1;				
		    }
		    else if(sms[i] == 'b' || sms[i] == 'e' || sms[i] == 'h' || sms[i] == 'k' || sms[i] == 'n' || sms[i] == 'q' || sms[i] == 'u' || sms[i] == 'x')
		     {
			keyPress = 2;
	       	}
		    else if(sms[i] == 'c' || sms[i] == 'f' || sms[i] == 'i' || sms[i] == 'l' || sms[i] == 'o' || sms[i] == 'r' || sms[i] == 'v' || sms[i] == 'y')
		    {
			keyPress = 3;
		    }
		    else if(sms[i] == 's' || sms[i] == 'z')
		    {
			keyPress = 4;
		    }
		sum = sum + keyPress;
	}
		printf("Case #%d: %d\n",++Case, sum);
    }
	return 0;
}
