#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a,b,d,e;
    double c,f,x;
    scanf("%lld%lld%lf",&a,&b,&c);
    scanf("%lld%lld%lf",&d,&e,&f);
    x=(b*c)+(e*f);
    printf("VALOR A PAGAR: R$ %0.2lf\n",x);

    return 0;
}
