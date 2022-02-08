#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, k;
vector<int> a, b;
vector<vector<int>> res;
void pb()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == 1)
            sum += b[i];
    if (sum == k)
        res.push_back(a);
}
void BackTrack(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
            pb();
        else
            BackTrack(i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    a.resize(n, 0);
    b.resize(n, 0);
    for (int i = 0; i < n; i++) cin >> b[i];
        sort(b.begin(),b.end());
    BackTrack(0);
    int check = 0;
    for (int i = res.size() - 1; i >= 0; i--)
    {
        int k = 0;
        for (int j = 0; j < res[i].size(); j++)
        {
            if(k == 1)
            {
                if(res[i][j] == 1) cout << ' ' << b[j];
            }    
            if (res[i][j] == 1 && k == 0)
            {
                k = 1;
                cout << '[' << b[j];
            } 
        }
        if(k == 1)
        {
             cout << ']' << ' ';
             check = 1;
        }
    }
    if(check == 0) cout << "-1";
    cout << endl;
    res.clear();
    a.clear();
    b.clear();
    }
}