#include <iostream>
using namespace std;

int welcomeScreen();	
int encodeMessage();
int decodeMessage();

int testing;
string fileChoice;

int main() {
	cout << "ImageLock Suite V1";
	welcomeScreen();
}

int welcomeScreen() { //Allows the user to choose if they would like to encode or decode a message. Add nothing else here.
	int EncodeOrDecode;
	cout << "\nWould you like to ENCODE (1) or DECODE (2) text into an image file?\nInput: ";
	cin >> EncodeOrDecode;
	if (EncodeOrDecode == 1) {
		encodeMessage();
	}
	if (EncodeOrDecode == 2) {
		decodeMessage();
	}
	else
	{
		cout << "Invalid value. Please try again.";
		welcomeScreen();
	}
	return EncodeOrDecode;
}

int encodeMessage() {
	cout << "What (image) file would you like to encode a message into?\nInput: ";
	cin >> fileChoice;
	return 0;
}

int decodeMessage() {
	cout << "What (image) file would you like to decode?\nInput: ";
	cin >> fileChoice;
	return 0;
}
