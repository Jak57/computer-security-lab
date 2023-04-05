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

    cout<< a << " " << b << "\n";

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

int main()
{
    ll a, b;
    cin>> a >> b;

    triplet ans = extendedEuclid(a, b);

    cout<< ans.gcd << " " << ans.x << " " << ans.y << "\n";

    return 0;
}

/*
8 5
*/
