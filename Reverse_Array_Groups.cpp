#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    
    string n;
    getline(cin,n);
    stringstream ss(n);
    vector<int> v;
    int num;
    while(ss >> num)
    {
        v.push_back(num);
    }
    int k, i;
    cin>>k;
        cout<<"[";
        if(k > v.size())
        {
         
            for(i=v.size()-1; i>=0; i--)
            {
                cout<<v[i];
                if(i != 0)
                {
                    cout<<", ";
                }
                
            }
            
            
        }
        else
        {
            for(i=k-1; i>=0; i--)
            {
                cout<<v[i];
                if(i != 0 || v.size()-1 >= k)
                {
                    cout<<", ";
                }
            }
           
            for(i=v.size()-1; i>=k; i--)
            {
                cout<<v[i];
                if(i != k)
                {
                    cout<<", ";
                }
            }
        }
        cout<<"]";
    
    
}