# Basic C++ Caesar Cipher
**Extremely easy to code, and even easier to crack.**
- Meant to be able to be sent through text, e-mail, files, and everything else.
- Can be encoded easily anywhere, anytime.
- Completely unsecure. **Can be cracked with a pencil and paper.**
## How it works:
By shifting the values of letters by a certain amoumt, a basic encryption is created.

**ABCDEFGHIJKLMNOPQRSTUVWXYZ → BCDEFGHIJKLMNOPQRSTUVWXYZA**
# Explaining the Code (Line by Line)
> [!IMPORTANT]
> If you can't understand the rest of the code in the ***cipher.cpp*** file, you shouldn't be messing with this (yet).
```
string encrypt(string text, int s) {
  string result;
  for (int i = 0; i < text.length(); i++) {
    if (isupper(text[i]))
      result += char(int(text[i] + s - 'A') % 26 + 'A');
    else result += char(int(text[i] + s - 'a') % 26 + 'a');
  }
  return result;
}
```

> The `s` integer is being passed from the user input in `encryptMenu` function.
> 
> The `text` string is also being passed from the same `encryptMenu` function.

## Explanation:
**Line 1:** `string encrypt(string text, int s) {`

This line defines a function named `encrypt` that takes two parameters: a string `text` to be encrypted and an integer `s` which represents the shift value for the encryption algorithm.

**Line 2:** `string result;`

This line declares an empty string variable named `result`. This variable will store the encrypted text as the algorithm processes the input text.

**Line 3:** `for (int i = 0; i < text.length(); i++) {`

This line starts a loop that iterates over each character in the input text string. It initializes an integer `i` to 0 and continues looping until `i` reaches the length of the `text` string.

**Line 4:** `if (isupper(text[i]))`

This condition checks if the current character at index `i` in the `text` string is an uppercase letter.

**Line 5:** `result += char(int(text[i] + s - 'A') % 26 + 'A');`

If the character is uppercase, this line performs the encryption process for uppercase letters. It shifts the character by the value of `s`, wraps around if needed (using modulo[^1] 26), and converts it back to a character. The result is then appended to the `result` string.

**Line 6:** `else result += char(int(text[i] + s - 'a') % 26 + 'a');`

If the character is not uppercase (i.e., it is lowercase), this line performs the encryption process for lowercase letters. Similar to the uppercase case, it shifts the character by `s`, wraps around if needed, and converts it back to a character. The result is then appended to the `result` string.

**Line 7:** `
`
*Blank space for formatting purposes.*

**Line 8:** `return result;`

After processing all characters in the input text, the function returns the final encrypted string stored in the `result` variable.

[^1]: The modulo operator (also known as the modulus operator), denoted by %, is an arithmetic operator. The modulo division operator produces the remainder of an integer division which is also called the modulus of the operation.


```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```
