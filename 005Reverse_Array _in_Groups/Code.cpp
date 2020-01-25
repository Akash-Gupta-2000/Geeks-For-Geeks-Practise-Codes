#include <iostream>
using namespace std;

int main() {
    int t,n,i,j,l,k;
	cin>>t;
	for(i=0;i<t;++i)
	{
	    cin>>n>>k;
	    long ar[n];
	    for(j=0;j<n;++j)
	        cin>>ar[j];
	    if(n<k)
	            k=n;
	    for(j=k;j<=n;j+=k)
	    {
	        for(l=1;l<=k;++l)
	        {
	            cout<<ar[j-l]<<" ";
	        }
	        if((n-j)<k)
	            k=n-j;
	        if((n-j)==0)
	            break;
	    }
	    cout<<"\n";
	}
	return 0;
}
