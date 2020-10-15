/*
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = n;
    int a[i];
    while(i--){
        cin >> a[i];
    }

    sort(a, a+n);
    //int j=n;
    for(i=0; i<n; i++){
        int r = a[n-1]-a[i];
        if(r <= 5){
            break;
        }

    }

    cout << (n)-i << endl;
    return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n", a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

#define mx 1000000
#define mod 1000000007
#define PI acos(-1.0)

#define size1 200005

int drx[8] = {-2,-2,-1,-1,1,1,2,2};
int dcy[8] = {-1,1,-2,2,-2,2,-1,1};

int dirx[4] = { -1, 0, 1, 0 };
int diry[4] = { 0, -1, 0, 1 };

ll gcd(ll a,ll b){ if(b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}


vector <ll> vc;

int main()
{
    // seive();

    ll tc, num, t = 1, pownum;

    //freopen("/opt/Coding/clion code/input.txt", "r", stdin);
    //freopen("/opt/Coding/clion code/output.txt", "w", stdout)


    sc1(num);

    for(ll i = 0; i < num; i++){
        ll x;
        sc1(x);
        vc.push_back(x);
    }

    sort(vc.begin(), vc.end());

    ll ans = 0;
    for(ll i = 0; i < num; i++){
        ll now = upper_bound(vc.begin(), vc.end(), vc[i] + 5) - (vc.begin() + i);
        ans = max(ans, now);
    }

    pf1(ans);

    return 0;
}
*/
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#define ms(x, n) memset(x,n,sizeof(x));
using namespace std;
typedef  long long LL;
const int inf = 1<<30;
const LL maxn = 2*1e5+10;

int n, a[maxn];
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+1+n);
    int ans = 1, sum = 1;
    for(int i = 1, j = 2; j <= n && i <= n && i<=j; ){
        if(a[j]-a[i]<=5){
            sum++, j++;
            cout << "sum++ :" << sum << " j++ : " << j << " a[j] : " << a[j] << endl;
        }
        else if(a[j]-a[i]>5){
            i++, sum--;
            cout << "i++ :" << i << " sum-- : " << sum << " a[i] : " << a[i]<< endl;
        }
        ans = max(sum, ans);
        cout << "  ans  :  " << ans << endl << endl;
    }
    cout << ans << endl;
	return 0;
}

