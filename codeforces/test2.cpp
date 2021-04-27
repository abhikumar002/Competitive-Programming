#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

/*

int main() {
	// your code goes here
	int T; cin>>T;
	while(T--)
	{
      char bin[1000];
	  int c; cin>>c;
	  itoa(c,bin,2);
	  string s = to_string(11001.99);
	  cout<<bin<<endl<<s<<endl;
   }
//   getch();
return 0;

}
*/

int main(){
    long int T; cin>>T;
    while(T--)
    {

        long int n;
        cin>>n;
        long int s=0,m=1;
        while(n>=s)
        {
           s=pow(2,m);
            m++;
        }
        //cout<<s<<endl;
        long int A=pow(2,m-2)-1;
        long int sum=s-n;
        long int ans=A*(A+sum);
        cout<<ans<<endl;
    }
return 0;

}
