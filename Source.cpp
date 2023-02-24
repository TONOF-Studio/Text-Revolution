#include <iostream>
#include <fstream>
#include <sstream> // for string streams
#include <string> // for string
#include <Windows.h> // for input

#include <stdio.h>
#include <tchar.h>

bool gameStart = 0;
bool gameStandby = 1;
bool gameEnd = 0;
int complete = 0; // Get the last variable
short int AuxChoise = 0; // Get the choise
std::string savetext;
bool aux;
bool aux2;

short int chosenplan;

// Charter Y - Etc Function
void clear_screen(char fill = ' ') {
	COORD tl = { 0,0 };
	CONSOLE_SCREEN_BUFFER_INFO s;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	GetConsoleScreenBufferInfo(console, &s);
	DWORD written, cells = s.dwSize.X * s.dwSize.Y;
	FillConsoleOutputCharacter(console, fill, cells, tl, &written);
	FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
	SetConsoleCursorPosition(console, tl);
}

void Asasination() {
	std::cout << "(Phone - Assasin) - We have the Right Hand Men cornered, shall we continue?\n(You) - Yes, do what is necessary!\n(Phone) - Aaaaa! aaaa! Ahahaha! Ah... Aaaaa!\n\n";
	std::cout << "(Phone - Right Hand Men) - You can't kill me! I'm GOD, DESTROYER OF WORLDS!\n";
	std::cin >> AuxChoise;
}

// Charter A Complete

void Game2() {

	std::cout << "(General) - Boss, now that we are decided about plans, we need to take the next course of action.\n\n";
	/*std::cout << " (1) > It will be best to recruit more militia.\n";*/
	std::cout << " (2) > Right Hand Man has been very suspicious lately. We need to get him asasinated. Recruit later!\n";
	std::cin >> AuxChoise;
	if (AuxChoise == 1) {
		Asasination();
	}
	else if (AuxChoise == 2) {
		Asasination();
	}
	else {
		std::cin >> AuxChoise;
	}
}
void Game3() {
	clear_screen();
	std::cout << "(The general left the room, and, the Leader is waiting for the arival for his right hand man. He will be waiting for a long time) \n ****************************  END   OF   DEMO  ****************************";
}
void GAME1() {

	// Local Variable
	bool makechoise = false;

	// Introduction
	while (aux == false) {
		switch (AuxChoise) {
		case 0:
			clear_screen();
			std::cout << "You are the leader of the biggest underground resistence army. How did you came to this position? Asasination, bribery, stealing and many other organised crime.\n Now, that you are powerfull enough, you can start thinking about a revolution. At start, you decides to call a meating with all the higherups in your ungerground organisation.\n\n(voices in the croud) - Silance!the leader is aproaching!\n(all people stop speaking and they all start looking at the door. They were right, the leader was coming)\n (General) - Dear Leader, glad you are here. We need to sort up the plans for the revolution. We can't decide on one. You need to decide.\n (Right Hand Men) - I have placed the plans folder on your desk in your office. If you hadn't the time to read them, we will recap them for you.\n\n (1) > You were to slow on giving me those papers. I want to tell me the plan that I presented last meating.\n (2) > I glanced over the details on my plan, but didn't had time for any other. General, please tell me your plan.\n (3) > My plan is briliant and the General's is inteligent. Right Hand Men, what do you have to say?\n (4) > Of curse I read them all.I have come here to finally decide the curse of action!";
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
				savetext += std::to_string(AuxChoise);
				std::ofstream gamePlayFile("savefile.txt");
				gamePlayFile << AuxChoise;
				gamePlayFile.close();
				chosenplan = 2;
				Game2();
			}
			else if (AuxChoise == 2){
				clear_screen();
				savetext += std::to_string(AuxChoise);
				std::ofstream gamePlayFile("savefile.txt");
				gamePlayFile << AuxChoise;
				gamePlayFile.close();
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

	std::cout << "Press SHIFT to continue\n";
	while (gameStandby == 1) {
		if (GetKeyState(VK_SHIFT) & 0x8000/*Check if high-order bit is set (1 << 15)*/)
		{
			GAME1();
		}
	}
	std::cin >> AuxChoise;

}