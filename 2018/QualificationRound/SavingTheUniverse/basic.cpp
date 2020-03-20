#include<bits/stdc++.h>

using namespace std;

int caldam(string s)
{
int cur=1;
int dam=0;
		
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='S')
			{
		//		cout<<"for i = "<<i<<"added "<<cur<<" to damage"<<endl;
				dam+=cur;
			}
			
			else cur*=2;
		}
	
	return dam;
}
int main()
{
	int t;
	
	cin>>t;
	
	int n=0;
	
	string s;
	
	int d;
	
	while(t--)
	{
		n++;
		
		cin>>d;
		cin>>s;
		
		
		
		
		int dam=caldam(s);
		
		bool flag=false;
		if(dam<=d)
		{
			cout<<"Case #"<<n<<": "<<0<<endl;
			continue;
		}
		
		int req=0;
		
		for(int i=s.length()-2;i>=0;i--)
		{
	//		cout<<"Checking "<<s[i]<<" as i = "<<i<<" with "<<s[i+1]<<endl;
			if(s[i]=='C'&&s[i+1]=='S')
			{
	//			cout<<"match"<<endl;
				req++;
				s[i]='S';
				s[i+1]='C';
				dam=caldam(s);
	//			cout<<"New Damage: "<<dam<<endl;
			
			
				if(dam<=d)
				{
					cout<<"Case #"<<n<<": "<<req<<endl;
					flag=true;
					break;
				}
				else
				{
					i=s.length()-1;
	//				cout<<"new beginning, string= "<<s<<" with len = "<<s.length()<<endl;
				}
			}
		}
		
		if(flag==false)
		cout<<"Case #"<<n<<": IMPOSSIBLE"<<endl;
	}
}
