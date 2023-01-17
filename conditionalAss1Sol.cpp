#include<iostream>

using namespace std ;

int main() {

	int rating;

	cin >> rating;

	switch(rating){
		case 1:
			puts("Rating is 1star");
			break;
		case 2:
			puts("Rating is 2star");
			break;
		case 3: 
			puts("Rating is 3star");
			break;
		default:
			puts("Rating should be b/w 1 and 3");
			break;

	}
	return 0;
}



