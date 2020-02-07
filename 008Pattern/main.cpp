#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k=1,l;
    cout<<"Enter input value: ";
    cin>>n;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=i;++j,++k)
        {
            cout<<k<<" ";
        }
        l=k-2;
        for(j=1;j<i;++j,--l)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
    return 0;
}
