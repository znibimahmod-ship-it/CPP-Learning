#include<iostream>
#include<string>
#include<cstdlib>
#include <windows.h>
using namespace std;

enum enLevel { Easy = 1, Med = 2, Hard = 3, Mix = 4 };
enum enType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOP = 5 };

struct stInputs {
	int NumQuestions;
	enLevel Level;
	enType Type;
	enType newOPType;
	enLevel newGameLevel;
};
struct stQuestion {
	int UserAnswer = 0;
	int RightAnswers = 0;
	int Num1 = 0, Num2 = 0;
};

int ReadNumberFromTo(string message, int From, int To) {
	int N;
	cout << message;
	cin >> N;
	while (N < From || N > To) {
		cout << "(Number must be between " << From << " and " << To << " ): ";
		cin >> N;
	}
	return N;
}

int RandNumFromTO(int From, int To) {
	////srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) + !! put it in the main()
	int RanNum = rand() % (To - From + 1) + From;

	return RanNum;
}

stInputs ReadInputs() {
	stInputs Input;
	Input.NumQuestions = ReadNumberFromTo("How Many Questions do you want to answer ? ", 1, 10);
	Input.Level = (enLevel)ReadNumberFromTo("Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? ", 1, 4);
	Input.Type = (enType)ReadNumberFromTo("Enter Operations Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ", 1, 5);

	return Input;
}

int GetNumByLevel(enLevel inputLevel) {

	switch (inputLevel) {
	case Easy:
		return RandNumFromTO(1, 10);
	case Med:
		return RandNumFromTO(1, 100);
	case Hard:
		return RandNumFromTO(1, 1000);
	default:
		return 0;
	}
}

string OperationSymbol(enType Type) {
	switch (Type) {
	case Add:
		return "+";
	case Sub:
		return "-";
	case Mult:
		return "*";
	case MixOP:
		return "Mix";
	case Div:
		return "/";
	default:
		return "error wrong input !!";
	}
}

string WriteLevel(enLevel level) {
	switch (level) {
	case Easy:
		return "Easy";
	case Med:
		return "Meduim";
	case Hard:
		return "Hard";
	case Mix:
		return "Mix";
	default:
		return "error wrong input !!";
	}
}

int RightAnswer(int N1, int N2, enType Type) {
	switch (Type) {
	case Add:
		return N1 + N2;
	case Sub:
		return N1 - N2;
	case Mult:
		return N1 * N2;
	case Div:
		return N1 / N2;
	default:
		return 0;
	}
}

void CheckAnswer(int U_anwser, int R_answer, int& N_RightAnswer, int& N_WrongAnswer) {

	if (R_answer == U_anwser) {
		system("color 2F");
		cout << "Right Answer :-)" << endl;
		N_RightAnswer++;
	}
	else if (R_answer != U_anwser) {
		system("color 4F");
		MessageBeep(MB_ICONERROR);
		N_WrongAnswer++;
		cout << "Wrong Answer :-(" << endl;
		cout << "The right Answer is: " << R_answer << endl;
	}
}

string Result(int NumQuestion, int NumRightAnswers) {//5  "dhkdqhjwd"
	double avg = (double)NumQuestion / 2;

	int Average = ceil(avg);

	if (NumRightAnswers >= Average) {
		system("color 2F");
		return "Pass :-)";
	}
	else if (NumRightAnswers < Average) {
		system("color 4F");
		return"Fail :-(";
	}

}

void checkType(stInputs& Input) {
	if (Input.Type == MixOP) {//Mix
		Input.newOPType = (enType)RandNumFromTO(1, 4);
	}
	else {
		Input.newOPType = Input.Type;
	}
}

void checkLevel(stInputs Input, stQuestion& Question) {

	if (Input.Level == Mix) {
		Input.newGameLevel = (enLevel)RandNumFromTO(1, 3);
		Question.Num1 = GetNumByLevel(Input.newGameLevel);
		Question.Num2 = GetNumByLevel(Input.newGameLevel);
	}
	else {
		Input.newGameLevel = Input.Level;
		Question.Num1 = GetNumByLevel(Input.newGameLevel);
		Question.Num2 = GetNumByLevel(Input.newGameLevel);
	}
}

void ProgrameLoop(stInputs Input, int& NumberRightAnswer, int& NumberWrongAnswer) {

	stQuestion Question;

	for (int i = 1; i <= Input.NumQuestions; i++) {
		//Type
		checkType(Input);

		//Level
		checkLevel(Input, Question);

		cout << "Question [" << i << "/" << Input.NumQuestions << "]\n";
		cout << Question.Num1 << endl;
		cout << Question.Num2 << " " << OperationSymbol(Input.newOPType) << endl;
		cout << "---------" << endl;
		cin >> Question.UserAnswer;

		Question.RightAnswers = RightAnswer(Question.Num1, Question.Num2, Input.newOPType);

		CheckAnswer(Question.UserAnswer, Question.RightAnswers, NumberRightAnswer, NumberWrongAnswer);
	}

}

void ProgrameOutput(stInputs Input, int NumberRightAnswer, int NumberWrongAnswer) {

	cout << "---------------------------------------------\n\n";
	cout << "          Final Results is " << Result(Input.NumQuestions, NumberRightAnswer) << "          \n\n";
	cout << "---------------------------------------------\n\n";
	cout << "Number of Questions    : " << Input.NumQuestions << endl;
	cout << "Questions Level        : " << WriteLevel(Input.Level) << endl;
	cout << "OPType                 : " << OperationSymbol(Input.Type) << endl;
	cout << "Number of Right Answers: " << NumberRightAnswer << endl;
	cout << "Number of Wrong Answers: " << NumberWrongAnswer << endl << endl;
	cout << "---------------------------------------------\n\n";
}

void StartPrograme() {
	char PlayAgain = 'y';

	while (PlayAgain == 'y' || PlayAgain == 'Y') {

		// Reset
		system("cls");
		system("color 0F");

		// Inputs
		stInputs Input = ReadInputs();

		// LOOP
		int NumberRightAnswer = 0, NumberWrongAnswer = 0;
		ProgrameLoop(Input, NumberRightAnswer, NumberWrongAnswer);

		// OutPut
		ProgrameOutput(Input, NumberRightAnswer, NumberWrongAnswer);

		// Repeat
		cout << "Do you want to play again? Y/N? ";
		cin >> PlayAgain;
	}
}

int main() {
	srand((unsigned)time(NULL));

	StartPrograme();

	return 0;
}
