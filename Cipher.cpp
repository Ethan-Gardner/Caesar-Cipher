#include <iostream>

#include <string>

using namespace std;

string encrypt(const string & text, int s); // Use const reference for efficiency
void encryptMenu();

int main() {
  cout << "Caesarean (Substitution) Cipher";
  encryptMenu();
}

void encryptMenu() { //Using void instead of string, because no "return" value is needed
  string text;
  int s;

  cout << "\n[ENCODE] Input your message: ";
  cin >> text;
  cout << "[ENCODE] Shift your message: ";
  cin >> s;

  cout << "Text : " << text <<
    "\nShift: " << s <<
    "\nCipher: " << encrypt(text, s) << endl; // Print newline for clarity
}

string encrypt(const string & text, int s) {
  string result;
  const int textSize = text.length(); // Cache the length to avoid recalculating

  for (int i = 0; i < textSize; i++) {
    char currentChar = text[i];

    if (isalpha(currentChar)) {
      char base = isupper(currentChar) ? 'A' : 'a';
      result += static_cast < char > ((currentChar - base + s) % 26 + base);
    } else {
      result += currentChar; // Preserve non-alphabetic characters
    }
  }

  return result;
}
