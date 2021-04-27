#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T; cin>>T;
	int x[T],y[T],z[T];
    int xsum=0,ysum=0,zsum=0;

	    for(int i=0;i<T;i++)
	    {
	        cin>>x[i]>>y[i]>>z[i];
    	    xsum+=x[i];
	        ysum+=y[i];
	        zsum+=z[i];
	    }
	if(xsum==0 && ysum==0 && zsum==0)
	{
	    cout<<"YES"<<endl;
	}
	else
	 cout<<"NO"<<endl;
	return 0;
}
