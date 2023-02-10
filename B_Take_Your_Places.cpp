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
    int n; cin>>n;
    int o=0, e=0;
    vector<int> a(n);
    forn(i, n){
        cin>>a[i];
        a[i]&=1;
        if(a[i]&1) o++;
        else e++;
    }
    if(n==1) { cout<<0<<endl; return; }
    if((n%2 && abs(e-o)!=1) || (n%2==0 && e!=o)) { cout<<-1<<endl; return; }
    vector<int> odd, even;
    forn(i, n){
        if(a[i] && !(i&1)) odd.push_back(i);
        else if((!a[i]) && (i&1)) even.push_back(i);
    }
    // if(odd.size()!=even.size()) { cout<<-1<<endl; return; }
    int ans=-1;
    if(odd.size()==even.size()) {
        ans=0;
        forn(i, odd.size()){
            ans+=abs(odd[i]-even[i]);
            // cout<<odd[i]<<" "<<even[i]<<endl;
        }
    }
    int ans2=ans;ans=-1;
    odd.clear();
    even.clear();
    forn(i, n){
        if(a[i] && (i&1)) odd.push_back(i);
        else if((!a[i]) && !(i&1)) even.push_back(i);
    }
    if(odd.size()==even.size()) {
        ans=0; 
        forn(i, odd.size()){
            ans+=abs(odd[i]-even[i]);
            // cout<<"g"<<odd[i]<<" "<<even[i]<<endl;
        }
    }
    if(ans!=-1 && ans2!=-1) cout<<min(ans, ans2)<<endl;
    else cout<<(ans!=-1?ans:ans2)<<endl;    
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