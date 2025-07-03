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
	int dia = 0;
    for(i=0; i<n; i++)
    {
    
    	for(j=0; j<n; j++)
    	{
    		if((i+j==n-1) || ((i+j==n) && (i != j)))
    		{
    			dia = dia + a[i][j];
			}
		}
	}
	if(dia == 0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	
}
