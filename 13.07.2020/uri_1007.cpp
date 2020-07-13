#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /// code

    long long  a, b, c, d, x;

    ///cin >> a >> b;
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    x = (a * b - c * d);
    ///cout << "X = " << x << endl;
    printf("DIFERENCA = %1ld\n", x);

    return 0;
}




