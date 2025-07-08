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
   int n,i;
   cin>>n;
   int a[n];
   for( i=0; i<n; i++)
   {
       cin>>a[i];
   }
   int temp=0;
   for(i=0; i<n; i++)
   {
         temp = a[0];
         a[0] = a[n-1];
         a[n-1] = temp;
         cout<<a[i]<<" ";
    
   }
   
}
