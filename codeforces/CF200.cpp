#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	int p[n];
	for(int i=0;i<n;i++)
	{
	    int x; cin>>x;
	    x=x*10;
	    p[i]=x;
	}

	//we calculate total orange juice
	int tot_orange =0;
	for(int i=0;i<n;i++)
	{
	    tot_orange+=p[i];
	}

   double x = tot_orange*100.00;
	//we calculate total volume juice
	int tot_volume = n*1000;

	double res = (x/tot_volume);
	cout<<res<<endl;
	return 0;
}

