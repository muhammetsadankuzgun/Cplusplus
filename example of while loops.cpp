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
    char sym = '+' ;
    
    while(true) {
        std::cout << "Number 1: " <<std::endl;
        std::cin>>a;
        std::cout<< "Number 2: " <<std::endl;
        std::cin>>b;
        std::cout <<"Plz Use a Number: "<<std::endl;
        std::cin>>sym;
        std::cout<< "Result: ";
        
        switch(sym) {
            
            case '+' :
            std::cout <<a+b <<std::endl;
            break;
            
            case '-' :
            std:cout <<a-b <<std::endl;
            break;
            
            case '*' :
            std::cout<< a*b<<std::endl;
            break;
            
            case '/' :
            std::cout<< a/b <<std::endl;
            break;
            
            default:
            std::cout<< "Error"<<std::endl;
            break;
            
                    }
        cout<<"Thank You!"<<std::endl;
        std::cout<<"*******************************************" <<std::endl;
    }


}
