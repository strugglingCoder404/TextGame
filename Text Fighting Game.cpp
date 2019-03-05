
#include "pch.h"
#include <windows.h>
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
		int atk = 25;
		int critAtk = 30;
};

class Player
{
	public:
		std::string element;
		int hp = 150;
		int atk = 20;
		int critAtk = 30;
};

int main()
{
	Player player;
	player.element;
	player.critAtk;

	std::string fire = "fire";
	std::string Fire = "Fire";
	std::string water = "water";
	std::string Water = "Water";
	std::string ice = "ice";
	std::string Ice = "Ice";
	char decision;
	std::string fightDecision;
	

	Enemy enemy1;
	enemy1.hp = 100; 



	std::cout << "Welcome to this text based fighting game.\nThe goal of the game is to kill all the enemies including the Boss";
	std::cout << "\nThere are three different elements in this game: Fire, Water and Ice.\nThere will be enemies of each of those elements.";
	std::cout << "\nAt the start you will have to choose which element you want your hero to have mastered.";
	std::cout << "Fire does critical damage against ice, ice does critical damage against water, water against fire and so on.\n\n\n";
	std::cout << "\nNow please choose the element which you want your hero to master. Choose between Water, Fire and Ice: ";
	std::cin >> player.element;
	if (player.element == fire | player.element == Fire | player.element == water | player.element == Water | player.element == ice | player.element == Ice) {
		std::cout << "\n\n'Welcome Master of the art of " << player.element << ". ";
		std::cout << "Our country got invaded by dangerous monsters and you are the only one able to kill them! We need your help!'";
		std::cout << "\n'Will you help us?'('y' or 'n')";
		std::cin >> decision;

		if (decision == 'y') {
			std::cout << "'Thank you so much! Go to the high volcano please. There will be your first enemy!'\n"; Sleep(1500);
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
/*you*/		std::cout << "Y"; Sleep(50);std::cout << "o"; Sleep(50); std::cout << "u"; Sleep(50); std::cout << " "; Sleep(50);
/*already*/	std::cout << "a"; Sleep(50); std::cout << "l"; Sleep(50); std::cout << "r"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << "a"; Sleep(50); std::cout << "d"; Sleep(50); std::cout << "y"; Sleep(50);std::cout << " "; Sleep(50);
/*see*/		std::cout << "s"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << " "; Sleep(50);
/*the*/		std::cout << "t"; Sleep(50); std::cout << "h"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << " "; Sleep(50);
/*volcano*/	std::cout << "v"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "l"; Sleep(50); std::cout << "c"; Sleep(50); std::cout << "a"; Sleep(50); std::cout << "n"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << " "; Sleep(50);
/*on*/		std::cout << "o"; Sleep(50); std::cout << "n"; Sleep(50); std::cout << " "; Sleep(50);
/*the*/	    std::cout << "t"; Sleep(50); std::cout << "h"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << " "; Sleep(50);
/*horizon*/ std::cout << "h"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "r"; Sleep(50); std::cout << "i"; Sleep(50); std::cout << "z"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "n"; Sleep(50); 
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << ".\n"; Sleep(500);
			std::cout << "'What is that?!'";
			std::cout << "'It looks like one of those monsters the villagers told me about "; 
			std::cout << "."; Sleep(300); std::cout << "."; Sleep(300); std::cout << "."; Sleep(300);
			std::cout << " and it burns!";
			std::cout << "\n\nThe fight begins!\nTo attack type 'atk' and to heal yourself type 'heal'!";
			//starting the battle
			while (enemy1.hp > 0 && player.hp > 0)
			{
				std::cout << "Do you want to attack or heal?\n";
				std::cin >> fightDecision;
				if (player.element == water | player.element == Water)
				{
					if (fightDecision == "atk") 
					{
						enemy1.hp = enemy1.hp - player.critAtk;
					}
					else if (fightDecision == "heal")
					{
						if (player.hp == 100)
						{
							std::cout << "You already have full hp!";
						}
						else
						{
							player.hp = player.hp + 15;
							std::cout << "You have " << player.hp << " health points!";
						}
						
					}
				}
				else
				{
					if (fightDecision == "atk")
					{
						enemy1.hp = enemy1.hp - player.atk;
						
					}
					else if (fightDecision == "heal")
					{
						if (player.hp == 100)
						{
							std::cout << "You already have full hp!";
						}
						else
						{
							player.hp = player.hp + 15;
							std::cout << "You have " << player.hp << " health points!";
						}

					}
				}
				if (enemy1.hp > 0)
				{
					std::cout << "The enemy has " << enemy1.hp << " hp!";
				}
				else if (enemy1.hp <= 0)
				{
					std::cout << "The enemy is dead!\n";
				}
			}
			if (enemy1.hp <= 0)
			{
				std::cout << "You won! Nice job!";
			}
			else if (player.hp <= 0)
			{
				std::cout << "You died!Try again the next time!";
			}
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

