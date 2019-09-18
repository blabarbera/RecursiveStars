// RecursiveStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void pattern(int n);

int main() {
	// Write your main here
	int n = 0;

	cout << "Enter the number of lines: ";
	cin >> n;
	cout << endl;

	pattern(n); //call function to print pattern

	return 0;
}

void pattern(int n)
{
	if (n < 0)
	{
		cout << endl << "Please enter a positive integer." << endl;
	}
	else
	{
		if (n == 0)
			return;
		else
		{
			for (int i = 1; i <= n; i++) //For loop to print descending pattern
			{
				cout << "*";
			}
			cout << endl; //new line

			pattern(n - 1); //Call pattern recursively while decrementing n to count down

			for (int i = 1; i <= n; i++) //For loop to print ascending pattern
			{
				cout << "*";
			}
			cout << endl; //new line
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
