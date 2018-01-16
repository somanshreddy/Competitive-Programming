#include<bits/stdc++.h>
#define gc getchar
#define pc putchar
#define maxm 100005
#define max2(a,b) (a>b)?a:b
#define min2(a,b) (a<b)?a:b
#define max3(a,b,c) max2(max2(a,b),c)
#define min3(a,b,c) min2(min2(a,b),c)
#define si(n) scanf("%d",&n)
#define sc(c) scanf("%c",&c)
#define sll(n) scanf("%lld",&n)
#define print(n) printf("%d",n)
#define printll(n) printf("%lld",n)
#define loop(i,j,n) for(int(i)=(j);(i)<(n);++(i))
#define rep(i,n) for(int(i)=0;(i)<(n);++(i))
#define ll long long
#define vi vector<int>
#define vii vector< pair<int,int> >
#define pii pair<int,int>
#define sz(x) (int)x.size()
#define pn pc('\n')
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) x.begin(),x.end()
#define INF 987654321

using namespace std;

int n,a[maxm];
bool all_zero = false;
void read()
{
    int ctr = 0;
    cin >> n;
    rep(i,n)
    {
        cin >> a[i];
        if(a[i] == 0)
            ctr++;
    }
    if(ctr == n)
    {
        all_zero = true;
    }
}

void solve()
{
    if(all_zero)
    {
        cout << 0 << endl;
        return;
    }
    int ctr = 0,ans = 0;
    for(int i = 0;i<n;++i)
    {
        if(a[i] != 0)
            ctr++;
        else if(a[i] == 0)
        {
            ans = max2(ans,ctr);
            ctr = 0;
        }
    }
    ans = max2(ctr,ans);

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    read();
    solve();
    return 0;
}
