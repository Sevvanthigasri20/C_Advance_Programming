
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, j;
    cin>>n1>>n2;
    int a[n1][n2];
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            cin>>a[i][j];
        }
    }
    int ldia = 1, value1, ldia1;
    int rdia = 1, value2, rdia1;
    for(i=0; i<n1; i++)
    {
        for(j=0; j<n2; j++)
        {
            if(i==j)
            {
                ldia = ldia * a[i][j];
                value1 = a[i][j];
                ldia1 = ldia / a[i][j];
            }
            else
            {
                rdia = rdia * a[i][j];
                value2 = a[i][j];
                rdia1 = rdia / a[i][j];
                
            }
        }
    }
   if((ldia1 == value1) || (rdia1 == value2) || (n1+n2>=0 && n1+n2<=2))
   {
       cout<<"Symmetric";
   }
   else
   {
       cout<<"Not Symmetric";
   }
   
}