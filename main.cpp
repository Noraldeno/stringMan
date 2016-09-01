/*
Name: Norald Alejo
Email: norald.alejo@gmail.com
version 1.00
*/


#include "StringMan.h"

using namespace std;

int main(){
	//Intializes variables and class
	string name, word, reverse;
	stringCheck text1;

	//Asks user for name
	cout << "Hello! What is your name? ";
	getline(cin, name);

	//Asks user to enter a word
	cout << "Hi " << name << "! Please enter a word or a sentence: ";
	getline(cin, word);

	//Sets word to manipulate and puts all characters to lower case
	text1.setWord(word);
	text1.lowerCase();
	
	//Reverses the word
	reverse = text1.reverseString();
	
	//Prints out the reversed word
	cout << "The reverse of \"" << word << "\" is \"" << reverse << "\""<< endl;

	//Checks if the word is a palindrome
	if (text1.isPalindrome(reverse)){
		cout << "This string is a palindrome." << endl;
	}
	
	else {
		cout << "This string is not a palindrome." << endl;
	}
	
	cout << "See you later!!" << endl;
}
