#include <iostream>
using namespace std;

string encrypt(string text, int s);
int encryptMenu();

int main() {
    cout << "Caesarean (Substitution) Cipher";
    encryptMenu();
}

int encryptMenu() {
    string text;
    int s;

    cout << "\n[ENCODE] Input your message: ";
    cin >> text;
    cout << "[ENCODE] Shift your message: ";
    cin >> s;

    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
    return 0;
}

string encrypt(string text, int s) {
    string result;

    for (int i = 0; i < text.length(); i++) {

        if (isupper(text[i]))
            result += char(int(text[i] + s - 'A') % 26 + 'A');

        else
            result += char(int(text[i] + s - 'a') % 26 + 'a');
    }

    return result;
}
