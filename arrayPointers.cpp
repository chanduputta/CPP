#include<iostream>
using namespace std;

int main() {
	int integer_array[5] = {9,1,0,0,1};
	cout << integer_array[0] << endl;

	int another_array[4];
	another_array[0] = 1;
	another_array[1] = 2;
	another_array[2] = 3;

	cout << another_array[0] << another_array[1] << another_array[2] << endl;


	*another_array = 29;
	cout << another_array[0]<< " It changed its 1st positon" << endl;
	cout << another_array[1] << endl;
	
	int *ap = another_array;
	ap++;
	ap++;
	*ap = 209;
	cout << another_array[0] << another_array[1] << another_array[2] << " It Changed its third position value" << endl;
	//cout << *ap << endl;

	return 0;
}
	
		
