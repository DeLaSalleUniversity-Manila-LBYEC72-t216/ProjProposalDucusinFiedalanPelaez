#include <iostream>
#include <time.h>
#include <string>

using namespace std;

struct construction{
	string plate;
	int control;
	string brand;
	int secs;
};


int main() {

int i,p,m, num,numi;
double parameter;
char n;
construction sheet[30];
int am;
double seconds1, seconds2;

for(i=0;i<30;i++)
{
sheet[i].control = 0;
sheet[i].plate = "N/A";
sheet[i].brand = "\tN/A";
sheet[i].secs = 0;
}


m=0;

do
{
system("CLS");

cout << "\tTicketing Booth \n \n \n"
	 << "1. Add entries \n"
	 << "2. Search / Inquire \n"
	 << "3. Display entries \n"
	 << "4. Print Ticket \n"
	 << "5. Exit\n\n";

cin>>p;

cin.ignore();

//--------------------------------------------------------------------------------------

switch(p)
{
case 1:
{
system("CLS");
cout<<"Input Plate number:\n";
getline(cin, sheet[m].plate);
sheet[m].control = 814171+m;
cout<<"\nInput Car Model:\n";
getline(cin, sheet[m].brand);

time_t timer;
  struct tm y2k = {0};

  y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

  time(&timer);  /* get current time; same as: timer = time(NULL)  */

  seconds1 = difftime(timer,mktime(&y2k));
  sheet[m].secs = seconds1;

m++;

cout<<"\nDatabase updated!\n";
for(i=0;i<m;i++){
cout << "Your ticket number is " << sheet[i].control << endl;
}


system("pause");

n='Y';

}break;


case 2:
{
	system("CLS");
	cout<<"Please enter your ticket number:\n";
	cin >> parameter;
for(i=0;i<m;i++){
if (sheet[i].control==parameter){
	cout << "\n" << parameter << " has been found!" << endl;
	cout << "Plate Number: " << sheet[i].plate << " Car Model: " << sheet[i].brand << endl;
} else {
	cout << "Ticket Number Invalid!\n";
	}
}

	system("PAUSE");
	n='Y';

} break;


case 3:
{
system("CLS");
cout << "List of Entries \n \n \n";
cout << "Ticket No.\t\t\tPlate\t\t\t\tCar Model\n";

	for(i=0;i<30;i++)
	{
	cout<<sheet[i].control<<"\t\t\t\t"<<sheet[i].plate<<"\t\t\t"<<sheet[i].brand << endl;
	}
	
system("Pause");

n='Y';
}break;


case 4:
{
	cout<<"\nWhich entry in the database is your car?:\n";
	cin >> numi;
	
	time_t timer;
  	struct tm y2k = {0};
  	double seconds;

  	y2k.tm_hour = 0;   y2k.tm_min = 0; y2k.tm_sec = 0;
  	y2k.tm_year = 100; y2k.tm_mon = 0; y2k.tm_mday = 1;

  	time(&timer);  /* get current time; same as: timer = time(NULL)  */
	num = numi-1;
  	seconds2 = difftime(timer,mktime(&y2k));
  	int q = sheet[num].secs;
	
	am= seconds2-q;
	
	float charge = am/3600;
	float time = am/60;
	
cout << "You were parked for "<< am << " seconds or "<< time <<" minutes.";
cout <<"\nTotal charge is "<< charge << " pesos.";
return 0;
}break;

case 5:
	return 0;
	break;

default: cout<<"Invalid input \n \n";system("pause");n='Y';break;

}
	
}while(n=='Y');
	return 0;
}
