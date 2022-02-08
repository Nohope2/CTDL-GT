#include<bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define f0(i,n) for(int i=0;i<n;i++)
#define f1(i,a,b) for(int i=a;i<=b;i++)
#define f2(i,m,n) for(int i=m;i>=n;i--)
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
using namespace std;
typedef double ld;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<int,int> II;
int n,t,a[100],k;
queue<string>st;
void output()
{
    int dem = 0;
    string s = "";
    for(int i=0;i<n;i++) 
    {
        if(a[i] == 1) dem++;
        s += to_string(a[i]);
    }
    if(dem == k) st.push(s);
    
}
 
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==n-1) output();
        else Try(i+1); 
    }
}
 void solve()
 {
     cin >> n >> k;
     Try(0);
     while(!st.empty())
     {
         cout << st.front() << endl;
         st.pop();
     }
 }
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}