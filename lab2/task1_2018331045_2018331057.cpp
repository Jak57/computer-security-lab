//2018331045 - 2018331057
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string cipher = "ftqzqjfwuxxqdmbbiuxxoaynuzqoxagpymotuzqxqmdzuzsuafmzpnxaowotmuz";
	string original, message;
	char encrypt, decrypt;
	int pos_encrypt, pos_decrypt;
	int n, i, j, k;
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

		if (k == 12) {
			cout<< "Original message is:" << "\n";
			cout<< message << "\n";
		}
	}

	return 0;
}

