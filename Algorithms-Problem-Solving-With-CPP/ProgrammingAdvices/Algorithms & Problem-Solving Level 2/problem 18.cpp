#include<iostream>
#include<string>
using namespace std;

string ReadText()
{
	string Text;

	cout << "Please enter a 3-Letter Password (all capital)?\n";
	getline(cin, Text);

	return Text;
}

string EncryptText(string Text,short EncryptionKey)
{
	for (int x = 0; x <= Text.length(); x++)
	{
		Text[x] = char((int)Text[x] + EncryptionKey);
	}
	return Text;
}

string DecryptText(string Text, short EncryptionKey)
{
	for (int i = 0; i <= Text.length(); i++)
	{
		Text[i] = char((int)Text[i] - EncryptionKey);
	}
	return Text;
}

int main()
{
	const short EncryptionKey = 8;

	string TextAfterEncryption, TextAfterDecryption;
	string Text = ReadText();
	TextAfterEncryption = EncryptText(Text, EncryptionKey);
	TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKey);

	cout << "After Encryption: " << TextAfterEncryption << endl;
	cout << "After Decryption: " << TextAfterDecryption << endl;


	return 0;
}