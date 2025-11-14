# Password-Generator
Password Generator (C, libsodium)
A simple and secure password generator written in C using libsodium for cryptographically secure random number generation.
The program prompts the user for a desired password length and produces a randomly generated password using letters, numbers, and special characters.

📦 Features
Uses libsodium for strong randomness (randombytes_uniform)
Customizable password length
Simple and lightweight C implementation

🔧 Requirements
GCC or Clang
libsodium installed on your system
To install libsodium on Linux:
```bash
sudo apt install libsodium-dev
```
MacOS(Homebrew)
```bash
brew install libsodium
```

📥 Cloning the Repository
```bash
git clone https://github.com/voidVoy7/Password-Generator.git
cd Password-Generator
```

🛠️ Building and Running
Compile the project with:
```bash
gcc main.c -lsodium -o passwordgen
```
Run it:
```bash
./passwordgen
```

📝 Example
```bash
Enter the password length: 16
Your password is: aS7#fT!9Gx@2Lp$b
```

⚠️ Notes
Make sure libsodium is properly installed; otherwise, the program will fail on initialization.
The charset includes lowercase, uppercase, digits, and special characters.
