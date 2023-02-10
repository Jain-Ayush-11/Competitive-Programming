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
    string s, r; cin>>s;;
    r=s;
    if(s[0]>='a' && s[0]<='z') s[0]=char((s[0]-'a')+'A');
    else if(s[0]>='A' && s[0]<='Z') s[0]='a'+s[0]-'A';
    // cout<<r;
    forsn(i, 1, s.length())
    {
        if(s[i]>='A' && s[i]<='Z') s[i]='a'+s[i]-'A';
        else { s=r; break; }
    }
    cout<<s;
}

int32_t main()
{
    fast_cin();
    solve();
    return 0;
}