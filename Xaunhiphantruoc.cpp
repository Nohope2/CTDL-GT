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
int main()
{
  faster();
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = sz(a);
        a = "1" + a;
        for (int i = n; i >= 0; i--)
        {
            if (a[i] == '1')
            {
                a[i] = '0';
                for (int j = i + 1; j <= n; j++) a[j] = '1';
                break;
            }
        }
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
    }
  return 0;
}