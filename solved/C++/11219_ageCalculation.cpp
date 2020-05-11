#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int testCase = 0, Case = 0, ageDay = 0, ageMonth = 0, ageYear = 0, currentDate = 0, currentMonth = 0, currentYear = 0, birthDate = 0, birthMonth = 0, birthYear = 0;
	
	scanf("%d",&testCase);
	
	while(testCase--)
	{
		scanf("%d/%d/%d",&currentDate, &currentMonth, &currentYear);
		
		scanf("%d/%d/%d", &birthDate, &birthMonth, &birthYear);
		
		printf("Case #%d: ",++Case);
		
		if(birthDate > currentDate)
		{
			birthMonth = birthMonth + 1;
		
			ageDay     = currentDate + 30 - birthDate;
		}
		else
  		{
			ageDay = currentDate - birthDate;
		}
		if(birthMonth > currentMonth)
		{
			birthYear = birthYear + 1;

			ageMonth  = currentMonth + 12 - birthMonth; 
		}
		else
		{
			ageMonth  = currentMonth - birthMonth; 
		}
		if(currentYear < birthYear)
		{
			printf("Invalid birth date\n");
		}
		else 
		{
			ageYear = currentYear - birthYear;
			
			if(ageYear > 130) 
			{
				printf("Check birth date\n");
			}
			else
			{
				printf("%d\n", ageYear);
			}
		}
	}
	
	return 0;
}
