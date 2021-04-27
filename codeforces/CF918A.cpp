#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	long long int fab[20]={0};
	fab[0]=fab[1]=fab[2]=1;

	for(int i=3;i<20;i++)
	{
	    fab[i]=fab[i-1]+fab[i-2];
	}

	int b[n+1]; memset(b,0,sizeof(b));
	for(int i=1;i<20;i++){
	   if(fab[i]<=n)
	   {
	       b[fab[i]]=1;
	   }

	}

	for(int i=1;i<=n;i++)
	{
	    if(b[i]==1)
	    cout<<"O";
	    else
	    cout<<"o";
	}
	return 0;
}
