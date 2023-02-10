/*******************
    CodeForces:- _Stein_ 
    CodeChef:- stein_1103 
********************/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long int
int MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define pb push_back
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return (a.second < b.second);
}

void solve(){
    int n, m; cin>>n>>m;
    map<int, int> mp;
    vector<int> a(n); forn(i, n) { cin>>a[i]; mp[a[i]]++; }
    vector<int> c(m); forn(i, m) { cin>>c[i]; }
    if(m>n) { cout<<n<<endl; return; }
    priority_queue<int> b;
    for(auto i:mp) b.push(i.second);
    sort(c.rbegin(), c.rend());
    int ans=0, j=0;
    forn(i, m){
        if(b.empty()) break;
        j=b.top(); b.pop();
        if(j>c[i]) { ans+=c[i]; j-=c[i]; b.push(j); }
        else { ans+=j; }
    }
    cout<<ans<<endl;
}

int32_t main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}