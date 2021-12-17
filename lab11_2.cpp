#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------" << endl;
	dest << "AR CHI" << endl;
	dest << "AR BOW" << endl;
	dest << "CHOW CHOW" << endl;
	dest << "BA KA" << endl;
	dest << "BA GEAR" << endl;
	dest << "CHEER CHEER" << endl;
	dest << "WE ARE ALL" << endl;
	dest << "ENTANEER" << endl;
	dest << "CMU" << endl;
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
