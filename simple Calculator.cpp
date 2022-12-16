/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
int a=0;
int b=0;
char sym = '+';

std::cout<<"Number 1: " <<std::endl;
std:cin>>a;
std::cout<<"Number 2: " <<std::endl;
std::cin>>b;
std::cout<<"PLZ Use a Math Symbol: "<<std::endl;
std::cin>>sym;
switch (sym)
{
    case '*' :
std::cout<<"Result of Multiplication: "<<a*b<<std::endl;
break;
case '+' :
std::cout<<"Result of Addition: "<<a+b<<std::endl;
case '-' :
break;
std::cout<<"Result of Subtraction: "<<a-b<<std::endl;
case '/' :
break;
std::cout<<"Result of Divide: "<<a/b<<std::endl;
break;
    default:
    std::cout<<" This is NOT a Math Symbol! ";
    break;
}
    std::cout<<"*********Thank You!***********" ;
}
