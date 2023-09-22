# include <iostream>
using namespace std;
main ()
{
int a ;
float i ;
float p ;

cout<<"Enter Imposter Count: ";
cin>>i;

cout<<"Enter Player Count: ";
cin>>p;

a=100*(i/p);

cout<<"Chance of being an imposter: "<<a<<"%";

 
}