#include <iostream>
#include <fstream>

using namespace std;

void date(int &day, int &month, int &year);
int LineInFile();

struct Info{
	
	string NameOfProduct;
	int qty;
	int date[3];
	double value;
	
};

ifstream fileCout;

void Display(){
	
	Info income;
	string line;
	
	char slash;
	int option;
	
	int day, month, year;
	
	date(day,month,year);
	
	cout<<"-Display All \t\t\t(Enter 1)"<<endl<<"-Display Last 3 Months \t\t(Enter 2)"<<endl<<"-Display Specific Dates \t(Enter 3)"<<endl;
	cout<<"Option: ";
	
	cin>>option;
	
	cout<<endl<<endl;
	
	
	fileCout.open("Income.txt");

	cout<<"Date\t\tName Of Product\t\tQuantity\tValue\tTotal"<<endl;
	while(!fileCout.eof()){
		
		if(option == 1){
			
			fileCout >> income.date[2] >> slash >> income.date[1] >> slash >> income.date[0];
			cout << income.date[2] << slash << income.date[1] << slash << income.date[0];
			
			getline(fileCout,line);
	    	cout << line << endl;
    	
		}
		
      	else if(option == 2){
      		
		  }
	}
	
	fileCout.close();
	
}
