#include<bits/stdc++.h>
using namespace std;
int main()
{

	int testCase = 0, Case = 0;
	scanf("%d",&testCase);
	while(testCase--) {
		double tempC, changeInF, finalTempC;
		scanf("%lf %lf", &tempC, &changeInF);
		
		finalTempC = tempC + (5.0/9)*changeInF;

		printf("Case %d: %.2lf\n", ++Case, finalTempC);

	}


	return 0;
}
