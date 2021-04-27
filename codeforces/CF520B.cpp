#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,m;  cin>>n>>m;
	int count=0;
	if(n>=m){
	    cout<<n-m<<endl;
	      }
	else
	{
       int count=0;
       while(m>n)
       {
           if(m%2==0)
           {
               m/=2;   count++;
           }
           else
           {
               m+=1;   count++;
           }
       }
          cout<<count+(n-m)<<endl;
	}


	return 0;
}

