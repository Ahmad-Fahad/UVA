#include<bits/stdc++.h>
using namespace std;
double accelaration(double u, double v, double t)
{
    double a = 0;
    a = (v - u) / t;
    return a;
}
double time(double u, double v, double a)
{
    double t = 0;
    t = (v - u) / a;
    return t;
}
double endVelocity(double u, double a, double s)
{
    double v  = 0;
    v = u*u + 2*a*s;
    v = sqrt(v);
    return v;
}
double inititalVelocity(double v, double a, double s)
{
    double u = 0;
    u = v*v - 2*a*s;
    u = sqrt(u);
    return u;
}
double displacement(double u, double a, double t)
{
    double s = 0;
    s = u*t + 0.5*a*t*t;
    return s;
}
int main()
{
    int Case = 0;

    while(1)
    {
        int eqn = 0;

        double u = 0, v = 0, a = 0, s = 0, t = 0, x = 0, y = 0, z = 0, m =0, n = 0;

        cin>>eqn;

        if(eqn == 0)
        {
            break;
        }
        else
        {
            scanf("%lf %lf %lf", &x, &y, &z);

            switch(eqn)
            {
            case 1:
                u = x;
                v = y;
                t = z;
                a = accelaration(u, v, t);
                s = displacement(u, a, t);
                printf("Case %d: %0.3lf %0.3lf\n",++Case,s,a);
                break;
            case 2:
                u = x;
                v = y;
                a = z;
                t = time(u, v, a);
                s = displacement(u, a, t);
                printf("Case %d: %0.3lf %0.3lf\n",++Case,s,t);
                break;
            case 3:
                u = x;
                a = y;
                s = z;
                v = endVelocity(u, a, s);
                t = time(u, v, a);
                printf("Case %d: %0.3lf %0.3lf\n",++Case,v,t);
                break;
            case 4:
                v = x;
                a = y;
                s = z;
                u = inititalVelocity(v, a, s);
                t = time(u, v, a);
                printf("Case %d: %0.3lf %0.3lf\n",++Case,u,t);
                break;
            }
        }
    }
    return 0;
}
