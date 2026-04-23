#include <iostream>
#include <string>

using namespace std;

string ReadText() 
{
    string text;

    cout << "Enter your text : ";
    getline(cin, text);

    return text;
}

string EncryptText(string text) 
{
    unsigned short EncryptionKey = 2;

    for (char i = 0; i < text.length(); i++) 
    {
        text[i] += EncryptionKey;
    }

    return text;
}

string DecryptText(string text) 
{
    unsigned short EncryptionKey = 2;

    for (char i = 0; i < text.length(); i++)
    { 
        text[i] -= EncryptionKey;
    }

    return text;
}

int main() 
{
    string OriginalName = ReadText();
    
    string CipherText = EncryptText(OriginalName);
    cout << "After Encryption: " << CipherText << endl;
    
    string RecoveredText = DecryptText(CipherText);
    cout << "After Decryption: " << RecoveredText << endl;

    return 0;
}
