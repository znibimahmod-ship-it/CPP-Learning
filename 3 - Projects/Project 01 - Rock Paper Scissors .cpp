
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

enum enChoice { Stone = 1, Paper = 2, Scissors = 3 };
enum enWinner { Player1 = 1, draw = 2, Computer = 3 };

struct RoundInfo {
    //Choice
    enChoice PlayerChoice;
    enChoice ComputerChoice;
    //winner
    enWinner Winner;
    string WinnerName;
};

struct GameResult {
    int Win = 0;
    int draw = 0;
    int lose = 0;
};

int ReadNumberOfRounds() {
    int N, From = 1, To = 10;

    do {
        cout << "How many Round 1 to 10 ? \n\n";
        cin >> N;
    } while (From > N || N > To);

    return N;
}

enChoice GetComputerChoice() {
    int From = 1, To = 3;

    int RanNum = rand() % (To - From + 1) + From;

    return (enChoice)RanNum;
}

enChoice ReadPlayerChoice() {
    int Choice;

    do {
        cout << "Your Choice : [1]:Stone, [2]:Paper, [3]:Scissors ? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);

    return (enChoice)Choice;
}

enWinner WhoWinTheRound(RoundInfo stRoundinfo) {

    if ((stRoundinfo.PlayerChoice == enChoice::Stone && stRoundinfo.ComputerChoice == enChoice::Scissors) ||
        (stRoundinfo.PlayerChoice == enChoice::Paper && stRoundinfo.ComputerChoice == enChoice::Stone) ||
        (stRoundinfo.PlayerChoice == enChoice::Scissors && stRoundinfo.ComputerChoice == enChoice::Paper)) {

#ifdef _WIN32
        system("color 2F");
#else
        cout << "\033[42m";
#endif

        return enWinner::Player1;
    }
    else if (stRoundinfo.PlayerChoice == stRoundinfo.ComputerChoice) {

#ifdef _WIN32
        system("color 6F");
#else
        cout << "\033[43m";
#endif

        return enWinner::draw;
    }
    else {

#ifdef _WIN32
        system("color 4F");
#else
        cout << "\033[41m";
#endif

        return enWinner::Computer;
    }
}

string ChoiceName(enChoice Choice)
{
    string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
    return arrGameChoices[Choice - 1];
}

string WinnerName(enWinner Winner) {
    string ArrWinnerName[3] = { "Player1", "draw", "Computer" };

    return ArrWinnerName[Winner - 1];
}

void Calcul_Game_Points(RoundInfo stRoundinfo, GameResult& stGameResult) {

    if (stRoundinfo.Winner == enWinner::Player1) {
        stGameResult.Win++;
    }
    else if (stRoundinfo.Winner == enWinner::Computer) {

#ifdef _WIN32
        Beep(1000, 500);
#else
        cout << "\a";
#endif

        stGameResult.lose++;
    }
    else {
        stGameResult.draw++;
    }
}

void showGameRound(int Round, GameResult& stGameResult) {
    RoundInfo stRoundinfo;

    for (int i = 1; i <= Round; i++) {
        cout << "Round [" << i << "] begins: \n\n";

        //fill Roundinfo structer
        stRoundinfo.PlayerChoice = ReadPlayerChoice();
        stRoundinfo.ComputerChoice = GetComputerChoice();
        stRoundinfo.Winner = WhoWinTheRound(stRoundinfo);
        stRoundinfo.WinnerName = WinnerName(stRoundinfo.Winner);
        Calcul_Game_Points(stRoundinfo, stGameResult);

        cout << "------------" << " Round " << "[" << i << "] " << "------------\n\n";
        cout << "Player1 Choice: " << ChoiceName(stRoundinfo.PlayerChoice) << endl;
        cout << "Computer Choice: " << ChoiceName(stRoundinfo.ComputerChoice) << endl;
        cout << "Round Winner   : [" << stRoundinfo.WinnerName << "]\n\n";
        cout << "----------------------------------\n\n";

        cout << "\033[0m";
    }
}

string FinalWiner(int win, int lose) {
    if (win > lose) {
        return "Player1";
    }
    else if (lose > win) {
        return "Computer";
    }
    else {
        return "No winner";
    }
}

string Tabs(int Number_of_Tabs) {
    string t = "";
    for (int i = 1; i <= Number_of_Tabs; i++) {
        t += "\t";
    }
    return t;
}

void showGame_Result(int Round, GameResult stGameResult) {

    cout << Tabs(2) << "------------------------------------------\n\n";
    cout << Tabs(3) << "+++ G a m e O v e r +++\n\n";
    cout << Tabs(2) << "------------------------------------------\n\n";
    cout << Tabs(2) << "--------------[ Game Result ]-------------\n\n";
    cout << Tabs(2) << "Game Rounds        : " << Round << endl;
    cout << Tabs(2) << "Player1 won times  : " << stGameResult.Win << endl;
    cout << Tabs(2) << "Computer won times : " << stGameResult.lose << endl;
    cout << Tabs(2) << "Draw times         : " << stGameResult.draw << endl;
    cout << Tabs(2) << "Final Winer        : " << FinalWiner(stGameResult.Win, stGameResult.lose) << endl << endl;
    cout << Tabs(2) << "------------------------------------------\n\n";
}

void Play_again(char& Starts) {
    cout << Tabs(2) << "Do you want to play again? Y/N? ";
    cin >> Starts;
    cout << "\n\n";
}

void Game_start() {

    char Starts = 'Y';
    do {

#ifdef _WIN32
        system("cls");
        system("color 0F");
#else
        system("clear");
        cout << "\033[0m";
#endif

        int Round = ReadNumberOfRounds();
        GameResult stGameResult;

        showGameRound(Round, stGameResult);
        showGame_Result(Round, stGameResult);
        Play_again(Starts);

    } while (Starts == 'Y' || Starts == 'y');
}

int main() {
    srand((unsigned)time(NULL));

    Game_start();

    return 0;
}
