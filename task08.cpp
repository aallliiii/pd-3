# include <iostream>
using namespace std;
main()
{
float vprice;
float fprice;
int nveg;
int nfru;
float ctotal;
float rtotal;

cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vprice;

cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fprice;

cout<<"Enter total kilograms of vegetables: ";
cin>>nveg;

cout<<"Enter total kilograms of fruits: ";
cin>>nfru;

ctotal=(vprice*nveg)+(fprice*nfru);
rtotal=ctotal/1.94;

cout<<"Total earnings in Rupees (Rps): "<<rtotal;

}