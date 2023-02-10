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
    string s; cin>>s;
    bool flag=1;
    vector<int> a, b;
    forn(i, s.length()-1){
        if(s[i]=='A' && s[i+1]=='B') a.push_back(i);
        if(s[i]=='B' && s[i+1]=='A') b.push_back(i);
    }
    if(b.size()==0 || a.size()==0) cout<<"NO";
    else if(a.size()>1 || b.size()>1){
        if(a.size()>1 && b.size()>1) cout<<"YES";
        else if(a.size()>1){
            forn(i, a.size()){
                if(abs(b[0]-a[i])>1) { flag=0; cout<<"YES"; break; }
            }
            if(flag) cout<<"NO";
        }
        else if(b.size()>1){
            forn(i, b.size()){
                if(abs(b[i]-a[0])>1) { flag=0; cout<<"YES"; break; }
            }
            if(flag) cout<<"NO";
        }
    }
    else{
        if(abs(b[0]-a[0])==1) cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}