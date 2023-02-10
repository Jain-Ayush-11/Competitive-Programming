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
    int n; cin>>n;
    vector<int> a(n), b; forn(i, n) { cin>>a[i]; if(a[i]<0) b.pb(i); }
    int c=0, prev, t=1;
    bool q=0;
    vector<int> p(n);
    p[0]=a[0];
    forsn(i, 1, n) {
        p[i]=p[i-1]+a[i];
        if(p[i]<0) p[i]=0;
    }
    int k=n;
    vector<int> l(n);
    rforn(i, n-1){
        l[i]=k;
        if(p[i]==0) k=i+1;
    }
    for (int i=0; i<n; i++)
    {
        if(p[i]==0) continue; 
        // cout<<i<<endl;
        c += (a[i] * (i+1) * (l[i]-i));
        // cout<<c<<endl;
        // else if(p[i]>0) c+= a[i]*(n-i)*i;
    }
    forn(i, n) {
        if(a[i]<0 && p[i]!=0) c-=(l[i]-i);
        if(p[i-1]==0) c-=((l[i]-i)*i);
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