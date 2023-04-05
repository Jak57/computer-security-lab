#include<bits/stdc++.h>
using namespace std;

int main()
{
	string plain_text, key, cipher = "";
	int key_length;
	int n, m, i, j, k, arr[10000];

	int prev, curr;
	char ch;
	//plain_text = "qul zonuw arzbda ikbnrl qul gbjz, ufgaxo gv llzl, mena … ml pyxxgl t rapobezx cevf xozhihax kbaafan zlq pl kba gbpllpnyr. xys mena bp alxark tor aab yhpp bm gxgbkb. … [gotq vz,] meryx znu axil ubru t yvn uxan vorhmfbu pfgohrg aab ulem bm zlq, wklipwbq aab yhpp bm gxgbkb cyx-anax qul nkvcxofl. hre jhkpliq bm mfzl ubtpgp jpme gox zeltqvvg ls aab hubsrylb. goxormhor py qul exjz hc ahmrel vorhmbq aab hubsrylb, goxpr sttf tnpg otsr lqffaxa cyble ah qvtx; quhm ff aab yhpp bm gxgbkb jvniq ix lhalfql hc gpfb. jotq jl axil meru bp gvmxysr kbu-ielzbzns exjz, hrgzbar vy qvtx, zeltqvuz x hubsrylb. avp quhm arzvovwmfbu fftom pbbga fvfbjotq shffypto. ilkv zbve ypdb gox yviefphe zbuvbca hc tvw: kba ielzbzns, hrgzbar vy qvtx, xosx qb jkbnax  rapobezx";
	plain_text = "qulzonuwarzbdaikbnrlqulgbjzufgaxogvllzlmenamlpyxxgltrapobezxcevfxozhihaxkbaafanzlqplkbagbpllpnyrxysmenabpalxarktoraabyhppbmgxgbkbgotqvzmeryxznuaxilubrutyvnuxanvorhmfbupfgohrgaabulembmzlqwklipwbqaabyhppbmgxgbkbcyxanaxqulnkvcxoflhrejhkpliqbmmfzlubtpgpjpmegoxzeltqvvglsaabhubsrylbgoxormhorpyqulexjzhcahmrelvorhmbqaabhubsrylbgoxprsttftnpgotsrlqffaxacybleahqvtxquhmffaabyhppbmgxgbkbjvniqixlhalfqlhcgpfbjotqjlaxilmerubpgvmxysrkbuielzbznsexjzhrgzbarvyqvtxzeltqvuzxhubsrylbavpquhmarzvovwmfbufftompbbgafvfbjotqshffyptoilkvzbveypdbgoxyviefphezbuvbcahctvwkbaielzbznshrgzbarvyqvtxxosxqbjkbnaxrapobezx";
	key = "xnht";

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
				curr = (prev - k+26) % 26;
				plain_text[i+j] = 'a' + curr;

				// printf("-- %c %d %d %d %c\n", ch, k, prev, curr, plain_text[i+j]);
			} else {
                                // printf("---%d %c --\n", k, ch);
			}
		}

		//cout<< "-----------\n\n";
	}

	cout<< "\n" <<  plain_text << "\n";

	return 0;
}
