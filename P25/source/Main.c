#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int wDeck[][13]);
void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]);

int main(void)
{
	const char *suit[4] = { "Hearts","Diamonds","Clubs","Spades" };

	const char *face[13] =
	{ "Ace", "Duece", "Three", "Four",
	 "Five", "Six", "Seven", "Eight",
	"Nine", "Ten", "Jack", "Queen", "King" };

	int deck[4][13] = { 0 };

	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);

	system("pause");
	return 0;
}

void shuffle(int wDeck[][13])
{
	int row;
	int columu;
	int card;

	for (card = 1; card <= 52; card++)
	{
		do
		{
			row = rand() % 4;
			columu = rand() % 13;
		} while (wDeck[row][columu] != 0);

		wDeck[row][columu] = card;
	}
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[])
{
	int row;
	int columu;
	int card;

	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (columu = 0; columu <= 12; columu++)
			{
				if (wDeck[row][columu] == card)
				{
					printf("%5s of %-8s%c", wFace[columu], wSuit[row],
						card % 2 == 0 ? '\n' : '\t');
				}
			}
		}
	}
}