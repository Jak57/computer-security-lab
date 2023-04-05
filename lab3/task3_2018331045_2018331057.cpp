#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll big_mod(ll base, ll power, ll mod)
{
    if(power == 0)
        return 1;

    else if(power % 2 == 1)
    {
        ll p1 = base % mod;
        ll p2 = (big_mod(base, power-1, mod)) % mod;
        return (p1 * p2) % mod;
    }
    else if(power % 2 == 0)
    {
        ll p1 = (big_mod(base, power/2, mod)) % mod;
        return (p1 * p1) % mod;
    }
}

int main()
{
	string message;
	int n, i, j;
        message = "thegranddesignbreaksthenewsbittertosomethattocreateauniversefromabsolutenothinggodisnotnecessaryallthatisneededarethelawsofnaturethatistherecanhavebeenabigbangcreationwithoutthehelpofgodprovidedthelawsofnaturepredatetheuniverseourconceptoftimebeginswiththecreationoftheuniversethereforeifthelawsofnaturecreatedtheuniversetheselawsmusthaveexistedpriortotimethatisthelawsofnaturewouldbeoutsideoftimewhatwehavethenistotallynonphysicallawsoutsideoftimecreatingauniversenowthatdescriptionmightsoundsomewhatfamiliarverymuchlikethebiblicalconceptofgodnotphysicaloutsideoftimeabletocreateuniverse";
        n = message.size();
        ll C, e = 12345, N = 670726081, D, d = 33519389;
        vector<ll> v;

        cout<< n << "\n";
        cout<< "Encryption: " << "\n";
         for (i = 0; i < n; i++)
         {
                ll p = message[i] - 'a' + 1;
                C = big_mod(p, e, N);
                v.push_back(C);
                cout<< message[i] << " " << C << "\n";
         }

        cout<< "Decryption: " << "\n";
        for (i = 0; i < n; i++) {
                C = v[i];
                D = big_mod(C, d, N);
                //cout<< D + 'a';
                char ch = int(D-1) + 'a';
                cout<< ch;
                //cout<< D << "\n";
        }
        cout<< "\n";

	return 0;
}
