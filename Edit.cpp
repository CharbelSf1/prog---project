#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream File;

struct Info{
	
	string NameOfProduct;
	string qty;
	string date;
	string value;
	
};

void Edit(){
	
	vector<Info> data;
	struct Info buffer;
	
	File.open("Income.txt");
	while (!File.eof()){
		File >> buffer.date >> buffer.NameOfProduct >> buffer.qty >> buffer.value;
		data.push_back(buffer);
	}

	cout << data.size() << endl;
	File.close();
}
