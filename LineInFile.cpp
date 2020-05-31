#include <iostream>
#include <fstream>

using namespace std;

ifstream File;

int LineInFile(){
	
	string line;
	int count=0;
	
	File.open("Income.txt");
	
	while(!File.eof()){
		
		getline(File,line);
		count++;
		
	}
	
	File.close();
	
	return count;
}
