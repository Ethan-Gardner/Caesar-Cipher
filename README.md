# Basic C++ Caesar Cipher
**History and Origin:**

The Caesar Cipher, used by Julius Caesar around 58 BC, is a substitution cipher that shifts letters in a message to make it unreadable if intercepted. To decrypt, the receiver reverses the shift. Arab mathematician Al-Kindi broke the Caesar Cipher using frequency analysis, which exploits patterns in letter frequencies[^1].
## How it works:
The Caesar cipher is based on transposition and involves shifting each letter of the plaintext message by a certain number of letters, historically three, as shown in Figure 5.1. The ciphertext can be decrypted by applying the same number of shifts in the opposite direction[^2].

**ABCDEFGHIJKLMNOPQRSTUVWXYZ → BCDEFGHIJKLMNOPQRSTUVWXYZA**
# 	Explaining the Code (Only `shift` Function)
### **Line 1:** `string shift(const string& text, int s)`
This line defines a function named `shift` that takes two parameters: a constant reference to a string named `text` and an integer `s`. The function returns a string.


### `string result;`

This line declares an empty string variable named `result`. This variable will store the shifted version of the input text.

### `const int textSize = text.length();`

This line declares a constant integer variable named `textSize` and assigns it the length of the input `text`. The length of a string is the number of characters it contains.

### `for (int i = 0; i < textSize; i++) {`

This line starts a for loop that iterates over each character in the text string. The loop variable i is initialized to 0, and the loop continues as long as i is less than textSize. After each iteration, i is incremented by 1.
char currentChar = text[i];

This line assigns the character at index i in the text string to the variable currentChar. This allows us to access and process each character in the string one by one.
if (isalpha(currentChar)) {

This line checks if the currentChar is an alphabetic character (a letter). The isalpha function returns true if the character is a letter and false otherwise.
char base = isupper(currentChar) ? 'A' : 'a';

This line assigns the character 'A' to the variable base if currentChar is an uppercase letter, and assigns the character 'a' if currentChar is a lowercase letter. This determines the base character for shifting.
result += static_cast <char> ((currentChar - base + s) % 26 + base);

This line performs the shifting operation on the currentChar and appends the shifted character to the result string. The shifting is done by subtracting the base character, adding the shift value s, taking the modulo 26 to wrap around the alphabet, and then adding the base character back.
else {

This line is the start of the else block, which executes if the currentChar is not an alphabetic character.
result += currentChar;

This line appends the currentChar to the result string without any modification since it is not an alphabetic character.
}

This line marks the end of the if-else block.
}

This line marks the end of the for loop.
return result;

This line returns the final shifted string result from the shift function.



[^1]: https://www.khanacademy.org/computing/computer-science/cryptography/crypt/v/caesar-cipher
[^2]: https://www.sciencedirect.com/topics/computer-science/caesar-cipher
