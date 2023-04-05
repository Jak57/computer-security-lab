#include<bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e5+2, MOD = 1e9 + 7;
// ax + by = gcd(a, b)
// gcd(d, 0) = d

// ax + 0 = a -> x = 1
// y = 0

struct triplet {
    ll x;
    ll y;
    ll gcd;
};

triplet extendedEuclid(ll a, ll b) {

    // cout<< a << " " << b << "\n";

    if (b == 0) {
        triplet ans;
        ans.gcd = a;
        ans.x = 1;
        ans.y = 0;
        return ans;
    }

    triplet smallAns = extendedEuclid(b, a%b);
    triplet ans;
    ans.gcd = smallAns.gcd;
    ans.x = smallAns.y;
    ans.y = smallAns.x - (a / b) * smallAns.y;

    return ans;
}

ll gcd(ll a, ll b)
{
        if (b == 0)
                return a;
        else
                return gcd(b, a%b);
}

int main()
{
    ll a, b, p, q, phi_n, e = 12345, d, prod;

    ll i, j, n =  670726081; // 80780754611;
    for (i = 3; i*i <= n; i += 2)
    {
        if (n % i == 0) {
                cout<< i << " " << n/i << "\n";
                p = i;
                break;
        }
    }

    q = n / p;
    phi_n = (p-1) * (q-1);
    cout<< p << " " << q << " " << phi_n << "\n";
    cout<< " gcd(phi_n, e): " << gcd(phi_n, e)  << "\n";

    triplet ans = extendedEuclid(phi_n, e);
    cout<< ans.x << " " << ans.y << "\n";
        d = ans.y;
        prod = ((d % phi_n) * (e % phi_n)) % phi_n;
        cout<< prod << "\n";

    return 0;
}

/*
8 5
*/
