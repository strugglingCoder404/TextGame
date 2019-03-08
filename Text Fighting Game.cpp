
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
	enemy2.hp = 120;	//why is it so ga´´hard to balance anything right
	enemy2.atk;	       // its either way to easyor way too hard
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

			std::string hello = "You alread see the volcano on the horizon";
			int x = 0;
			while (hello[x] != '\0')
			{
				std::cout << hello[x];
				Sleep(50);
				x++;
			};

			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
			
			/*===================================
			Funny story: I didnt realize that you
			could the the commented out bottom
			just with a loop. So dumb me decided
			to do it and after the project make
			a converter which would basically do
			what the loop does and give you the
			ouput to copy in the form as below
			===================================*/

			/*
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
			std::cout << "Y"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "u"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "a"; Sleep(50); std::cout << "l"; Sleep(50); std::cout << "r"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << "a"; Sleep(50); std::cout << "d"; Sleep(50); std::cout << "y"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "s"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "t"; Sleep(50); std::cout << "h"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "v"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "l"; Sleep(50); std::cout << "c"; Sleep(50); std::cout << "a"; Sleep(50); std::cout << "n"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "o"; Sleep(50); std::cout << "n"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "t"; Sleep(50); std::cout << "h"; Sleep(50); std::cout << "e"; Sleep(50); std::cout << " "; Sleep(50);
			std::cout << "h"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "r"; Sleep(50); std::cout << "i"; Sleep(50); std::cout << "z"; Sleep(50); std::cout << "o"; Sleep(50); std::cout << "n"; Sleep(50);
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << ".\n"; Sleep(500);
			*/


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
			std::cout << "\nWhile you are taking the water you realize how there are some really unnatural movements there ... and something is rising from the water!";
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

			//Watch out! some pretty boring story building ahead

			Sleep(1000);
			std::cout << "\n'Oh my god! Thank you so much for saving my life!!";
			Sleep(500);
			std::cout << "\nGod damnit. By now I just want to kill the rest of those annoying fucking monsters!";
			std::cout << "\n'I heard that over at the castle on the ice ought to be a huge monster with its henchmen. You just gott go north-east. It's impossible to miss. Good luck'";
			Sleep(600);
			std::cout << "\nThank you. I will free those lands once and for all.";

			std::cout << "\nSo our lone hero wandered nort-east, and after some time realized why the guy said, that you could not miss it.";
			Sleep(1000);
			std::cout << "\nIt was the hugest building he has ever seen...";
			std::cout << "\nAnd as soon as he got there, he  knocked on the huge wooden door";
			std::cout << "\n'Either you fight or you go away you clown?'(1 or 2)";
			std::cin >> uselessVariable; //ayyyy our favourite useless variable is back at it again
										//it stays here, that the user doesn't actually have a choice ;)													
			Sleep(500);
			if (uselessVariable == 1) {
				std::cout << "Of course I will fight!";
			}
			else if (uselessVariable == 2)
			{
				std::cout << "I think I am actually gonna go. Be right back...";
				std::cout << "\n'Oh no, you are gonna stay here and fight, and I am gonna make you do so!'";
			}
			else {
				std::cout << "Your input was invalid. Please restart the program and try again.";// how poor this fucker has tp be. 
				std::cin.get();																	// this far into the program and having to restart
				return 0;
			}
			player.hp = 150;
			//I feel like I know this while loop from somewhere

			while (enemy3.hp > 0 && player.hp > 0)
			{
				std::cout << "\n\nDo you want to attack or heal?\n";
				std::cin >> fightDecision;
				if (player.element == fire | player.element == Fire)
				{
					if (fightDecision == "atk")
					{//if anybody know how to balance shit like thatproperly, send me a dm on twitter
						enemy3.hp = enemy3.hp - player.critAtk;//@CoderDespair
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
						enemy3.hp = enemy3.hp - player.atk;

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
				if (enemy3.hp > 0 && fightDecision != "heal")
				{
					std::cout << "\nThe enemy now has " << enemy3.hp << " hp!";
				}
				else if (enemy3.hp <= 0)
				{
					std::cout << "\nThe enemy is dead!\n";
				}

				Sleep(200);
				if (player.hp > 0 && enemy3.hp > 0)
				{
					std::cout << "\n\nThe enemy now attacks!";
				}
				if (player.element == water | player.element == Water && player.hp > 0 && enemy3.hp > 0) // changing variables in a 90 lines of code loop
				{																						// is literally the most boring thing ever
					std::cout << "\nThe enemy did critical damage!";
					player.hp = player.hp - enemy3.critAtk;
				}
				else if (player.element != water | player.element != Water && player.hp > 0 && enemy3.hp > 0)
				{
					std::cout << "\nThe enemy did some damage!";
					player.hp = player.hp - enemy3.atk;
				}

				if (player.hp > 0 && enemy3.hp > 0)
				{
					std::cout << "\nYou now have " << player.hp << " health points.";
				}

				if (enemy3.hp <= 0)
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
			//gonna make his atk better. boss would be too hard the other way
			player.atk = 35; // hope thats not too much
			player.hp = 150; // almost forgot

			std::cout << "Wait what is that in the corpse of the monster?\n";
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
			std::cout << "\nIt looks like a sword... and it is glowing!";
			std::cout << "\nThere is also a way bigger healing potion than the one I had before!";
			std::cout << "\nI think that I am ready to fight the big monster now! He seems to be the king of all the monsters!\n";
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
			std::cout << "\nYOU CALLED ME? DIE YOU DIRTY LITTLE FOOL!";

			//honestly, I am pretty sure I know that shit from somewhere

			while (boss.hp > 0 && player.hp > 0)
			{
				std::cout << "\n\nDo you want to attack or heal?\n";
				std::cin >> fightDecision;

				//dont need any of this, cause boss doesnt have element adv so no crits

/*				if (player.element == fire | player.element == Fire)
				{
					if (fightDecision == "atk")
					{
						enemy3.hp = enemy3.hp - player.critAtk;
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
				{ */
					if (fightDecision == "atk")
					{
						boss.hp = boss.hp - player.atk;

					}
					else if (fightDecision == "heal")
					{
						if (player.hp == 150)
						{
							std::cout << "\nYou already have full hp!\n";
						}
						else
						{
							player.hp = player.hp + 35;
							std::cout << "\nYou now have " << player.hp << " health points!";
						}

					}
				
				if (boss.hp > 0 && fightDecision != "heal")
				{
					std::cout << "\nThe enemy now has " << boss.hp << " hp!";
				}
				else if (boss.hp <= 0)
				{
					std::cout << "\nThe enemy is dead!\n";
				}

				Sleep(200);
				if (player.hp > 0 && boss.hp > 0)
				{
					std::cout << "\n\nThe enemy now attacks!";
				}
				if (player.element == water | player.element == Water && player.hp > 0 && boss.hp > 0) // changing variables in a 90 lines of code loop
				{																					  // is literally the most boring thing ever
					std::cout << "\nThe enemy did critical damage!";
					player.hp = player.hp - boss.critAtk;
				}
				else if (player.element != water | player.element != Water && player.hp > 0 && boss.hp > 0)
				{
					std::cout << "\nThe enemy did some damage!";
					player.hp = player.hp - boss.atk;
				}

				if (player.hp > 0 && boss.hp > 0)
				{
					std::cout << "\nYou now have " << player.hp << " health points.";
				}

				if (boss.hp <= 0)
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

			// idk how the fuck to end the story so heres just that:

			std::cout << "\nI won... I killed it... I think I actually saved this country and the ones around it... what the fuck";
			std::cout << "\nI will go back to the village and check if everyone there is doing alright!";
			std::cout << "\n."; Sleep(500); std::cout << "\n."; Sleep(500); std::cout << "\n."; Sleep(500);
			std::cout << "\nTo be continued";
			std::cout << "."; Sleep(500); std::cout << "."; Sleep(500); std::cout << "."; Sleep(500);
			std::cin.get();
			return 0;
		}
		
		//checking decision

		else if (decision == 'n')
		{
			std::cout << "'Get fucking lost then you stupid cunt!'";
			std::cin.get();
			return 0;
		}


	}	//checking if input is valid
	else if (player.element != fire | player.element != Fire | player.element != water | player.element != Water | player.element != ice | player.element != Ice)
		{
		std::cout << "Your input was invalid. Please restart the program and try again.";
		std::cin.get();
		return 0;
		}
	std::cin.get();
}


/*========================================================

After around a week of coding and just below 600 lines of
code, I have finished my first game...

I think, that this will be a long journey of better and
better games and programs. Thanks to TheCherno, who has
the IMO best tutorials on C++ on youtube out there.
Definitely check him out. If you more into WebDev, check
out Traversy Media. He is a great guy. I promised myself 
to donate him the first few dollars which I will ever
earn, because I am so thankful of him, bringing me to
programming. <3

If you are looking at this, and want to give me some
constructive criticism on this code or just ask me
anything, about myself or whatever then please Dm me on
Twitter @CoderDespair.

I don't know how far I will come in programming, but see
this as a message, that everybody starts small and nobody's
programs are immediately perfect!

Thank you! <3
=======================================================*/