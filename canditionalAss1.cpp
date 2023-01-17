#include<iostream>

int main() {
	int rating;
	std :: cout << "Rate our services" << std :: endl;
	std :: cin >> rating;

	printf("Your rating is %d star Thank you\n", rating);
	
	if(rating == 5){
		puts("5 star yah! its great");
	} else if(rating == 4){
		puts ("we got 4 stars, Where we lost that 1 star");
	} else if(rating == 3){
		puts("Its average ! suggest where we can improve");
	} else if(rating == 2){
		puts("Sorry to get 2 star! any complaints on us");
	} else if(rating == 1){
		puts("I got it, you are not satisfied we better us nxt time");
	} else {
		puts("choose only between 1 and 5");
	}

	printf("Your rating feedback is : %s\n", 0 < rating < 6 ? " Very Helpful to our growth" : "Error 101");

	return 0;
}

