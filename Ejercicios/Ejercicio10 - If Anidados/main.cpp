#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a = 1000;
	int b = 5000;
	int c = 7000;
	
	if (a > b) {
		if (a > b) {
			cout << "A es mayor";
		} else {
			cout << "C es mayor";
		}
	} else {
		if (b > c) {
			cout << "B es mayor";
		} else {
			cout << "C es mayor";
    	}
	}
	
	return 0;
}
