#include <iostream>
using namespace std;

int main() {
	// your code goes here

	int T; cin>>T;
	while(T--)
	{
	    string s;
	    long long count=0;
	         cin>>s;
	         int len=s.length();

	     for(int i=0;i<s.length()-1;i++)
	        {
	            if(s[i]=='1')
	             {
	              count++;
	             }

	              if( !s[len-1] && s[i+1]=='1')
	               i++;
	        }

	        cout<<count<<endl;

	}
	return 0;
}
