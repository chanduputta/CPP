

#include<iostream>

using namespace std;

int main() {
	int score = 200;
	int *myp = &score;

	printf("Value of pointer is %d\n", score);
	printf("Value of pointer is %p\n", myp);
	printf("Value of pointer is %d\n", *myp);

	int &another_score = score;
	another_score = 800;

//Change in Reference value can change the actual value
	printf("Value of score is %d\n", score);
	printf("Value of pointer is %p\n", myp);

	return 0;

}
