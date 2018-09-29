// Executable file entry point for main function holding


#include <iostream>
#include <string>
#include "recursiveC.cpp"

using namespace std;

int main()
{
	cout << "   Recursive Algorithms\n" << " _______________________\n" << endl;

	char select = ' ';
	const int maxLength = 10;
	
	char word[maxLength];
	int items[maxLength];

	recursive<char> rec;

	cout << "1) Permutations of a word\n"
		<< "2) Check if a Palindrome\n"
		<< "3) The kth smallest value\n"
		<< "4) Exit ";


	do
	{
		cout << "\n\n Choice: ";
		cin >> select;
		string wordS;

		switch (select)
		{
		case '1':
			cout << "\n Enter a sequence of characters:";
			cin >> wordS;

			while (wordS.length() > maxLength)
			{ 
				wordS = "";
				cout << "\n The length of the string exceeds the array limit of 10. \n Please reenter a sequence of characters:";
				cin >> wordS;
			}

			for (int i = 0; i < wordS.length(); i++)
				word[i] = wordS[i];

				rec.permutation(word, 0, wordS.length());
			break;

		case '2':
			cout << "\n Enter a sequence of characters:";
			cin >> wordS;
			while (wordS.length() > maxLength)
			{
				wordS = "";
				cout << "\n The length of the string exceeds the array limit of 10. \nplease re enter a sequence of characters:";
				cin >> wordS;
			}
			for (int i = 0; i < wordS.length(); i++)
				word[i] = wordS[i];

			rec.palindrome(word, 0, wordS.length());
			break;

		case '3':
			int k;
			cout << "\n Randomly generated numbers: \n   =>";
			
			for (int i = 0; i < 10; i++)
			{
				items[i] = 1 + rand() % 100; // generage number from 1 to 100
				cout <<items[i] << " ";
			}
			
			cout << "\n Type in the value of k: ";
			cin >> k;
			rec.kth(items, 0, 10, k);
			break;

		case '4':
			cout << "\nGood bye";
			break;

		default:
			cout << " Invalid input, Try again\n";
			break;
		}
		cin.get();
	} while (select != '4');

	cin.get();
	return 0;
}

