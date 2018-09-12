#include<iostream>
using namespace std;
int main(){

int num1, num2, num3, num4, num5, gcd;
cout<<"PLease enter the first number"<<endl;
cin>>num1;

cout<<"Please enter the second number"<<endl;
cin>>num2;

num3=num1;
num4=num2;

while(num4 !=0)
{

   num5=num4;
   num4=num3 % num4;
   num3=num5;

}

gcd=num3;
cout<<num3;

return 0;
}


