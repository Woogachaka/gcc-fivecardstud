#include "FiveCardStud.h"



FiveCardStud::FiveCardStud(void) {
	
}


FiveCardStud::~FiveCardStud(void) {

}

void FiveCardStud::setup(short nPlayers){
	players.clear();
	for(int i = 0; i < nPlayers; i++) {
		Player player;
		players.push_end(player)
	}
}

void FiveCardStud::play() {

}

void FiveCardStud::packUp() {

}

// private:

void FiveCardStud::playRound() {

}

void FiveCardStud::performBetting() {
	// betting starts with the person with the highest visible card / hand goes first

}
