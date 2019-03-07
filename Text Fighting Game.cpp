
#include "pch.h"
#include <windows.h> //for sleep
#include <iostream>
#include <string>

//enemy class

class Enemy
{
	public:
		std::string element;
		int hp = 50;
		int atk = 17;
		int critAtk = 20;	//crit when element advantage
};
//boss class

class Boss
{
	public:
		int hp = 200;
		int atk = 25;
		int critAtk = 30; //crit when element advantage
};

//player class

class Player
{
	public:
		std::string element;
		int hp = 150;
		int atk = 15;
		int critAtk = 25; //crit when element advantage
};

int main()
{

	//declaring player

	Player player;
	player.element;
	player.critAtk;

	// element decision variables

	std::string fire = "fire";
	std::string Fire = "Fire";
	std::string water = "water";
	std::string Water = "Water";
	std::string ice = "ice";
	std::string Ice = "Ice";

	//other variables

	char decision;
	std::string fightDecision;
	int uselessVariable;

	//declaring all three enemies + boss

	Enemy enemy1;
	enemy1.hp = 120;
	enemy1.atk;
	enemy1.critAtk;

	Enemy enemy2;
	enemy2.hp = 120;
	enemy2.atk;
	enemy2.critAtk;

	Enemy enemy3;
	enemy3.hp = 120;
	enemy3.critAtk;

	Boss boss;
	boss.hp;
	boss.atk;
	boss.critAtk;

	//introduction

	std::cout << "Welcome to this text based fighting game.\nThe goal of the game is to kill all the enemies including the Boss";
	std::cout << "\nThere are three different elements in this game: Fire, Water and Ice.\nThere will be enemies of each of those elements.";
	std::cout << "\nAt the start you will have to choose which element you want your hero to have mastered.";
	std::cout << "Fire does critical damage against ice, ice does critical damage against water, water against fire and so on.\n\n\n";
	std::cout << "\nNow please choose the element which you want your hero to master. Choose between Water, Fire and Ice: ";
	std::cin >> player.element;

	//checking if input was valid

	if (player.element == fire | player.element == Fire | player.element == water | player.element == Water | player.element == ice | player.element == Ice) {
		std::cout << "\n\n'Welcome Master of the art of " << player.element << ". ";
		std::cout << "Our country got invaded by dangerous monsters and you are the only one able to kill them! We need your help!'";
		std::cout << "\n'Will you help us?'('y' or 'n')";
		std::cin >> decision;

		//checking if input was valid again

		if (decision == 'y') {
			std::cout << "'Thank you so much! Go to the high volcano please. There will be your first enemy!'\n"; Sleep(1000);

			//kinda cool every letter appearing after (ms)

			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
			/*you*/		std::cout << "Y"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "u"; Sleep(50); std::cout << " "; Sleep(50);
			/*already*/	std::cout << "a"; Sleep(50); std::cout << "l"; Sleep(50); std::cout << "r"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << "a"; Sleep(50); std::cout << "d"; Sleep(50); std::cout << "y"; Sleep(50); std::cout << " "; Sleep(50);
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
				std::cout << "\n\nDo you want to attack or heal?\n";
				std::cin >> fightDecision;

				//checking what element for advantage (crit hits)

				if (player.element == water | player.element == Water)
				{
					//checking what player wants to do

					if (fightDecision == "atk")
					{
						enemy1.hp = enemy1.hp - player.critAtk;
						std::cout << "\nNice work! You did " << player.critAtk << " damage!";
					}
					else if (fightDecision == "heal")
					{
						//if full hp he can't heal

						if (player.hp == 150)
						{
							std::cout << "\n\nYou already have full hp!\n";
						}
						else
						{
							//if not then heal

							player.hp = player.hp + 15;
							std::cout << "\nYou now have " << player.hp << " health points!";
						}

					}
				}
				else
				{
					//same, but w/out crits 

					if (fightDecision == "atk")
					{
						enemy1.hp = enemy1.hp - player.atk;

					}
					else if (fightDecision == "heal")
					{
						if (player.hp == 150)
						{
							std::cout << "\nYou already have full hp!\n";
						}
						else
						{
							player.hp = player.hp + 15;
							std::cout << "\nYou now have " << player.hp << " health points!";
						}

					}
				}

				//if player attacked, then it says how much damage it did

				if (enemy1.hp > 0 && fightDecision != "heal")
				{
					std::cout << "\nThe enemy now has " << enemy1.hp << " hp!";
				}
				else if (enemy1.hp <= 0)
				{
					std::cout << "\nThe enemy is dead!\n";
				}

				Sleep(200);

				//enemy attacking
				
				if (player.hp > 0 && enemy1.hp > 0)//for not having it displayed if fight ended already
				{
					std::cout << "\n\nThe enemy now attacks!";
				}
				//checking for enemy having element adv and fight not already having ended

				if (player.element == ice | player.element == Ice && player.hp > 0 && enemy1.hp > 0)
				{
					std::cout << "\nThe enemy did critical damage!";
					player.hp = player.hp - enemy1.critAtk;
				}

				//dont ask me why i did this and didnt use else

				else if(player.element != ice | player.element != Ice && player.hp > 0 && enemy1.hp > 0)
				{
					std::cout << "\nThe enemy did some damage!";
					player.hp = player.hp - enemy1.atk;
				}

				if (player.hp > 0 && enemy1.hp > 0)//checking if fights not over yet
				{
					std::cout << "\nYou now have " << player.hp << " health points.";
				}

				//win or loss messages
				if (enemy1.hp <= 0)
				{
					std::cout << "\n\nYou won! Nice job!\n";				
				}
				else if (player.hp <= 0)
				{
					std::cout << "\n\nYou died!Try again the next time!\n";
					std::cin.get();
					return 0;
				}

			}
			std::cout << "You go away from the volcano damaged, but alive. You need to find a place to heal!\n";
			std::cout << "You have heard about the mages which live a few miles away from the volcano, which are said to be dangerous, but have powerful healing abilities.\n";
			std::cout << "The other possibility is to go into the forest and go search some herbs yourself. \nWhat do you do?('1' or '2')";
			player.hp = 150;//making player full hp again for next battle
			std::cin >> uselessVariable; //doesnt matter what user takes, will be the same story anyways
			if (uselessVariable == 1)
			{
				std::cout << "\nGood luck on your way to them. But hurry up before you starve or die of thirst!";
				Sleep(500);
				std::cout << "\n... like that you start your way to the mages...";
			}
			else if (uselessVariable == 2)
			{
				std::cout << "\nLet's hope that you will find some herbs. But hurry up before you starve or die of thirst!";
				Sleep(500);
				std::cout << "\n... like that you start your way to the forest...";
			}

			Sleep(500);
			std::cout << "\n\nAfter some hours you realize how hungry you are and how tired you are...";
			Sleep(200);
			std::cout << "\nThe more tired you get, the more you realize how comfortable the ground looks and the hungrier you get, the more ou ralize how tasty those berries look...";
			Sleep(2000);
			std::cout << "\n\n'Holy hell you slept long. I saw you laying there on the ground, while I was searching for herbs. You look like you need some'";
			Sleep(500);
			std::cout << "\n'Not too talkative huh? Well just take these herbs and maybe something to drink.'";
			std::cout << "\nWhile you are talking the water you realize how there are some really unnatural movements there ... and something is rising from the water!";
			Sleep(500);
			std::cout << "\n\nFuck, it's a dangerous looking creature out of water... what the hell!";

			//next fight, basically the same as last while loop(fight) so no comments

			while (enemy2.hp > 0 && player.hp > 0)
			{
				std::cout << "\n\nDo you want to attack or heal?\n";
				std::cin >> fightDecision;
				if (player.element == ice | player.element == Ice)
				{
					if (fightDecision == "atk")
					{
						enemy2.hp = enemy2.hp - player.critAtk;
						std::cout << "\nNice work! You did " << player.critAtk << " damage!";
					}
					else if (fightDecision == "heal")
					{
						if (player.hp == 150)
						{
							std::cout << "\n\nYou already have full hp!\n";
						}
						else
						{
							player.hp = player.hp + 15;
							std::cout << "\nYou now have " << player.hp << " health points!";
						}

					}
				}
				else
				{
					if (fightDecision == "atk")
					{
						enemy2.hp = enemy2.hp - player.atk;

					}
					else if (fightDecision == "heal")
					{
						if (player.hp == 150)
						{
							std::cout << "\nYou already have full hp!\n";
						}
						else
						{
							player.hp = player.hp + 15;
							std::cout << "\nYou now have " << player.hp << " health points!";
						}

					}
				}
				if (enemy2.hp > 0 && fightDecision != "heal")
				{
					std::cout << "\nThe enemy now has " << enemy2.hp << " hp!";
				}
				else if (enemy2.hp <= 0)
				{
					std::cout << "\nThe enemy is dead!\n";
				}

				Sleep(200);
				if (player.hp > 0 && enemy2.hp > 0)
				{
					std::cout << "\n\nThe enemy now attacks!";
				}
				if (player.element == fire | player.element == Fire && player.hp > 0 && enemy2.hp > 0)
				{
					std::cout << "\nThe enemy did critical damage!";
					player.hp = player.hp - enemy2.critAtk;
				}
				else if (player.element != fire | player.element != Fire && player.hp > 0 && enemy2.hp > 0)
				{
					std::cout << "\nThe enemy did some damage!";
					player.hp = player.hp - enemy2.atk;
				}

				if (player.hp > 0 && enemy2.hp > 0)
				{
					std::cout << "\nYou now have " << player.hp << " health points.";
				}

				if (enemy2.hp <= 0)
				{
					std::cout << "\n\nYou won! Nice job!\n";
				}
				else if (player.hp <= 0)
				{
					std::cout << "\n\nYou died!Try again the next time!\n";
					std::cin.get();
					return 0;
				}

			}
		}


		//IGNORE THIS 
		//ITS BASICALLY A TODO LIST
		/*-------------------------------------------------------------------------
		Dritten Kampf(gegen Eis) eibauen, vielleicht geht er zu einem vereisten see?
		story bissl weiter führen
		--------------------------------------------------------------------------*/
		//ITS BASICALLY A TODO LIST
		//IGNORE THIS 


		//checking decision

		else if (decision == 'n')
		{
			std::cout << "'Get fucking lost then you stupid cunt!'";
			std::cin.get();
		}


	}	//checking if input is valid
	else if (player.element != fire | player.element != Fire | player.element != water | player.element != Water | player.element != ice | player.element != Ice)
		{
		std::cout << "Your input was invalid. Please restart the program and try again.";
		std::cin.get();
		}
	std::cin.get();
}
