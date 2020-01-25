#include<iostream>
using namespace std;
int main() {
	int i,j,k,n;
	cin>>n;
	for(i=0;i<n;++i)
	{
		for(j=0,k=n;j<=i;++j,--k)
			cout<<k<<" ";
		for(j=(2*n-1-(2*i));j>=1;--j)
			cout<<"  ";
		for(j=0,k=(n-i);j<=i;++j,++k)
			cout<<k<<" ";
		cout<<"\n";
	}
	for(i=n;i>=1;--i)
		cout<<i<<" ";
	cout<<0<<" ";
	for(i=1;i<=n;++i)
		cout<<i<<" ";
	cout<<"\n";

	for(i=0;i<n;++i)
	{
		for(j=n;j>i;--j)
			cout<<j<<" ";
		for(j=1;j<=(2*i+1);++j)
			cout<<"  ";
		for(j=i+1;j<=n;++j)
			cout<<j<<" ";
		cout<<"\n";
		
	}
	return 0;
}
