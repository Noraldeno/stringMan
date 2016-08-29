/*
Name: Norald Alejo
Email: Norald.alejo@gmail.com
Version: 1.00
*/


#include "StringMan.h"

using namespace std;

//Declares the word and displays the word entered
void stringCheck::setWord(string text){
	word = text;
	cout << "The word you entered is " << word << endl;
}

//Finds and returns the length of the word
int stringCheck::findLength(){
	return word.length();
}

//Puts all characters in the word in lower case
void stringCheck::lowerCase(){
	for (int i = 0; i < word.length(); i++){
		word[i] = tolower(word[i]);
	}
}

//Reverse and returns the reverse of the string
string stringCheck::reverseString(){
	string temp;
	for (int i = word.length() - 1; i >= 0; i--){
		temp += word[i];

	}

	return temp;
}

//Checks if the word is a palindrome
bool stringCheck::isPalindrome(string other){
	if (other == word){
		return true;
	}
	else{
		return false;
	}
}