#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase = 0, cases = 0;

    scanf("%d",&testCase);

    while(testCase--)
    {
        int salary[3];

        for(int i=0; i<3; i++)
        {
            scanf("%d", &salary[i]);
        }

        int max = salary[0];

        for(int i=0; i<3; i++)
        {
            if(max < salary[i])
            {
                max = salary[i];
            }
        }

        int min = 100000;

        for(int i=0; i<3; i++)
        {
            if(min > salary[i])
            {
                min = salary[i];
            }
        }

        int result = 0;

        for(int i=0; i<3; i++)
        {
            if(salary[i] != max && salary[i] != min)
            {
                result = salary[i];
                break;
            }
        }

        printf("Case %d: %d\n", ++cases, result);
    }
    return 0;
}
