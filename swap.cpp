#include<iostream.h>
#include<conio.h>
void main()
{   clrscr();
    int a,b;
    cout<<"Enter number1: ";
    cin>>a;
    cout<"Enter numnber2: ";
    cin>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"NUMBER1: "<<a<<"\n";
    cout<<"NUMBER2: "<<b<<"\n";
    getch();
}