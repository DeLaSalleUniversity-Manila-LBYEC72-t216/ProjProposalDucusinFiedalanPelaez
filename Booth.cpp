#include <iostream>
#include <time.h>
#include <string>

using namespace std;

typedef struct construction{
	string plate;
	int control;



int main() {

int i,p,m;
char n;
data sheet[30];

for(i=0;i<30;i++)
{
sheet.control[i] = 0;
sheet.plate[i] = "n/a";
}

m=0;

do
{
system("CLS");

cout<<"	Ticketing Booth \n \n \n"
	<<"1 - Add \n"
	<<"2 - Search / Inquire \n"
	<<"3 - Bill \n"
	<<"4 - Exit \n \n";
cin>>p;

//--------------------------------------------------------------------------------------

switch(p)
{
case 1:
{
system("CLS");
cout<<"\n \n Input Plate number: ";
cin>>sheet.plate[m];

sheet.control[m]= 0816217;
m++;

cout<<"\n Database updated! \n \n"
system("pause");

n='Y';

}break;


case 2:
{
cout<<"Please choose a search parameter"
    <<"\n \n \n 1 - Plate no. \n"
    <<" 2 - Date of entry";
	
}break;


case 3:
{

}break;


case 4:
{
return 0;
}break;


default: cout<<"Invalid input \n \n";system("pause");n='Y';break;

}
	
}while(n=='Y');
	return 0;
}
