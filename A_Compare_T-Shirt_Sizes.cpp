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
    string s, r; cin>>s>>r;
    int x1=0, x2=0;
    forn(i, s.length()) if(s[i]=='X') x1++;
    forn(i, r.length()) if(r[i]=='X') x2++;
    if(s==r) cout<<"="<<endl;
    else if(s[s.length()-1]=='L' && r[r.length()-1]!='L') cout<<">"<<endl;
    else if(s[s.length()-1]!='L' && r[r.length()-1]=='L') cout<<"<"<<endl;
    else if(s[s.length()-1]=='M' && r[r.length()-1]=='S') cout<<">"<<endl;
    else if(s[s.length()-1]=='S' && r[r.length()-1]=='M') cout<<"<"<<endl;
    else if(s[s.length()-1]==r[r.length()-1]){
        if(s[s.length()-1]=='S') cout<<(x1>x2?"<":">")<<endl;
        else cout<<(x1>x2?">":"<")<<endl;
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