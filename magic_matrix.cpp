#include <iostream>
using namespace std;
int main()
{
	int n, i, j;
	cin>>n;
	int a[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	}
	int ldia = 0;
	int rdia = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i == j)
			{
				ldia = ldia + a[i][j];
			}
			if((i + j) == n-1)
			{
				rdia = rdia + a[i][j];
			}
		}
	}
	if(ldia != rdia)
	{
		cout<<"no";
		return 0;
	}
	int row =0;
	for(i=0; i<n; i++)
	{
		row = 0;
		for(j=0; j<n; j++)
		{
			row = row + a[i][j];	
		}
		if(ldia != row)
		{
	       cout<<"no";
	       return 0;
     	}
    }
    int col = 0;
    for(j = 0; j < n; j++)
    {
    	col = 0;
    	for(i = 0; i < n; i++)
    	{
    		col = col + a[i][j];
		}
	    if(ldia != col)
	    {
	    	cout<<"no";
	    	return 0;
		}
	}
	if((ldia == rdia) == (row == col))
	{
		cout<<"yes";
	}	
}
