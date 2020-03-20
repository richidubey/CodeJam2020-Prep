#include<bits/stdc++.h>

using namespace std;

struct cell
{
	bool up;
	bool left;
};

int main()
{
	int t;
	cin>>t;
	
	
	while(t--)
	{
		int n;
		
		cin>>n;
		
		struct cell maze[n][n];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				maze[i][j].up=false;
				maze[i][j].left=false;
			}
		}
		
		int x=0,y=0;
		
		char c;
		
		int count=2*n-2;
		
		while(count!=0)
		{	
			count--;
			
			cin>>c;
			
			if(c=='E')
			{
				x++;
				maze[x][y].left=true;
			}
			if(c=='S')
			{
				y++;
				maze[x][y].up=true;
			}
		}
		
		
		x=0;y=0;
		
		while(x!=(n-1) || y!=(n-1) )
		{
			
		}
		
	}
	
	
	
	
	return 0;	
}
