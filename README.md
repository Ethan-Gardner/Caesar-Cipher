# Basic C++ Caesar Cipher
**Extremely easy to code, and even easier to crack.**
- Meant to be able to be sent through text, e-mail, files, and everything else.
- Can be encoded easily anywhere, anytime.
- Completely unsecure. **Can be cracked with a pencil and paper.**
## How it works:
By shifting the values of letters by a certain amoumt, a basic encryption is created.

**ABCDEFGHIJKLMNOPQRSTUVWXYZ → BCDEFGHIJKLMNOPQRSTUVWXYZA**
# 	Explaining the Code
> So far all we have is this fun flow chart!
```mermaid
erDiagram
    TEXT {
        int text_id PK "Primary Key"
        string content "Text Content"
        int length "Text Length"
    }

    CHARACTER {
        int char_id PK "Primary Key"
        int text_id FK "Foreign Key to TEXT"
        int position "Character Position in Text"
        char original_char "Original Character"
        boolean is_alpha "Is Alphabetic"
        boolean is_upper "Is Uppercase"
    }

    ENCRYPTION {
        int encryption_id PK "Primary Key"
        int text_id FK "Foreign Key to TEXT"
        int shift "Shift Value for Encryption"
        string result_text "Encrypted Text Result"
    }

    SHIFTCALCULATION {
        int calc_id PK "Primary Key"
        int char_id FK "Foreign Key to CHARACTER"
        int encryption_id FK "Foreign Key to ENCRYPTION"
        char shifted_char "Resulting Shifted Character"
    }

    TEXT ||--o{ CHARACTER : "has"
    TEXT ||--|| ENCRYPTION : "is encrypted into"
    CHARACTER ||--o{ SHIFTCALCULATION : "is calculated in"

```
