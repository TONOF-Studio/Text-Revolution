#include <iostream>
#include <string>
#include <cstdlib>

// class game variable
std::string story           [100]    = {
                                        ("\nYou are the leader of the biggest underground resistance army. How did you come to this position? Assassination, bribery, stealing and many other organized crimes. Now that you are powerful enough, you start thinking about a revolution. So, you start planning and it all culminates now, with the meeting of all the higher-ups in your underground organization.\n\n(voices in the crowd): Silence! The leader is approaching!\n(All people stop speaking and they all start looking at the door. They were right, the leader was coming.)\n\nGENERAL: Dear Leader, I am glad you are here. We need to sort out the plans for the revolution. We have been talking here for hours and we can't get to decide on one. You need to decide.\nRIGHT-HAND-MAN: I have placed the plans folder on the desk in your office. If you didn't have the time to read them, we will recap them for you.\n\nYOU: Actually, no. I didn't had time to read any of them. I had to stay all night awake to..., you know..., read, and write... stuff.\n\nGENERAL: Then no problem\n\n\n(1) CONTINUE\n"),
                                        ("\nMARKUS: After our yesterday meeting, me and my fellow patriots marked a plan that involves a lot of bravery.\n\nYOU: Sounds good Markus. What were your people's thoughts?\n\nMARKUS: Well..., we think that it is better to play it safe and talk with the Prime Minister. Maybe he will understand our point...\n\nRIGHT-HAND-MAN: THAT'S ABSURD! Leader, I contest that plan. He only wants to distroy us from the inside. I told you that we shouldn't...\n\nGENERAL: That's enought Carlos. We should calm down. But really Sir Leader, it is stupid to think that they will accept our 15% wage raise and the abolishment of the monarchic system.\n\nYOU: I guess they have a point. Anyone else with a better plan?\n\n(1) CONTINUE\n"),
                                        ("\nGENERAL: Well sir leader sir, I have also made some plans with the other veterans and non-partisan leaders. We clearly decided that we couldn't say on the side much longer. We need to act sometimes, or we will be discovered. I believe that we could organise some sort of general strike, like that years ago. The difference is that we won't have a horrible death.\n\nYOU: Good idea. Solid idea. Good general. As always. Anyone else?\n\n(1) CONTINUE\n"),
                                        ("\nRIGHT-HAND-MAN: Well it's obvious that we are in a room full of stupid people. WE CAN'T WAIT ANY LONGER. I have INFORMATION that they are onto us. Leader, we could rely on my soldiers and we could do any job possible.\n\nMARKUS: Sir Leader, stop this lunatic. He is trying to sabotaje our unity. He can't be trusted!\n\nYOU: Stop you too. I unterstand the point of our comarade Carlos, but we should not be to reckless.\n\nGENERAL: Does anyone have something to speek before the leader will chose a glorious plan?\n\n(Pause)\n\nYOU: Well then I will chose.\n\n(1) The first plan\n(2) The second plan\n(3) The third plan\n"),
                                        ("\nYOU: I chose the....\nGUY: SIR! THE PM WAS ASASINATED!\n\nGENERAL: Horible!\n\nRIGHT-HAND-MAN: Crule!\n\nMARKUS: Damn! My plan is now imposible to achive! NOOO! My GLORY! My PoWeRrrr!!\n\nYOU: Oh, then I must change my choice. It will be...\n\n(1) The second plan\n(2) The third plan\n")
                                        };
     int    choices         [100]    = {1,1,1,3,1};
     int    destination     [100][4] = {1,2,3,(4,100),5};


// class main variable
     int    i                            ;
     int    decision                     ;

void game();
void clearscreen(){
    #ifdef WINDOWS
    std::system("cls");
    #else
    std::system ("clear");
    #endif
}

int main(){

    std::cout << "Write 1 to continue";
    std::cin >> decision;
    if(decision == 1) game();
}

void game(){
    clearscreen();
    while(i >= 0 and i <= 4){
        std::cout << story[i];
        std::cin  >> decision;
        switch (choices[i]){
            case 1: // breaks after 2 cycles
                if(decision == 1) i=destination[i][0];
                break;
            case 2:
                if(decision == 1) i=destination[i][0];
                if(decision == 2) i=destination[i][1];
                break;
            case 3:
                if(decision == 1) i=destination[i][0];
                if(decision == 2) i=destination[i][1];
                if(decision == 3) i=destination[i][2];
                break;
        }
        clearscreen();
    }
}

