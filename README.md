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
