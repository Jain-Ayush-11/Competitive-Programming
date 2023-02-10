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

void solve(){
    vector<string> v(8);
    char c='K';
    forn(i, 8){
        cin>>v[i];
        int a=0, b=0;
        forn(j, 8){
            if(v[i][j]=='R') a++;
            // else if(v[i][j]=='B') b++;
        }
        if(a==8) c='R';
        // else if(b==8) c='B';
    }
    // if(c=='K'){
    //     forn(i, 8){
    //         int a=0, b=0;
    //         forn(j, 8){
    //             if(v[j][i]=='R') a++;
    //             // else if(v[j][i]=='B') b++;
    //         }
    //         if(a==8) c='R';
    //         // else if(b==8) c='B';
    //     }
    // }
    if(c=='K') c='B';
    cout<<c<<endl;
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