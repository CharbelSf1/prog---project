#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

void date(int &year, int &month, int &day);
void SaveToFile(string Description, int year, int month, int day, double value, bool type, bool Bool);
void Income_Des(bool type);
void Display();
int LineInFile();
void Edit();

int main(){
/*
	//Info Expenses;
	int option;
	bool type;
	
	
	cout<<"Income and Expenses management software"<<endl;
	cout<<"Currency Used in this software is US Dollars ($)"<<endl<<endl;
	cout<<"Options: -Income \t\t(Enter 1)"<<endl;
	cout<<"\t -Expenses \t\t(Enter 2)"<<endl;
	cout<<"\t -Display Informations \t(Enter 3)"<<endl;

	
	do{
		cout<<"Option: ";
		cin>>option;
		cout<<endl<<endl;
		
		if(option==1){
			
			type=true;
			Income_Des(type);
			
		}
		
		else if(option==2){
			
		}
		
		else if(option==3){
			Display();
		}
		
		else if(option!=1 && option!=2 && option!=3) cout<<"Option not valid"<<endl;
		
	}while(option!=1 && option!=2 && option!=3);*/
	Edit();
	return 0;
	
}
