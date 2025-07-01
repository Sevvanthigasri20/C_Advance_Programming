
/*Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.*/

#include <iostream>
using namespace std;
void bodyMass(float w, float h)
{
     float height = h/100.0;
     float h1 = height * height;
     float bmi = w / h1;
     if(bmi < 18.5)
       {
              cout<<"You are underweight. Have an apple daily.";
       }
     else if((18.5 <= bmi) && (bmi < 25))
       {
              cout<<"You are normal. Go walking daily and maintain it.";
       }
     else if(bmi >= 25) {
              cout<<"You are obese. Go to doctor.";
            }
     
}
int main()
{
       float w, h;
       cin>>w>>h;
       bodyMass(w, h);
     
      
}