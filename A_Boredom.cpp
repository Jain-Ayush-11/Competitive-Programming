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
    map<int, int> mp;
    forn(i, n){
        int x; cin>>x;
        mp[x]++;
    }
    vector<int> a;
    for(auto i:mp) a.push_back(i.first);
    if(a.size()==1) cout<<a[0]*mp[a[0]];
    else if(a.size()==2) cout<<max(a[0]*mp[a[0]], a[1]*mp[a[1]]);
    else if(a.size()==3) cout<<max(a[1]*mp[a[1]], a[0]*mp[a[0]]+a[2]*mp[a[2]]);
    else{
        int ans=0; n=a.size();
        int r=0, p=0, q=0;
        r=a[n-2]*mp[a[n-2]];
        p=a[n-3]*mp[a[n-3]];
        q=a[n-1]*mp[a[n-1]];
        if(r>p+q) { ans+=r; mp[a[n-2]]=0, mp[a[n-1]]=0, mp[a[n-3]]=0; }
        else{
            ans+=q;
            mp[a[n-2]]=0, mp[a[n-1]]=0;
        }
        a.erase(a.begin()+n-1);
        a.erase(a.begin()+n-2);
        n=a.size();
        r=0, p=0, q=0;
        r=a[1]*mp[a[1]];
        p=a[0]*mp[a[0]];
        q=a[2]*mp[a[2]];
        if(r>p+q) { ans+=r; mp[a[0]]=0, mp[a[1]]=0, mp[a[2]]=0; }
        else{
            ans+=q;
            mp[a[1]]=0, mp[a[0]]=0;
        }
        a.erase(a.begin());
        a.erase(a.begin()+1);
        cout<<ans;
    }
    return 0;
}