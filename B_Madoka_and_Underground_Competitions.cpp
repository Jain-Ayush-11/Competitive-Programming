/*******************
    CodeForces:- Ayush_J 
    CodeChef:- stein_1103 
********************/
 
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return (a.second < b.second);
}

void solve(){
    int n, k, r, c; cin>>n>>k>>r>>c;
    vector<vector<char>> v(n, vector<char>(n, '.'));
    int e=0;
    while(e<n){
    // for(int i=r-1;i>=0;i--){
        int d=0, b=0;
        int j=c-1, i=r-1;
        // v[i][j]='X';
        while(d<n){
            if(b%k==0) v[i][(j+d)%n]='X';
            d++, b++;
        }
        c++, r--;
        if(c==n+1) c=1;
        if(r==0) r=n;
        e++;
    }

    forn(i, n){
        forn(j, n) cout<<v[i][j];
        cout<<endl;
    }
    // forsn(i, r, n){
    //     for(int j=n-1;j>=0;j--) cout<<v[i][j];
    //     cout<<endl;
    // }
}

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}