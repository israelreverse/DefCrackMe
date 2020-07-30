#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleTitleA("CrackMe, noob!");
	string x, y, w;


	w = "help";
	y = "Random!";

	cout << "Hello! 'help' for get commands" << endl;
	cout << "Enter code: ";
	cin >> x;

	if (x == y) {
		MessageBoxA(0, "Cracked!", "Good!!!", 0);
	} 
	else if (x == w) {
		cout << "Wow!" << endl;
	} else
	{ 
		MessageBoxA(0, "I dont know this command", 0, 0);
	}

	cin.get();
	return 0;
}
