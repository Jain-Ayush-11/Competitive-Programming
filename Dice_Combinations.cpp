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

class ExtendedEculidian{
    public:
    int g, x, y;
};

ExtendedEculidian ExtendedEuclidianTriplet(int a, int b){
    ExtendedEculidian ans;
    if(b==0){ //base case
        ans.x=1;
        ans.y=0;
        ans.g=a;
        return ans;
    }
    ExtendedEculidian t=ExtendedEuclidianTriplet(b, a%b);
    ans.g=t.g;
    ans.x=t.y;
    ans.y=(t.x-(a/b)*t.y);
    return ans;
}

ExtendedEculidian multModInverse(int a, int m){
    ExtendedEculidian ans=ExtendedEuclidianTriplet(a, m);
    // if(ans.g!=1) ans.g=-1;
    return ans;
    // ans.g=-1;
}

int modDiv(int a, int b, int m){
    // a/b % m = a*inv % m
    ExtendedEculidian modInv_of_b=multModInverse(b, m);
    if(modInv_of_b.g!=1) return -1;
    return ((a%m)*(modInv_of_b.x%m))%m;
}

void solve(){
}

int32_t main()
{
    fast_cin();
    // int t;
    // cin >> t;
    // for(int it=1;it<=t;it++) {
    //     solve();
    // }
    // ExtendedEculidian call=ExtendedEuclidianTriplet(44, 12);
    // cout<<call.g<<" "<<call.x<<" "<<call.y<<endl;
    cout<<modDiv(10, 5, 7);
    return 0;
}