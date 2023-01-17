#include<iostream>

//using namespace std;

int main() {
	//1 byte is of 8 bits
	
	printf("Size of this data type 'short int' is %ld bits\n", sizeof(short int) * 8);
	printf("Size of this data type 'int' is %ld bits\n", sizeof(int) * 8);
	printf("Size of this data type 'long int' is %ld bits\n", sizeof(long int) * 8);
	printf("Size of this data type 'long long int' is %ld bits\n", sizeof(long long int) * 8);

	return 0;
}
