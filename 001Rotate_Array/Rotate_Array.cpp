#include <iostream>
using namespace std;
int main() {
    unsigned int t,n,k;
	cin>>t;
	for(int i=0;i<t;++i)
	{
	    cin>>n>>k;
	    int ar[n];
	    for(int j=0;j<n;++j)
	        cin>>ar[(j+n-k)%n];      //For left rotate
	        //ar[(j+k)%n] for right rotate
	    for(int z=0;z<n;++z)
	        cout<<ar[z]<<" ";
	    cout<<"\n";
	}
	return 0;
}
