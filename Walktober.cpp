/*******************
    CodeForces:- Ayush_J 
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

int solve(){
    int n, m, p; cin>>m>>n>>p;
    vector<vector<int>> s(m, vector<int>(n));
    int mx=0, a;
    forn(i, m){
        // int k=0;
        forn(j, n){
            cin>>s[i][j];
        //     k+=s[i][j];
        }
        // if(k>mx){
        //     mx=k;
        //     a=i;
        // }
        // else if(k==mx && )
    }
    int c=0;
    forn(i, n){
        int k=0;
        forn(j, m) k=max(k, s[j][i]);
        if(k>s[p-1][i]) c+=(k-s[p-1][i]);
    }
    return c;
}

int32_t main()
{
    fast_cin();
    int t;
    cin >> t;
    for(int it=1;it<=t;it++) {
        cout<<"Case #"<<it<<": "<<solve()<<endl;
    }
    return 0;
}