#include<bits/stdc++.h>

using namespace std;
long fnmax(long a,long b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
     long int n,q;
     long int r,l,u,x,t;
     long int i;
     t=0;
     
     cin>>n>>q;
      r=n;  //minimum max value i.e the last element
     
	 
 
	 vector< pair<long int,long int> > v;


     for(i = 1;i <= q;i++)
    {
    
        cin>>l>>u>>x;

 
        v.push_back(make_pair(l-1,x));
        v.push_back(make_pair(u,-x));
        
    }
    sort(v.begin(),v.end());
    
    for(i = 0;i < v.size();i++)
    {
    	
    	if(v[i].second<0)  //elements next to upper bound as we are considering index
    	{
    	    r=fnmax(t+v[i].first,r);
    	    t+=v[i].second;
    	}
    	else{
    	    t+=v[i].second;
    	}
	}
	cout<<r;

   return 0;
}
