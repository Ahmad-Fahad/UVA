#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 0, y = 0, z = 0;

    while(1)
    {
        scanf("%d %d %d", &x, &y, &z);

        if(x == 0 && y == 0 && z == 0)
        {
            break;
        }
        else
        {
          if((x*x == y*y + z*z) || (y*y == x*x + z*z) || (z*z == x*x + y*y))
          {
            printf("right\n");
          }
          else
          {
              printf("wrong\n");
          }
        }
    }

    return 0;
}
