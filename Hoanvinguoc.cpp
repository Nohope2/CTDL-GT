#include<bits/stdc++.h>
using namespace std;
int a[1005]={},n;
bool check[1000];
 stack<string>st;
void Quaylui(int i)
{
	for(int j=1;j<=n;j++)
	{
	    if(!check[j])
	    {
	    	a[i]=j;
	    	check[j]=true;
            string s = "";
	    	if(i==n) 
	    	{
		    	for(int l=1;l<=n;l++)  s += to_string(a[l]);
                st.push(s);
			}
			else Quaylui(i+1);
			check[j]=false;
		}
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
	 cin>>n;
	 Quaylui(1);
    while(!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
     cout << endl;
    }
	return 0;
}