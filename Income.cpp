#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void date(int &year, int &month, int &day);
void WriteToFile(string NameOfProduct, int qty, double value,int Date[], bool type, bool Bool);


struct Info{
	
	string NameOfProduct;
	int qty;
	int date[3];
	double value;
	
};

void Income_Des(bool type){
		
		bool Bool=true;
		string stp="stop";
		Info Income;
		
			cout<<"The program will continuously ask for a new product"<<endl;
			cout<<"To stop entering new products simply write the product name as 'stop'"<<endl<<endl;
			
			if(Bool == true){
				
				date(Income.date[0],Income.date[1],Income.date[2]);
				cout<<"Date: "<<Income.date[0]<<"/"<<Income.date[1]<<"/"<<Income.date[2]<<endl;
				
			}
			
			
			do{
			
			cout<<"Enter Name of Product: ";
			cin.ignore();
			getline(cin,Income.NameOfProduct);
			
			if(Income.NameOfProduct == stp) break;
			
			cout<<"Enter Quantity: ";
			cin>>Income.qty;
			
			cout<<"Enter Value of the Product: ";
			cin>>Income.value;
			
			cout<<endl<<endl;
			
			WriteToFile( Income.NameOfProduct ,Income.qty,  Income.value, Income.date , type, Bool);
			Bool=false;
			
		}while(Income.NameOfProduct != stp);
}
