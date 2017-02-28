//Eli Tshcech
//Jack Harris
//Philip Braatz


// Lab Exercise 3 - Arrays
// Instructions:
/*
	[ ] Write a program that performs the following:
		[ ] Prompt the user to input five numbers.
		[ ] Store the input into either an array or a vector.
		[ ] Once the user is finished entering numbers:
			[ ] Display the five numbers in reverse order.
			[ ] Display the highest number entered.
			[ ] Display the lowest number entered.
		[ ] Extra Credit: Allow the user to enter as many numbers as they want(at least 5).
	[ ] Compress(zip) your program and submit it to Blackboard.
*/

#include <iostream>
#include <conio.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	vector<float> list;
	int input = 0;
	char stayHere = '\0';

	do {
		cout << "Please enter at least a number: ";
		cin >> input;

		list.push_back(input);

	} while (list.size() != 5);

	
	//DISPLAYING THE INFORMATION WE WERE GIVEN
	for (size_t i = 0; i < list.size(); i++)
	{
		cout << "A number is: " << list.at(i) << endl;
	}
	cout << endl;

	reverse(list.begin(), list.end());
	
	for (size_t i = 0; i < list.size(); i++)
	{
		cout << "A number is: " << list.at(i) << endl;
	}
	cout << endl;

	double highest = list.at(0);
	for (size_t i = 0; i < list.size(); i++)
	{
		if (list.at(i) >= highest)
			highest = list.at(i);
	}
	cout << "The highest number is: " << highest;
	cout << endl;

	double lowest = list.at(0);
	for (size_t i = 0; i < list.size(); i++)
	{
		if (list.at(i) <= lowest)
			lowest = list.at(i);
	}
	cout << "The lowest number is: " << lowest;
	cout << endl;

	_getch();
	return 0;
}
