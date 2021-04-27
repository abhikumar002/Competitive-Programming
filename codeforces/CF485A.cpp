#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,m;
    cin>>a>>m;

    unordered_map<long long,int> mp;
    if(a%m==0)
    {
        cout<<"Yes"<<endl;
        return 0;
    }

    while(mp[a%m]!=1 && (a%m)!=0)
    {
        mp[a%m]=1;
        a=a+(a%m);
    }

    if(a%m==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
