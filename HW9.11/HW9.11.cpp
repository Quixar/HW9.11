#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int length = 50;
	int spaces = 0;
	int count_words;
	char temp = ' ';
    char* str = new char[length] {};

    cout << "Enter your sentence: ";
    gets_s(str, length);

	for (int i = 0; i < strlen(str); i++) 
	{
		if (str[i] == temp)
		{
			spaces++;
		}
	}
	count_words = spaces + 1;
	int count = strlen(str) - spaces;
	int avg = count / count_words;
	cout << "average length of a word in a sentence = " << avg << "\n";
	delete[] str;
}