// random word picker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>// from tech delitght
using namespace std;

int main()
{
	ifstream inFile; //Reads File
	inFile.open("wordlist.txt");
	vector <string> wordlist;
	string thisWord;
	int randomIndex;
	string keyword;
	srand(time(0));
	while (inFile >> thisWord) {
		wordlist.push_back(thisWord);
	}
	for (int i = 0; i < 1; i++) { //Outputs random word for game
		randomIndex = rand() % wordlist.size();
		keyword = wordlist[randomIndex];
	}


	int attempts = 0; //Start of game
	int wlen = 0;
	wlen = keyword.size();//count letters in word
	cout <<"There are " << wlen<<" letters in your word" << endl;
	string guess;
	cout << keyword << endl;


	while( attempts != 5 && guess != keyword){
		cout << "Enter your guess: " << endl;
		cin >> guess;
		if (keyword.find(guess) != string::npos)//From thispointer.com
		{
			cout << "Yes there is a: " << guess << endl;
		}
		else
		{
			cout << "wrong" << endl;
			attempts += 1;
		}
	}
}

