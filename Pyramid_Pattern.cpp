
/*Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.*/

#include <iostream>
using namespace std;
int main()
{
    int n, i, s, j;
    cin>>n;
    int aValue = 1;
    for(i=1; i<=n; i++)
    {
        for(s=1; s<=(n-i); s++)
        {
            cout<<" "<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<aValue++<<" ";
        }
        cout<<"\n";
    }
}