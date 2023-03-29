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
	cipher = "IT CNJ FGM ETKMNOF CITMITK MIT JWF JIGFT GK YGK MINM SNMMTK CITMITK OM CNJ ZNB GK FOUIM IT CNJ NJINSTZ MG NJQ NDD MIT HDNFTM JTTSTZ MG DOXT RTFTNMI STMND MIT STND GY CIOEI IT INZ PWJM HNKMNQTF INZ RTTF DNRTDTZ DWFEITGF RWM MITKT CTKT SNFB HDNFTMJ CIOEI DOXTZ N JMNFZNKZ MOSTJENDT MINM MGGQ FG NEEGWFM GY MIT HTKINHJ OFEGFXTFOTFM NDMTKFNMOGF GY ZNB NFZ FOUIM. MIT KNMT GY HDNFTMNKB MWKFOFUJ ZOYYTKTZ, NFZ IT ZOZ FGM QFGC MINM GY MKNFMGK";

	n = cipher.size();

	cout<< cipher << "\n";
	cout<< n << "\n";

	memset(frequency, 0, sizeof(frequency));
	int cnt = 0;
	for (i = 0; i < n; i++) {
		if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			idx = cipher[i] - 'A';
			frequency[idx] += 1;
			cnt++;
		}
	}

	cout<< cnt << "\n\n";
	y = (double)cnt;

	for (i = 0; i < 26; i++) {
		ch = 'A' + i;
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

	char_substitution('T', 'e');
	char_substitution('M', 't');
	char_substitution('N', 'a');
	char_substitution('F', 'o');
	char_substitution('I', 'n');

    char_substitution('G', 'h');
	char_substitution('K', 'i');
	char_substitution('Z', 's');
	char_substitution('O', 'r');

	char_substitution('J', 'd');
	char_substitution('D', 'l');
	char_substitution('C', 'u');
	char_substitution('E', 'w');

	char_substitution('Y', 'm');
	char_substitution('S', 'g');
	char_substitution('W', 'c');
	char_substitution('H', 'f');
	char_substitution('R', 'y');

    char_substitution('B', 'b');
	char_substitution('Q', 'p');
	char_substitution('U', 'k');
	char_substitution('X', 'v');

	char_substitution('P', 'j');

	cout<< message << "\n";

	return 0;
}
