#include <iostream>
#include <conio.h>
using namespace std;
 main()

{
	int studentID = 240200119 , year , month;
	bool isleapyear;
	cout<<"Alia Mariam Abbas";
	cout <<"\n Bc240200119";
	year = (studentID / 100 ) % 10000;
	cout <<"\n the year"<<year;
	isleapyear=(year%4 == 0 && year % 100) != 0; year % 400 == 0;
	cout <<(isleapyear ? "is a leapyear": "is not a leapyear");
	while(1)
	{
		cout <<"\n Enter the month(1_12), or -1 to stop:";
		cin >> month;
		if(month==-1)
		break;
		if(month < 1 || month >12)
		{
			cout << "Invalid month!";
			continue;
		}
		switch(month)
		{
			 1;
			cout <<"month 1_January has 31 days.";
			break;
				 2;
			cout <<"month 2_February has .";
			cout << (isleapyear ? 29:28)<<"days.";
			break;
				 3;
			cout <<"month 3_March has 31 days.";
			break;
				 4;
			cout <<"month 4_Apirl has 30 days.";
			break;
				 5;
			cout <<"month 5_May has 31 days.";
			break;
				 6;
			cout <<"month 6_June has 30 days.";
			break;
				7;
			cout <<"month 7_JJuly has 31 days.";
			break;
				 8;
			cout <<"month 8_August has 31 days.";
			break;
				 9;
			cout <<"month 9_September has 31 days.";
			break;
				10;
			cout <<"month 10_October has 31 days.";
			break;
				 11;
			cout <<"month 11_November has 31 days.";
			break;
				 12;
			cout <<"month 12_December has 31 days.";
			break;
				
		}
	}
	getch();
	return 0;
		
	
}

