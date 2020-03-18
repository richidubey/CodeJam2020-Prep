#include<bits/stdc++.h>
using namespace std;

bool checkfour(long long int num)
{
    while(num!=0)
    {
        if(num%10==4)
        return false;
        
        num/=10;
    }
    
    return true;
}

int findme(int num)
{
	int n1=0;
	int count=0;
	int curr;
	
	while(num!=0)
	{
		curr=num%10;
		
		if(curr==4)
		n1+=pow(10,count);
		
		num/=10;
		count++;
	}
	
	printf("Returning : %d\n",n1);
	return n1;
}

int main()
{
    long long int t;
    
    cin>>t;
    long long int n;
    
    long long int count=0;
    
    long long int num1,num2;
    
    while(t--)
    {
        count++;
        cin>>n;
        
        
        
        num1=findme(n);
        num2=n-num1;
        
        bool check =true;
        
         check=checkfour(num2);
            
            cout<<"first checkpoint: "<<check<<endl;
            if(check)check=checkfour(num1);
               cout<<"second checkpoint: "<<check<<endl;
        
        while(check==false)
        {
       // printf("entered 2nd loop");
           if(num2>num1)
            	num1++;
            
            
            else
            	num1--;
            	   
            	num2=n-num1;
            
            check=checkfour(num2);
            
            if(check)check=checkfour(num1);
            
          
            
        }
        
        cout<<"Case #"<<count<<": "<<num1<<" "<<num2<<endl;
        
        
    }
}
