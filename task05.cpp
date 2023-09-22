# include <iostream>
using namespace std;
main ()
{
string name;
int tweight;
int days;

cout<<"Enter the Name of the Person: ";
cin>>name;

cout<<"Enter the target weight loss in kilograms: ";
cin>>tweight;

days=tweight*15;

cout<<name<<" will need "<<days<<" days to lose "<<tweight<<" kg of weight by following the doctor's suggestions";

}