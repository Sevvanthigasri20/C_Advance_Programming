#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, i;
        cin>>n>>x;
        int a[n];
        int b[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int sum = 0;
        for(i=0; i<n; i++)
        {
            if(a[i] >= x)
            {
                sum = sum + b[i];
            }
        }
        cout<<"Total cost = "<<sum<<" ";
        
    }
}