#pragma once
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

namespace Number {

	int ReadPositiveNumber(string message) {
		int N;
		cout << message;
		cin >> N;
		while (N <= 0) {
			cout << "(number must be positive): ";
			cin >> N;
		}
		return N;
	}

	int RandNumFromTO(int From, int To) {
		////srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) + !! put it in the main()
		int RanNum = rand() % (To - From + 1) + From;

		return RanNum;
	}

	bool CheckPrimeNumber(int Num) {
		if (Num <= 1) {
			return false;
		}
		for (int i = 2; i < Num; i++) {
			if (Num % i == 0) {
				return false;
			}
		}
		return true;
	}

	bool isPerfectNumber(int N) {
		int sum = 0;

		for (int i = 1; i < N; i++) {
			if (N % i == 0) {
				sum += i;
			}
		}
		if (N == sum) {
			return true;
		}
		else {
			return false;
		}
	}

}

