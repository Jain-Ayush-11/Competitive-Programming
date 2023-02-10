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

// 1 4 5 8 9
// 2 3 6 7 

// 1 
// BWBWBWBWBWBWB
// 

void solve(){
    int n; cin>>n;
    bool f=0, m=0;
    int aw=1, ab=0, bw=0, bb=0, c=2;
    n--;
    while(n){
        int k=(c+c+1);
        if(!f) {
            if(k<=n) bb+=(int)floor(k/2+1), bw+=(int)floor(k/2), n-=k;
            else {
                if(n&1) { bb+=(int)floor(n/2+1), bw+=(int)floor(n/2); }
                else { bb+=(int)floor(n/2), bw+=(int)floor(n/2); }
                break; 
            }
        }
        else {
            if(k<=n) {
                ab+=(int)floor(k/2), aw+=(int)floor(k/2+1), n-=k;
            }
            else { 
                if(n&1) { aw+=(int)floor(n/2+1), ab+=(int)floor(n/2); }
                else { ab+=(int)floor(n/2), aw+=(int)floor(n/2); }
                break;
            }
        }
        f=!f, c+=2;
    }
    cout<<aw<<" "<<ab<<" "<<bw<<" "<<bb<<endl;
    // cout<<250278 +249924 +250226+250076;
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