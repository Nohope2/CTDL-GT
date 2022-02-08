#include<bits/stdc++.h>
using namespace std;
int a[1005]={};
void Quaylui(int i,int n)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n)
		{
			for(int k=1;k<=n;k++)
			{
				if(a[k]==0) cout<<'A';
				else cout<<'B';
			}
			cout<<" ";
		}
		else Quaylui(i+1,n);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Quaylui(1,n);
		cout<<endl;
	}
	return 0;
}