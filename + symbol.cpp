/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    char sym = '+';
    
    std::cout<<"Enter first number:"<<std::endl;
    std::cin>>a;
    std:cout<<"Enter second Number:"<<std::endl;
    std::cin>>b;
    std::cout<<"Please take an action:"<<std::endl;
    std::cin>> sym;
    
    if(a>=99){
        std::cout<<"Result=> "<<a+b;
        
    }
    else if (a<98){
        std::cout<<"Other Result=> "<<a+b;
    
    }
    else {
    std::cout <<"Error";


}
}
