#include<iostream>
using namespace std;
int main() {
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
			cout<<"  ";
		for(j=n-i;j>=1;--j)
			cout<<j<<" ";
		cout<<0<<" ";
		for(j=1;j<=(n-i);++j)
			cout<<j<<" ";
		cout<<"\n";
		
	}
	for(i=0;i<n;++i)
		cout<<"  ";
	cout<<0<<"\n";
	for(i=0;i<n;++i)
	{
		for(j=1;j<(n-i);++j)
			cout<<"  ";
		for(j=0,k=i+1;j<=i;++j,--k)
			cout<<k<<" ";
		cout<<0<<" ";
		for(j=0,k=1;j<=i;++j,++k)
			cout<<k<<" ";
		cout<<"\n";
	}
	return 0;
}
