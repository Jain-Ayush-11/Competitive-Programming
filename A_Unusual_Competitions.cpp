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
}

int32_t main()
{
    fast_cin();
    int n; cin>>n;
    string s; cin>>s;
    int o=0, c=0;
    forn(i, n){
        if(s[i]==')') o++;
        else c++;
    }
    if(o!=c) cout<<-1;
    else{
        int ans=0, o=0, j=0, b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(') o++;
            if(s[i]==')') o--;
            if(o<0 && !b) { j=i; b=1; }
            if(o==0 && b) { ans+=(i-j+1); b=0; }
        }
        cout<<ans;
    }
    return 0;
}