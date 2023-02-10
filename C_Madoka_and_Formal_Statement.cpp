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
    ll n; cin>>n;
    vector<ll> a(n), b(n);
    bool flag=0;
    forn(i, n) cin>>a[i];
    forn(i, n) { cin>>b[i]; if(b[i]<a[i]) flag=1; }
    if(flag) { cout<<"NO"<<endl; return; }
    else{
        int c=0;
        vector<bool> k(n);
        while(c!=n){
            forn(i, n){
                if(a[i]==b[i] && !k[i]) { c++; k[i]=1; continue; }
                else if(a[i]>b[i] || (a[i]<b[i] && (i!=n-1?a[i]>a[i+1]:a[i]>a[0]) ) ) { cout<<"NO"<<endl; return; }
                if(i==n-1){
                    if(a[i]<b[i] && a[i]<=a[0]){
                        if(a[0]+1>=b[i]) a[i]=b[i];
                        else a[i]=a[0]+1;
                    }
                    continue;
                }
                if(a[i]<b[i] && a[i]<=a[i+1]){
                    if(a[i+1]+1>=b[i]) a[i]=b[i];
                    else a[i]=a[i+1]+1;
                }
            }
        }
        cout<<"YES"<<endl;
    }
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