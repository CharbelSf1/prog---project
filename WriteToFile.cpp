#include <iostream>
#include <fstream>

using namespace std;
void date(int &day, int &month, int &year);

ofstream file;

void WriteToFile(string NameOfProduct, int qty, double value,int Date[], bool type, bool Bool){
	

	date(Date[0],Date[1],Date[2]);
	
	if(type == true){
		
		file.open("Income.txt", ios::app);
		
			file << Date[2] <<"/"<< Date[1] <<"/"<< Date[0] <<"\t";

		
		file << NameOfProduct <<"\t\t\t"<< qty <<"\t\t"<< value <<"$"<<"\t"<< qty*value <<"$"<<endl;
		file.close();
		
	}
	
}

