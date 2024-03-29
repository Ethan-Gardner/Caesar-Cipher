#include <iostream>

#include <string>

using namespace std;

string encrypt(const string & text, int s);
void encryptMenu();

int main() {
  cout << "Caesarean (Substitution) Cipher";
  encryptMenu();
}

void encryptMenu() {
  string text;
  int s;
  cout << "\nInput your message: ";
  getline(cin, text);

  cout << "Shift your message: ";
  cin >> s;

  while (!cin) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "\nInvalid input. Enter an integer.\nShift your message: ";
    cin >> s;

  }

  cout << "\nText : " << text <<
    "\nShift: " << s <<
    "\nCipher: " << encrypt(text, s) << endl;
}

string encrypt(const string & text, int s) {
  string result;
  const int textSize = text.length();

  for (int i = 0; i < textSize; i++) {
    char currentChar = text[i];

    if (isalpha(currentChar)) {
      char base = isupper(currentChar) ? 'A' : 'a';
      result += static_cast < char > ((currentChar - base + s) % 26 + base);
    } else {
      result += currentChar;
    }
  }

  return result;
}
