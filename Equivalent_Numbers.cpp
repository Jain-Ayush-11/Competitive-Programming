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
bool isPower(ll x, ll y)
{
    if (x == 1)
        return (y == 1);
    ll pow = 1;
    while (pow < y)
        pow *= x;
    return (pow == y);
}
void solve(){
    int x, y; cin>>x>>y;
    // if(x==y) { cout<<"YES"<<endl; return; }
    if(x>y) swap(x, y);
    if(y%2!=x%2) { cout<<"NO"<<endl; return; }
    if(y%x==0){
        int k=y/x;
        if(isPower(k, x) && isPower(k, y)) { cout<<"YES"<<endl; return; }
        else if(isPower(x, y)) { cout<<"YES"<<endl; return; }
    }
    else if(y%2==0){
        cout<<((isPower(2, x) && isPower(2, y))?"YES":"NO")<<endl;
        return;
    }
    // else{
    //     if(y%x!=0) { cout<<"NO"<<endl; return; }
    //     else{
    //         int k=y/x;
    //         if(isPower(k, x) && isPower(k, y)) { cout<<"YES"<<endl; return; }
    //         else if(isPower(x, y) || isPower(y, x)) { cout<<"YES"<<endl; return; }
    //         cout<<"NO"<<endl;
    //     }
    // }
    cout<<"NO"<<endl;
    // cout<<isPower(1, 25)<<endl;
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