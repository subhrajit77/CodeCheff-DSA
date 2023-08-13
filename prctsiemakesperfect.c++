#include <iostream>
using namespace std;

int main() {
	int n=4,a[10],count=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	    if(a[i]>=10)
	    {
	        count++;
	    }
	}
	cout<<count<<endl;
	
	
	
	return 0;
}
