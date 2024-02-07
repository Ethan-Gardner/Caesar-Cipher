#include <iostream>

#include <string>

#include <fstream>

using namespace std;

int welcomeScreen();
int encodeMessage();
int decodeMessage();

int main() {
  cout << "Secure Message Suite";
  welcomeScreen();
}

int welcomeScreen() {
  int EncodeOrDecode;
  cout << "\nWould you like to ENCODE (1) or DECODE (2) a secret message?\nInput: ";
  cin >> EncodeOrDecode;
  if (EncodeOrDecode == 1) {
    encodeMessage();
  }
  if (EncodeOrDecode == 2) {
    decodeMessage();
  } else {
    cout << "Invalid value. Please try again.";
    welcomeScreen();
  }
  return EncodeOrDecode;
}

int encodeMessage() {
  string textToFile;
  string userEI, userEKey;

  ofstream EncodedFile("encoded_file.txt");
  cout << "Enter text into file: ";
  cin >> textToFile;
  EncodedFile << textToFile;
  EncodedFile.close();
  string myText;
  ifstream ConfirmEncode("encoded_file.txt");
  while (getline(ConfirmEncode, myText)) {
    cout << myText;
  }
  ConfirmEncode.close();
  return 0;
}

int decodeMessage() {
  string userDI, userDKey;
  cout << "\nWould you like to decode manually (1) or with a text file (2)?\nInput: ";

  cin >> userDI;

  return 0;
}
