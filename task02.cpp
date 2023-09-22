# include <iostream>
using namespace std;
main ()
{
int minute;
int second;
int frame;

cout<<"Number of Minutes: ";
cin>>minute;

cout<<"Frames per Second: ";
cin>>second;

frame=(minute*60)*second;

cout<<"Total Number of Frames: "<<frame;


}