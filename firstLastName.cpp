#include <iostream>
#include <string>
using namespace std;

int main(){
	string firstName, lastName;
	cout << "Enter your First name: \n" ;
	getline(cin, firstName);
	cout << "Enter your Last name: \n" ;
	getline(cin, lastName);
	cout << "Hey You are "<< firstName << "." << lastName << " Right!!" << endl;
	return 0;
}
