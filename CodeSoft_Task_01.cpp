#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, Guess_01, Try_01 = 0;
	srand(time(0)); 
	num = rand() % 100 + 1; 
	cout << "Guess My Number Game"<<endl;
    cout<<endl;

	do
	{
		cout << "Enter a Guess_01 between 1 and 100 : ";
		cin >> Guess_01;
	     Try_01++;

		if (Guess_01 > num)
			cout << "Too high!"<<endl;
		else if (Guess_01 < num)
			cout << "Too low!"<<endl;
		else
			cout << "\nCorrect! You got it in " <<  Try_01 << " Guesses!\n";
	} while (Guess_01 != num);

	return 0;
}