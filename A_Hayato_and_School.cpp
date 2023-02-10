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
    int n; cin>>n;
    vector<int> a(n);
    set<int> even, odd;
    forn(i, n) { cin>>a[i]; if(!(a[i]&1)) even.insert(i); else odd.insert(i); }
    if(odd.size()==0 || (even.size()<2 && odd.size()<3)) cout<<"NO\n";
    else {
        if(odd.size()>2) cout<<"YES\n"<<(*odd.begin())+1<<" "<<(*(++odd.begin()))+1<<" "<<(*(++(++odd.begin())))+1<<endl;
        else{
            cout<<"YES\n"<<(*even.begin())+1<<" "<<(*(++even.begin()))+1<<" ";
            forn(i, n) { if(!even.count(i)) { cout<<i+1<<endl; return; } }
        }
    }
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