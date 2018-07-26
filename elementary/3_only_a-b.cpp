//This program will only greet users with the names Alice and Bob
//Eduardo R. Abreu

#include <iostream>
#include <string>

using namespace std;

int main() {
	string names_to_greet[2] = {"Alice", "Bob"};
	string user;

	cout << "May I have your name?\n";
	cin >> user;

	if (user.compare(names_to_greet[0]) != 0 && user.compare(names_to_greet[1]) != 0) return 0;

	cout << "Welcome " + user + "!\n";

	return 0;
}
