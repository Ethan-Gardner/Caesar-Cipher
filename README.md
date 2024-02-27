# Basic C++ Caesar Cipher
**Extremely easy to code, and even easier to crack.**
- Meant to be able to be sent through text, e-mail, files, and everything else.
- Can be encoded easily anywhere, anytime.
- Completely unsecure. **Can be cracked with a pencil and paper.**
## How it works:
By shifting the values of letters by a certain amoumt, a basic encryption is created.

**ABCDEFGHIJKLMNOPQRSTUVWXYZ → BCDEFGHIJKLMNOPQRSTUVWXYZA**
# Explaining the Code (Line by Line)
> All of the code before this should be easy to understand. If it isn't, learn more C++ code before trying to understand this.
```
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
```
The `s` integer is being passed from the user input in `encryptMenu` function.

The `text` string is also being passed from the same `encryptMenu` function.

## Explanation:
**Line 1:** `string encrypt(string text, int s) {`

This line defines a function named encrypt that takes two parameters: a string `text` to be encrypted and an integer `s` which represents the shift value for the encryption algorithm.

**Line 2:** `string result;`

This line declares an empty string variable named result. This variable will store the encrypted text as the algorithm processes the input text.

**Line 3:** `for (int i = 0; i < text.length(); i++) {`

This line starts a loop that iterates over each character in the input text string. It initializes an integer `i` to 0 and continues looping until `i` reaches the length of the `text` string.
