#include<bits/stdc++.h>
#define gc getchar
#define pc putchar
#define maxm 100005
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

using namespace std;

int n,k;
vi v,w;
void read()
{
    v.clear();
    w.clear();
    cin >> n >> k;
    rep(i,k)
    {
        int x;
        cin >> x;
        w.pb(x);
    }
    loop(i,1,n+1)
        v.pb(i);
}

void solve()
{
    if(k == 0)
    {
        ll int sum = (n*(n+1))/2;
        sum++;
        if(sum%2)
            cout << "Chef" << endl;
        else
            cout << "Mom" << endl;
        return;
    }
    for(int i = 0;i<sz(w);++i)
    {
        for(int j = 0;j<sz(v);++j)
        {
            if(v[j] == w[i])
            {
                v[j] = 0;
                break;
            }
        }
    }
    int res = 1;
    for(int i = 0;i<sz(v) && v[i] <= res;++i)
    {
        if(v[i] == 0)
            continue;
        res += v[i];
    }
    if(res%2)
        cout << "Chef" << endl;
    else
        cout << "Mom" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--)
    {
        read();
        solve();
    }
    return 0;
}
