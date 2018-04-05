#include "Game.h"
#include <iostream>

using namespace std;

void Game::play()
{
	//Display welcome message
	cout << "Welcome to Yahtzee!\n";
	cout << "----------------------------------------------------------------------------------\n";

	int categoryNum;

	//While the scorecard isn't completely filled out, keep rolling and playing the game
	while (!gameFinished())
	{
		//Roll the dice and get random numbers
		Dice::setDice();
		cout << "You rolled: " << Dice::getDice1() << "," << Dice::getDice2() << "," << Dice::getDice3() << "," << Dice::getDice4() << "," << Dice::getDice5() << endl;
		cout << "----------------------------------------------------------------------------------\n";

		//Display categories (only if they haven't been scored yet)
		cout << "Categories you can score: " << endl;
		if (acesScored == false)
		{
			cout << "1 - Aces" << endl;
		}
		if (twosScored == false)
		{
			cout << "2 - Twos" << endl;
		}
		if (threesScored == false)
		{
			cout << "3 - Threes" << endl;
		}
		if (foursScored == false)
		{
			cout << "4 - Fours" << endl;
		}
		if (fivesScored == false)
		{
			cout << "5 - Fives" << endl;
		}
		if (sixesScored == false)
		{
			cout << "6 - Sixes" << endl;
		}
		if (threeOfAKindScored == false)
		{
			cout << "7 - 3 Of A Kind" << endl;
		}
		if (fourOfAKindScored == false)
		{
			cout << "8 - 4 Of A Kind" << endl;
		}
		if (smallstraightScored == false)
		{
			cout << "9 - Small Straight" << endl;
		}
		if (largeStraightScored == false)
		{
			cout << "10 - Large Straight" << endl;
		}
		if (fullHouseScored == false)
		{
			cout << "11 - Full House" << endl;
		}
		if (yahtzeeScored == false)
		{
			cout << "12 - Yahtzee" << endl;
		}
		if (chanceScored == false)
		{
			cout << "13 - Chance" << endl;
		}

		cout << "Type the number 1-13 in order to choose a category to score: ";
		cin >> categoryNum;

		//Case statements to decide which user category to score
		switch (categoryNum)
		{
		case 1:
			if (getAceScore() == 0)
			{
				scoreAces(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored aces, your score for this category is: " << ScoreCard::getAceScore() << endl;
				break;
			}
			break;
		case 2:
			if (getTwosScore() == 0)
			{
				scoreTwos(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored twos, your score for this category is: " << ScoreCard::getTwosScore() << endl;
				break;
			}
			break;
		case 3:
			if (getThreesScore() == 0)
			{
				scoreThrees(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored threes, your score for this category is: " << ScoreCard::getThreesScore() << endl;
				break;
			}

			break;
		case 4:
			if (getFoursScore() == 0)
			{
				scoreFours(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored fours, your score for this category is: " << ScoreCard::getFoursScore() << endl;
				break;
			}
			break;
		case 5:
			if (getFivesScore() == 0)
			{
				scoreFives(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored fives, your score for this category is: " << ScoreCard::getFivesScore() << endl;
				break;
			}
			break;
		case 6:
			if (getSixesScore() == 0)
			{
				scoreSixes(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored sixes, your score for this category is: " << ScoreCard::getSixesScore() << endl;
				break;
			}
			break;
		case 7:
			if (getThreeOfAKindScore() == 0)
			{
				scoreThreeOfAKind(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored three-of-a-kind, your score for this category is: " << ScoreCard::getThreeOfAKindScore() << endl;
				break;
			}
			break;
		case 8:
			if (getFourOfAKindScore() == 0)
			{
				scoreFourOfAKind(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored four-of-a-kind, your score for this category is: " << ScoreCard::getFourOfAKindScore() << endl;
				break;
			}
			break;
		case 9:
			if (getSmallStraightScore() == 0)
			{
				scoreSmallStraight(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored small straight, your score for this category is: " << ScoreCard::getSmallStraightScore() << endl;
				break;
			}
			break;
		case 10:
			if (getLargeStraightScore() == 0)
			{
				scoreLargeStraight(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored large straight, your score for this category is: " << ScoreCard::getLargeStraightScore() << endl;
				break;
			}
			break;
		case 11:
			if (getFullHouseScore() == 0)
			{
				scoreFullHouse(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored full house, your score for this category is: " << ScoreCard::getFullHouseScore() << endl;
				break;
			}
			break;
		case 12:
			if (getYahtzeeScore() == 0)
			{
				scoreYahtzee(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored yahtzee, your score for this category is: " << ScoreCard::getYahtzeeScore() << endl;
				break;
			}
			break;
		case 13:
			if (getChanceScore() == 0)
			{
				scoreChance(Dice::getDice1(), Dice::getDice2(), Dice::getDice3(), Dice::getDice4(), Dice::getDice5());
				cout << "Scored yahtzee, your score for this category is: " << ScoreCard::getChanceScore() << endl;
				break;
			}
			break;
		default:
			cout << "Invalid choice, please try again!" << endl;
			break;
		}
		displayScoreCard();
	}

	//Finished the game and display the final user score
	cout << "\nThank you for playing!! Your final score is: " << getFinalScore() << endl << endl;
}
