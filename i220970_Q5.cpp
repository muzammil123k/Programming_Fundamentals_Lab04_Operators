#include<iostream>
using namespace std;
int main()
{
cout<<"name:muzzamil ahmed\nrollno:i220970\n";
cout<<"plz enter your 4 digit no\n";
int no;
cin>>no;
int first;
first=no/1000;
int forth;
forth=no%10;
cout<<"\n"<<first<<"+"<<forth<<"="<<first+forth<<"\n";
return 0;
}

