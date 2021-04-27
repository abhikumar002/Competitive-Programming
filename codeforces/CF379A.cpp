#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b; cin>>a>>b;
	int thour=a;

	while(a>=b)
	{
	    thour+=(a/b);
	    a=(a/b)+(a%b);
	}

	cout<<thour<<endl;
	return 0;
}

