#ifndef GAME_H
#define GAME_H

#include "ScoreCard.h"
#include "Dice.h"


class Game : public Dice, Die, ScoreCard
{
public:
	void play();
};

#endif
