#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T = 0, Case = 0;
	
	scanf("%d",&T);
	
	while(T--)
	{
		int N = 0, age = 0;
	
		scanf("%d",&N);
		
		vector <int> playerAge;
		
		for(int i=0; i<N; i++)
		{
			scanf("%d",&age);

			playerAge.push_back(age);
			
	        }
		
		int captain = N/2;
		
		printf("Case %d: %d\n",++Case, playerAge[captain]);

	}
	return 0;
}
