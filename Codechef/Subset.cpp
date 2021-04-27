#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	cout<<"Enter no. of elements in array : "<<endl;
	int n; cin>>n;
	cout<<"Enter the size of the subset: "<<endl;
	int k; cin>>k;

	int a[n];
	cout<<"Enter the numbers: "<<endl;
	for(int i=0;i<n;i++)
	    cin>>a[i];

	for(int i=1;i<pow(2,n);i++)
	{
	    vector<int> v;
	    int x=i;
	    while(x>0)
	    {
	        int z=x%2;
	        v.push_back(z);
	        x=x/2;
	    }

	    int p=n-(int)v.size();
	    for(int j=1;j<=p;j++)
	    {
	        v.push_back(0);
	    }

	    reverse(v.begin(),v.end());

	    int count=0;
	    for(int i=0;i<v.size();i++)
	    {
	        if(v[i]==1)
	          count++;
	    }

	    if(count==k)
	    {
	      for(int i=0;i<v.size();i++)
	    {
	        if(v[i]==1)
	          cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    }

	    v.clear();
	}
	return 0;
}
