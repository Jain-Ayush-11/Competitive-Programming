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

void solve(){
    int n; cin>>n;
    int a, b;
    if(n&1) a=n/2, b=n/2+1;
    else a=b=n/2;
    // cout<<a<<b;
    if(b%10==0){
        int p=a, q=b, s=0, c=0, n1=0;
        while(p){
            s+=p%10;
            if(p%10==9) n1++;
            p/=10;
        }
        while(q){
            c+=q%10;
            q/=10;
            // n2++;
        }
        // cout<<n1;
        if(abs(s-c)>1){
            int k=0;
            if(n1==1){
                k=4;
            }
            else if(n1%2){
                // k=9*pow(10, n1-1)+5*pow(10, n1-2);
                // k=a-x;
                int x=pow(10, n1/2);
                k=(a/x);
                k-=4;
                k*=x;
                k=a-k;
            }
            else{
                k=pow(10, n1/2)-1;
            }
            // cout<<k<<" ";
            a-=k, b+=k;
        }
    }
    cout<<a<<" "<<b<<endl;
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