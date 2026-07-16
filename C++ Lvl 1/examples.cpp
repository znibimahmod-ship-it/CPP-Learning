//1
char MYchar;
int MYint;

cout << "enter your charcter " <<endl;
cin >> MYchar;

cout << "enter your entier: " <<endl;
cin >> MYint;

cout << "my charcter is " << MYchar << " my entier is  " << MYint <<endl;

//2
bool result;

result = !(5 > 6 || 7 == 7) && !(1 || 0);

cout << result<<endl;
//3
	bool result;

	//1
	result = !(5 > 6 || 7 == 7) && !(1 || 0);

	//2
	result =((5>6 && 7<=8) || (8>1 && 4<=3))&& true ;

	//3
	result = ((5 > 6 && !(7 <= 8) && (8 > 1 || 4 <= 3)) || true);

	cout << result<<endl;
//4
