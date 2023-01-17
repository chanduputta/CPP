#include<iostream>
#include<cstdint>

//using namespace std;

int main() {
	//1 byte is of 8 bits
	
	printf("Size of this data type 'int16_t' is %ld bits\n", sizeof(int16_t) * 8);
	printf("Size of this data type 'int' is %ld bits\n", sizeof(int32_t) * 8);
	printf("Size of this data type 'long int' is %ld bits\n", sizeof(int64_t) * 8);
	//printf("Size of this data type 'long long int' is %ld bits\n", sizeof(int128_t) * 8);

	return 0;
}
