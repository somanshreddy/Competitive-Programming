#include<bits/stdc++.h>
#define gc getchar
#define pc putchar
#define maxm 100005
#define sz(x) (int)x.size()
#define sc(c) scanf("%c",&c)
#define si(n) scanf("%d",&n)
#define sll(n) scanf("%lld",&n)
#define sstr(str) scanf("%s",str)
#define loop(i,j,n) for(int(i)=(j);(i)<(n);++(i))
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vii vector< pair<int,int> >
#define pi pair<int,int>
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define pn pc('\n')
#define all(x) x.begin(),x.end()
#define fill(a,v) memset(a,v,sizeof a)
#define endl "\n"

using namespace std;

int x,y,k,n;
vii v;

int inp()
{
    register int n=0,c=gc();
    while(c<'0'||c>'9')c=gc();
    while(c<='9'&&c>='0')n=(n<<1)+(n<<3)+c-'0',c=gc();
    return n;
}

void read()
{
    v.clear();
    x = inp();
    y = inp();
    k = inp();
    n = inp();
    int a,b;
    loop(i,0,n)
    {
        a = inp();
        b = inp();
        v.pb(mp(a,b));
    }
}

void solve()
{
    int pages = x-y;
    loop(i,0,sz(v))
    {
        if(v[i].fi >= pages && v[i].se <= k)
        {
            printf("LuckyChef\n");
            return;
        }
    }
    printf("UnluckyChef\n");
}

int main()
{
    int t = inp();
    while(t--)
    {
        read();
        solve();
    }
    return 0;
}

