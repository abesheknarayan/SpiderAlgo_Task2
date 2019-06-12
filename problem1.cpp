#include<bits/stdc++.h>
using namespace std;

void strfn(string s)
{
	    int a=0,i;
		int b=0;
		int res=0;
		int flag=0;
		int f2=0;
	for( i=0;i < s.size();i++)
	{
	    
	    
		if(s[i]=='>')
		{
			a++;
		}
		if(s[i]=='<')
		{
			b++;
			
		}
		
		if(a>b&&f2==0)
		{
		    res=0;
		    break;
		}
		else if(b>=a)
		{
		    res++;
		    f2=1;
		    
		}
		
		
		
	}
	if(b>a)
	{
	    res-=b-a;
	}
	cout<<res<<endl;
}

int main()
{   string s;
	char c;
	int n;
	int t;
	

	
      
      
      
     cin >>t;
     for(int i=0;i<t;i++)
     {
         cin>>s;
         
    
      

		strfn(s);
         
     }
		return 0;
	
}
