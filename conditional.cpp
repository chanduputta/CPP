#include<iostream>

int main() {
	int rating = 4 ;

	if(rating == 5){
		puts("5 star rated");

	} else if(rating == 4){
		puts("4 star rated");
	}
	else {
		puts("NOT 4 or 5 star rated");
	}
//ternary operation
	printf("Your rating feedback is: %s\n", rating == 5 ? "You got 5star rating" : "You need to work it hard");

	return 0;
}



