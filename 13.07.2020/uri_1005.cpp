#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /// code

    double a, b, x;

    ///cin >> a >> b;
    scanf("%lf%lf", &a, &b);
    x = (a*3.5+b*7.5)/11.0;
    ///cout << "X = " << x << endl;
    printf("MEDIA = %0.5lf\n", x);

    return 0;
}


