#include <iostream>
#include <fstream>
#include <sstream> // for string streams
#include <string> // for string




bool gameStart = 0;
bool gameStandby = 1;
bool gameEnd = 0;
int complete = 0; // Get the last variable
short int AuxChoise = 0; // Get the choise
std::string savetext;
bool aux;
bool aux2;

short int chosenplan;


bool democracy;
bool supremacy;
short int strike_organisation = 0;
short int randomNumber;

// Charter Y - Etc Function
void clear_screen(char fill = ' ') {
	
}

// Charter V

void Fail() {
	if (gameEnd == 1) {
		return;
	}
}

// Charter A Complete

void Asasination() {
	std::cout << "(Phone - Assasin) - We have the Right Hand Men cornered, shall we continue?\n(You) - Yes, do what is necessary!\n(Phone) - Aaaaa! aaaa! Ahahaha! Ah... Aaaaa!\n\n";
	std::cout << "(Phone - Right Hand Men) - You can't kill me! I'm GOD, DESTROYER OF WORLDS!\n";
	gameEnd = 1;
	Fail();
}

void Game2() {

	std::cout << "(General) - Boss, now that we are decided about plans, we need to take the next course of action.\n\n";
	std::cout << " (1) > Right Hand Man has been very suspicious lately. We need to get him asasinated. Recruit later!\n";
	std::cin >> AuxChoise;
	if (AuxChoise == 1) {
		Asasination();
	}
	else {
		std::cin >> AuxChoise;
	}
}
void Game3() {
	clear_screen();
	std::cout << "(The general left the room, and, the Leader is waiting for the arival for his right hand man. He will be waiting for a long time) \n";
}
void GAME1() {
	// Local Variable
	bool makechoise = false;
	AuxChoise = 0;
	// Introduction
	while (aux == false) {
		switch (AuxChoise) {
		case 0:
			std::cout << "temp, chose betwen 1,2,3,4";
			clear_screen();
			std::cin >> AuxChoise;
			break;
		case 1:
			clear_screen();
			std::cout << " (Markus, leader of liberal party in exile) - We heared your plan the other day and we wrote it up. It is a good idea to talk with the prime-minister. It is sympathetic with us. He may help us in the revolution!\n\n";
			std::cout << " (2) > Now that I know everything about my plan, I wish to talk with the General about his plan.\n";
			std::cout << " (3) > My plan is briliant. Right Hand Men, can you remind me how your plan was?\n";
			std::cout << " (4) > Now that I know the details of my plan, I will make the final decision!\n";
			std::cin >> AuxChoise;
			break;
		case 2:
			clear_screen();
			std::cout << " (General) - Your plan is glorious, but I don't think the prime minister will cooperate, due to his friendship with the emperor. We shall need to organise our militia and take power by popular force!\n\n";
			std::cout << " (3) > My plan is briliant and the General's is inteligent. Right Hand Men, what do you have to say?\n";
			std::cout << " (4) > Of curse, we need a backup plan. I don't care about the Right Hand Man's plan. I will make my final decision!\n";
			std::cin >> AuxChoise;
			break;
		case 3:
			clear_screen();
			std::cout << " (Right Hand Man) - We don't have plan for diplomacy, we need force, fast force. Decisive force. We need to imidiatly destroy the empire!\n\n";
			std::cout << " (4) > Of curse, like you say.... . They are all ok plans. I will now make my final decision!\n";
			std::cin >> AuxChoise;
			break;
		case 4:
			clear_screen();
			aux = true;
			AuxChoise = 0;
			break;
		default:
			std::cin >> AuxChoise;
			break;
		}
		
	}

	// Chose a plan
	while (aux == true) {
		AuxChoise = 0;
		std::cout << " (You) - I have decided the final plan. The best. The great. I shall be\n\n";
		std::cout << " (1) > MY PLAN!\n";
		std::cout << " (2) > GENERAL'S PLAN!\n";
		std::cout << " (3) > RIGHT HAND MAN'S PLAN!\n";
		std::cin >> AuxChoise;
		if (AuxChoise == 1 || AuxChoise == 2) {
			clear_screen();
			std::cout << " (General) - We need to take a decision. What should we do. I mean, neither me or you had a perfect plan. We need to check the details.\n(Soldier) - Dear Leader! General! Bad news! Word that the curent prime minister is... death!\n(General) - Well, this is inconvinient. Boss, how we shall procede?\n\n";
			std::cout << " (1) > This is a problem, but are able to overcome this. General, please continue with your plan!\n";
			std::cout << " (2) > We were dumb in our racionament. We need to talk with the Right Hand Men, he was in the right!\n";
			aux = false;
			std::cin >> AuxChoise;
			if (AuxChoise == 1) {
				clear_screen();
				chosenplan = 2;
				Game2();
			}
			else if (AuxChoise == 2){
				clear_screen();
				chosenplan = 3;
				Game3();
			}
			else {
				std::cin >> AuxChoise;
			}
			
		}
		else if (AuxChoise == 3) {
			savetext += std::to_string(AuxChoise);
			std::ofstream gamePlayFile("savefile.txt");
			gamePlayFile << AuxChoise;
			gamePlayFile.close();
			chosenplan = 3;
			aux = false;
			Game3();
		}
		else {
			std::cin >> AuxChoise;
		}
	}
}


int main() {
	/* ********** BEFORE-GAME ********** */
	srand(time(0));

	std::cout << "Type 1 to continue\n";
	std::cin >> AuxChoise;
	if (AuxChoise = 1)
	{
		GAME1();
	}
	
	std::cin >> AuxChoise;
}
