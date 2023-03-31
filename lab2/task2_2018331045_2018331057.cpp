//2018331045 - 2018331057
#include<bits/stdc++.h>
using namespace std;

string message;

struct char_freq {
	char ch;
	int cnt;
	double per;
};

bool cmp(char_freq a, char_freq b) {
	return (a.per > b.per);
}

void char_substitution(char prev, char cur) {
    int n, i;
    n = message.size();
    for (i = 0; i < n; i++) {
        if (message[i] == prev)
            message[i] = cur;
    }
    return;
}

int main()
{
	int n, i, j, idx;
	int frequency[27];
	char_freq char_frequency[27];

	double x, y, z, per, freq;
	string cipher;
	char ch;
        cipher = "tqmrajq ya gowopxyoap, fxog vcasqffac ycqmxtpql, tka kxg fqxyqg kqcfqms op x topiqg xcjrkxoc op scapy as ykq socq. jl pxjq of vcasqffac ycqmxtpql. lae jxl pay kxwq fqqp jq zqsacq. o sopg ykxy gqfrqpgopi yaa asyqp opya ykq kefymq xpg zefymq as ykq jxop frkaam rma gf jl oppqc qlq. pazagl fxog xplykopi ya ykof qbycxacgopxcl vcapaeprqjqpy. vcasqffac ycqmxtpql gqmorxyqml cqxccxpiqg kqc fkxtm xpg rapyopeqg, fa lae kxwq rkafqp ya fyegl gowopxyoap, ykq jafy gossoremy as xmm jxiorxm xcyf. o jefy";

	n = cipher.size();

	cout<< cipher << "\n";
	cout<< n << "\n";

	memset(frequency, 0, sizeof(frequency));
	int cnt = 0;
	for (i = 0; i < n; i++) {
		if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			idx = cipher[i] - 'a';
			frequency[idx] += 1;
			cnt++;
		}
	}

	cout<< cnt << "\n\n";
	y = (double)cnt;

	for (i = 0; i < 26; i++) {
		ch = 'a' + i;
		x = (double)frequency[i];
		per = (x / y) * 100.0;
		char_frequency[i].ch = ch;
		char_frequency[i].cnt = frequency[i];
		char_frequency[i].per = per;
	}

	cout<< "--------- " << "\n";
	sort(char_frequency, char_frequency+26, cmp);
	for (i = 0; i < 26; i++) {

		ch = char_frequency[i].ch;
		freq = char_frequency[i].cnt;
		per = char_frequency[i].per;

		cout<< ch << "    " << freq << "    " << per << "\n";
	}

	// Initial mapping based on frequency distribution
	cout<< "\n" << cipher << "\n\n";
	message = cipher;

        // Start from here
        char_substitution('x', 'A');
        char_substitution('o', 'I');
        char_substitution('q', 'E');
        char_substitution('p', 'N');

        char_substitution('g', 'D');
        char_substitution('j', 'M');
        char_substitution('y', 'T');
        char_substitution('a', 'O');

        char_substitution('f', 'S');
        char_substitution('k', 'H');
        char_substitution('l', 'Y');
        char_substitution('e', 'U');

        char_substitution('w', 'V');
        char_substitution('z', 'B');
        char_substitution('r', 'C');
        char_substitution('s', 'F');

        char_substitution('c', 'R');
        char_substitution('m', 'L');
        char_substitution('t', 'W');
        char_substitution('v', 'P');

        char_substitution('i', 'G');
        char_substitution('b', 'X');


        cout<< message << "\n";

	return 0;
}
