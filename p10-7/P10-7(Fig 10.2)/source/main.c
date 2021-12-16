#include <stdio.h>

struct card
{
	char *face;
	char *suit;
};

int main()
{
	struct card acard;
	struct card *ptr;

	acard.face = "Ace";
	acard.suit = "Spades";

	ptr = &acard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n",acard.face," of ",acard.suit,
		ptr->face," of ",ptr->suit,(*ptr).face," of ",(*ptr).suit);

	return 0;
}