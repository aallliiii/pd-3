# include <iostream>
using namespace std;
main ()
{
float ivelocity ;
float acce ;
float time ;
float fvelocity;

cout<<"Enter Initial Velocity (m/s): ";
cin>>ivelocity;

cout<<"Enter Acceleration (m/s^2): ";
cin>>acce;

cout<<"Enter Time (s): ";
cin>>time;

fvelocity=acce*time+ivelocity;

cout<<"Final Velocity (m/s): "<<fvelocity;


}