#include <iostream>
using namespace std;

int main(){
	string name;
	string bYear;
	string favColor;
	
	cout << "Hello! Welcome to GitHub" << endl;
	cout << "Please enter your name: " << endl;
	cin >> name;
	cout << "Please enter your birth year: " << endl;
	cin >> bYear;
	cout << "Please enter your favorite color: " << endl;
	cin >> favColor;

	cout << "Thank you! Loading..." << endl;

	cout << "Hello, " << name << "!" << endl;
	cout << "Bio" << endl << "-----------"<< endl << "Name: " << name << endl << "Birth Year: " << bYear << endl << "Favorite Color: " << favColor << endl;  
	return 0;
}
