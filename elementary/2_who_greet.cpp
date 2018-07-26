//This program asks the user for their name and greets them
//Eduardo R. Abreu

#include <iostream>

using namespace std;

int main() {
	string name;

	cout << "May I have your name please?\n";
	cin >> name;
	cout << "Welcome " + name + "!\n";

	return 0;
}
