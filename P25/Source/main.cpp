#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]);


int main() {
	const char *suit[4] = {"Hearts","Diamonds","Clubs","Spades"};

	const char *face[13] = {
		"Ace","Deuce","Three","Four",
		"Five","Six","Seven","Eight",
		"Nine","Ten","Jack","Queen","King"
	};

	int deck[4][13] = {0};

	srand(time(0));

	shuffle(deck);
	deal(deck,face,suit);


	system("pause");
	return 0;
}

void shuffle(int wDeck[][13]) {
	int row = 0, colume = 0, card = 1;
	for (card = 1; card <= 52; card++) {
		do {
			row = rand() % 4;
			colume = rand() % 13;
		} while (wDeck[row][colume] != 0);
		wDeck[row][colume] = card;
	}

}
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]) {
	int card = 0, row = 0, col = 0;
	for (card = 1; card <= 52; card++) {
		for (row = 0; row < 4; row++) {
			for (col = 0; col < 13; col++) {
				if (wDeck[row][col] == card) {
					printf("%5s of %-8s%c", wFace[col],wSuit[row],((card%2==0)?'\n':'\t'));
				}
			}
		}
	}
}
