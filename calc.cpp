#include<iostream>
using namespace std;
 
int main()
{
    int n1,n2;
    char c,k;
    cout<<"HEY THERE! Welcome to my calculator!\n";
    check:
    cout<<"ENTER THE FIRST NUMBER YOU WANT TO DO CALCULATE\n";
    cin>>n1;
    cout<<"ENTER THE SECOND NUMBER YOU WANT TO DO CALCULATE\n";
    cin>>n2;
    cout<<"Enter any of the following operator to perform operation on the numbers: \n";
    cout<<"+,-,*,/,% \n ";
    cin>>c;
    
    
    if(c=='+')
    {
        cout<<n1<<"+"<<n2<<" = "<<n1+n2;
    }
    else if(c=='-')
    {
        cout<<n1<<"-"<<n2<<" = "<<n1-n2;

    }
    else if(c=='*')
    {
        cout<<n1<<"*"<<n2<<" = "<<n1*n2;
        
    }
    else if(c=='/')
    {
        cout<<n1<<"/"<<n2<<" = "<<n1/n2;

    }
    else if(c=='%')
    {
        cout<<n1<<"%"<<n2<<" = "<<n1%n2;

    }
    else cout<<"ENTER VALID OPERAND";

    cout<<"DO YOU WANT TO ENTER THE NUMBERS AGAIN? IF YES THEN ENTER Y OTHERWISE ENTER N";
    cin>>k;
    if(k=='Y')
    {
        goto check;
    }
    
    return 0;
}