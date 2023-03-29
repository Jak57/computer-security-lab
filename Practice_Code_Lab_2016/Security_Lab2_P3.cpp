#include<bits/stdc++.h>
using namespace std;

int main()
{
	string plain_text, key;
	int key_length;
	int n, m, i, j, k, arr[10000];

	int prev, curr;
	char ch;
	plain_text = "ethereumisanopensourcepublicblockchainbaseddistributedcomputingplatformandoperatingsystemfeaturingsmartcontractfunctionality";
	key = "pinkfloyd";

	n = plain_text.size();
	m = key.size();

	cout<< n << " " << m << "\n";

	cout<< n % m << "\n";

	while ((n%m) != 0) {
		plain_text += " ";
		n++;
	}

	cout<< n << " " << m << "\n";
	cout<< plain_text << "\n";
	cout<< n / m << "\n";

	for (i = 0; i < m; i++) {
		arr[i] = key[i] - 'a';
	}

	for (i = 0; i < m; i++) {
		cout<< arr[i] << " ";
	}
	cout<< "\n";

	int iteration = n / m;
	for (i = 0; i < n; i += m) {
		for (j = 0; j < m; j++) {

			k = arr[j];
			ch = plain_text[i+j];
			if (ch >= 'a' && ch <= 'z') {

				prev = ch - 'a';
				curr = (prev + k) % 26;
				plain_text[i+j] = 'a' + curr;

				printf("-- %c %d %d %d %c\n", ch, k, prev, curr, plain_text[i+j]);
			} else {
                printf("---%d %c --\n", k, ch);
			}
		}

		cout<< "-----------\n\n";
	}

	cout<< plain_text << "\n";

	return 0;
}

/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string text, key, cipher;
	int n, m, i, j, k, arr[1000], cnt, prev, new_pos;
	char ch;
	text = "ethereum is an open-source, public, blockchain-based distributed computing platform and operating system featuring smart contract functionality";
	key = "pinkfloyd";

	n = text.size();
	m = key.size();

	// convert key to numbers
	for (i = 0; i < m; i++) {
        arr[i] = key[i] - 'a';
        cout<< arr[i] << " ";
	}
	cout<< "\n";

	// create cipher
	cipher = "";
	cnt = 0;
	for (i = 0; i < n; i++) {
        //cout<< text[i];
        ch = text[i];
        if (text[i] >= 'A' && text[i] <= 'Z')
            text[i] = 'a' + (text[i] - 'A');

        if (text[i] >= 'a' && text[i] <= 'z') {
            k = arr[cnt];
            prev = ch - 'a';
            new_pos = (prev + k) % 26;
            cipher += ('a' + new_pos);

            cnt = (cnt + 1) % m;
        } else {
            cipher += text[i];
        }
	}

	cout<< text << "\n";

	cout<< "\n" << cipher << "\n";


	return 0;
}
/*
