#include<bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    int q,i,j,n;
    cin>>n;
    cin>>q;
    long l,u,x;
    
    for(i=0;i<n;i++)
    {
        v.push_back(0);
    }
    
    for(i=0;i<q;i++)
    {
        cin>>l>>u>>x;
        v[l-1]+=x;
        if(u<n)
        {
        v[u]-=x;
        }
    }
    for(i=0;i<v.size();i++)
    {
        v[i+1]+=v[i];
        
    }
    for(i=0;i<v.size();i++)
    {
        v[i]+=i+1;
    }
    long max=*max_element(v.begin(),v.end());
    cout<<max;
    return 0;
}
