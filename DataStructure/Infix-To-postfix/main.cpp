#include<iostream>
#include "Stack.h"
using namespace std;
int main()
{
    int size=100;
    stack s(size);
    //char infix[]="A+(B*C-(D/E^F)*G)*H";
    char infix[]="";
    cout<<"Input Infix Value: ";
    cin>>infix;
    
    string postfix=s.InfixtoPostfix(infix,size);
    cout<<"Postfix: "<<postfix<<endl;

    return 0;
}
