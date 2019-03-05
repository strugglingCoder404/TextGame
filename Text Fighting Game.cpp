
#include "pch.h"
#include <iostream>
#include <string>

class Enemy
{
	public:
		std::string element;
		int hp = 50;

	private:
		int atk = 15;
		int critAtk = 20;	
};

class Boss
{
	public:
		int hp = 200;

	private:
		int atk = 25;
		int critAtk = 30;
};

class Player
{
	public:
		std::string element;
		int hp = 150;

	private:
		int atk = 20;
		int critAtk = 30;
};

int main()
{
	Player player;
	player.element;
	std::string fire = "fire";
	std::string Fire = "Fire";
	std::string water = "water";
	std::string Water = "Water";
	std::string ice = "ice";
	std::string Ice = "Ice";
	char decision;


	std::cout << "Welcome to this text based fighting game.\nThe goal of the game is to kill all the enemies including the Boss";
	std::cout << "\nThere are three different elements in this game: Fire, Water and Ice.\nThere will be enemies of each of those elements.";
	std::cout << "\nAt the start you will have to choose which element you want your hero to have mastered.";
	std::cout << "Fire does critical damage against ice, ice does critical damage against water, water against fire and so on.\n\n\n";
	std::cout << "\nNow please choose the element which you want your hero to master. Choose between Water, Fire and Ice: ";
	std::cin >> player.element;
	if (player.element == fire | player.element == Fire | player.element == water | player.element == Water | player.element == ice | player.element == Ice) {
		std::cout << "\n\n''Welcome Master of the art of " << player.element << ". ";
		std::cout << "Our country got invaded by dangerous monsters and you are the only one able to kill them! We need your help!''";
		std::cout << "\n''Will you help us?''('y' or 'n')";
		std::cin >> decision;

		if (decision == 'y') {
			std::cout << "''Thank you so much! Go to the high volcano please. There will be your first enemy!''";
			std::cout << "...You are travelling to the big volcano on the horizon...";
		}
		else if(decision == 'n'){
			std::cout << "'Get fucking lost then you stupid cunt!'";
			std::cin.get();
		}
		else {
			std::cout << "Your input was invalid. Please restart the program and try again.";
			std::cin.get();
		}
	}
	else {
		std::cout << "Your input was invalid. Please restart the program and try again.";
		std::cin.get();
	}
std::cin.get();
}

