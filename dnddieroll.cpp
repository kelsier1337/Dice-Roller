#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int roll(int num_rolls, int num_sides);

int rolls[100];

int roll(int num_rolls, int num_sides) {
	int sum = 0;
	int one_roll;
	for(int i = 0; i < num_rolls; i++) {
		one_roll = (rand() % num_sides) + 1;
		sum += one_roll;
		rolls[i] = one_roll;
	}
	return sum;
}

int main() {

	srand(time(0));

	cout << "Welcome to the Die Roll Program for D&D!" << endl;
	cout << "Please enter the specs of the die as follows: " << endl;
	cout << "nds, where n is the number of rolls and s is the number of sides." << endl;
	cout << "You can exit the program by entering any other character besides d." << endl;

	int num_rolls, num_sides;
	char a;

	while(cin >> num_rolls >> a >> num_sides && a == 'd') {
		cout << roll(num_rolls, num_sides) << ": ";
		for(int i = 0; i < num_rolls; i++) {
			cout << rolls[i] << " ";
		}
		cout << endl;
	}

	return 0;
}












































// #include <iostream>

// using namespace std;

// int main()
// {

// string input;
// string line;

// cout<< "Enter the input line" << endl;

// while (getline(cin, line))
// {
//     if (line == "^D")
//         break;

//     input += line;
// }

//  cout<< "The input entered was: "<<endl;
//  cout<< input<< endl;

// }