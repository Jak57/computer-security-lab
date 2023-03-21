#include<bits/stdc++.h>
using namespace std;

int main()
{
	string original = "abcdefghijklmnopqrstuvwxyz";
	string cipher, message;
	char encrypt, decrypt;
	int pos_encrypt, pos_decrypt;
	int n, i, j, k;

	cin>> cipher;
	n = cipher.size();

	cout<< "Cipher text:\n" << cipher << "\n\n";

	for (k = 1; k <= 25; k++) {

		message = "";
		for (i = 0; i < n; i++) {
			pos_encrypt = cipher[i] - 'a';
			pos_decrypt = ((pos_encrypt - k) + 26) % 26;
			decrypt = 'a' + pos_decrypt;
			message += decrypt;
		}

		if (k == 9) {
			cout<< "Original message is:" << "\n";
			cout<< message << "\n";
		}
	}

	return 0;
}

/**
k = 9

input
-----

krclxrwrbxwnxocqnlxxunbcrwencrxwbrwanlnwccrvnb


output:
-------

Cipher text:
krclxrwrbxwnxocqnlxxunbcrwencrxwbrwanlnwccrvnb

Original message is:
bitcoinisoneofthecoolestinvetionsinrecenttimes

*/
