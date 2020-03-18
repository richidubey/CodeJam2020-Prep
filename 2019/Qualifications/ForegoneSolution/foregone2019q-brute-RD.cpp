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
        
        num1=n/2;
        
        bool check =true;
        
        do
        {
            num1++;
            num2=n-num1;
            
            check=checkfour(num2);
            
            if(check)check=checkfour(num1);
        }while(check==false);
        
        cout<<"Case #"<<count<<": "<<num1<<" "<<num2<<endl;
        
        
    }
}
