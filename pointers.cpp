#include<iostream>
using namespace std;

int main() {
	int life;
	life = 4;

	int card , myCard;
	card = 40;
	int my_card = card;

	int *myp; //mypointer
	myp = &card;

	myCard = *myp; //pointer deref.

	printf("Value of card is: %d\n", my_card);
	printf("Value of card is : %p\n", myp);
	printf("Value of card is: %d\n", myCard);

	return 0;

}

