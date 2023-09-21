#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w" , stdout);
	// #endif
	
 	int n,m;
 	cin>>n>>m;

 	for(int i=1;i<=n;i++)
 	{
 		for(int j=1;j<=m;j++)
 		{
 			if(i%2!=0)
 				cout<<"#";
 			if(i%2==0)
 				cout<<".";
 		}
 		cout<<endl;
 	}
}