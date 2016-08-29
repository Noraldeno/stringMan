/*
Name: Norald Alejo
Email: norald.alejo@gmail.com
version 1.00
*/

#ifndef STRINGMAN_H
#define STRINGMAN_H

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

class stringCheck{
	string word;
	public:
		//Declares word to manipulate
		void setWord(string text);

		//Finds the length of the word
		int findLength();

		//Reverses and returns the new word
		string reverseString();

		//Changes all characters to lower case
		void lowerCase();

		//Checks if word is a palindrome
		bool isPalindrome(string other);
};

#endif