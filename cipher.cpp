#include <iostream>
using namespace std;

int encryption()
{
char message[100], ch;
int i, key;
cout << "Enter a message to encrypt: ";
cin.getline(message, 100);
cout << "\n Enter key: ";
cin >> key;
for(i = 0; message[i] != '\0'; ++i){
ch = message[i];
if(ch >= 'a' && ch <= 'z'){
ch = ch + key;
if(ch > 'z'){
ch = ch - 'z' + 'a' - 1;
}
message[i] = ch;
}
else if(ch >= 'A' && ch <= 'Z'){
ch = ch + key;
if(ch > 'Z'){
ch = ch - 'Z' + 'A' - 1;
}
message[i] = ch;
}
}
cout << "Encrypted message: " << message;
return 0;
}

int decryption()
{
    char message[100], ch;
    int i, key;
    cout << "Enter a message to decrypt: ";
    cin.getline(message, 100);
    cout << "Enter key: ";
    cin >> key;
    for(i = 0; message[i] != '\0'; ++i)
    {
        ch = message[i];
        if(ch >= 'a' && ch <= 'z')
        {
        ch = ch - key;
            if(ch < 'a')
            {
            ch = ch + 'z' - 'a' + 1;
            }
        message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch - key;
            if(ch > 'a')
            {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }
    cout << "Decrypted message: " << message;
    return 0;
}

int main()
{
    cout<<"Choose \n1.Encrypt a password \n2.Decrypt a password"<<endl;
    int choice;
    cin>>choice;
    if(choice ==1)
    encryption();
    else if(choice ==2)
    decryption();
    else
    cout<<"Enter correct choice";
    return 0;
}
