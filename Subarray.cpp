/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
     int n, i, j, k;
     cout<<"Enter the size: ";
     cin>>n;
     int a[n];
     cout<<"Enter the array: ";
     for(i=0; i<n; i++)
     {
         cin>>a[i];
     }
     for(i=0; i<n; i++)
     {
         for(j=i; j<n; j++)
         {
             for(k=i; k<=j; k++)
             {
                 cout<<a[k]<<" ";
             }
             cout<<"\n";
         }
     }
   
    return 0;
}