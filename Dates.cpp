#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;

void date(int &day, int &month, int &year){

			
		time_t now = time(0);
	
		tm *ltm = localtime(&now);
	
		year=1900 + ltm->tm_year;
		month= 1 + ltm->tm_mon;
		day = ltm->tm_mday;
	   
	
}


