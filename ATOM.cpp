#include<cstdio>

use namespace std;

double n,k,m;

void solve()
{
    double temp = m/n;
    long double r = k;
    int ans = 0;
    while(k <= temp)
    {
        k = r*k;
        ans++;
    }
    //cout << ans << endl;
    printf("%d\n",ans);
}

int main()
{
//    ios::sync_with_stdio(false);

    int t;
    //cin >> t;
    scanf("%d",&t);
    while(t--)
    {
        //cin >> n >> k >> m;
        scanf("%lf%lf%lf",&n,&k,&m);
        solve();
    }
    return 0;
}
