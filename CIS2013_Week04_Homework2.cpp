#include <iostream>
#include <stdlib.h>

using namespace std;


char hit,question;
bool gameStart = true;
bool endResult = false;
bool endQuest = false;
int pCard1 = rand() % 14 + 1, pCard2 = rand() % 14 + 1, pCard3 = rand() % 14 + 1, pCard4 = rand() % 14 + 1, pCard5 = rand() % 14 + 1;
int dCard1 = rand() % 14 + 1, dCard2 = rand() % 14 + 1, dCard3 = rand() % 14 + 1, dCard4 = rand() % 14 + 1;
int pTotal, dTotal;


void bust() {
	if (pTotal > 21) {
		cout << "You have " << pTotal << endl;
		cout << "You busted, you lose" << endl;
	}
	if (dTotal > 21) {
		cout << "Dealer has " << dTotal;
		cout << "Dealer bust, You Win" << endl;

	}
}

void results() {
	cout << "You have " << pTotal << endl << "Dealer has " << dTotal << endl;
	if (pTotal < dTotal) {
		cout << "You lose" << endl;
	}
	if (pTotal > dTotal) {
		cout << "You win" << endl;
	}
}

void faceCard(int cardNum) {
	int cardNum = pCard1;
	if (cardNum == 14) {
		cout << "A" << endl;
		
	}
}

int main() {
	

	while (gameStart) {
		cout << "Lets play Blackjack" << endl;
		cout << "You have " << pCard1 << " " << pCard2 << endl;
		pTotal = pCard1 + pCard2;
		cout << "Dealer is showing " << dCard1 << endl;
		cout << "Do you want to hit? y/n" << endl;
		cin >> hit;

		if (hit == 'y') {
			cout << "You have " << pCard1 << " " << pCard2 << " " << pCard3 << endl;
			pTotal = pCard1 + pCard2 + pCard3;
			bust();
			cout << "Hit again? y/n" << endl;
			cin >> hit;

			if (hit == 'y') {
				cout << "You have " << pCard1 << " " << pCard2 << " " << pCard3 << " " << pCard4 << endl;
				pTotal = pCard1 + pCard2 + pCard3 + pCard4;
				bust();
				cout << "Hit again? y/n" << endl;
				cin >> hit;

				if (hit == 'y') {
					cout << "You have " << pCard1 << " " << pCard2 << " " << pCard3 << " " << pCard4 << " " << pCard5 << endl;
					pTotal = pCard1 + pCard2 + pCard3 + pCard4 + pCard5;
					bust();
					cout << "You can not hit again" << endl;
					hit = 'n';
				}
			}
		}

		if (hit == 'n') {
			cout << "Dealer shows other card" << endl;
			cout << "Dealer has " << dCard1 << " " << dCard2 << endl;
			dTotal = dCard1 + dCard2;

			if (dTotal <= 16) {
				cout << "Dealer must hit" << endl;
				cout << "Dealer has " << dCard1 << " " << dCard2 << " " << dCard3 << endl;
				dTotal = dCard1 + dCard2 + dCard3;
				bust();

				if (dTotal <= 16) {
					cout << "Dealer must hit" << endl;
					cout << "Dealer has " << dCard1 << " " << dCard2 << " " << dCard3 << " " << dCard4 << endl;
					dTotal = dCard1 + dCard2 + dCard3 + dCard4;
					bust();
				}
			}
		}
		else (dTotal >= 17); {
			cout << "Dealer stays" << endl;
			endResult = true;
		}

		if (endResult == true) {
			results();
		}

		
			cout << "Do you want to play again? y/n" << endl;
			cin >> question;
			if (question != 'y') { gameStart = false; }
		
	}


	return 0;
}
	

