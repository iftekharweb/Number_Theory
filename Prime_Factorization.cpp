1. Time Complexity: O(log n)  |  Brute Force Approch 
Note: If the nuber itself is a prime number (say 10^9+7), the time complexity becomes O(n)

vector<ll> factors;
void primeFact(ll n)
{
        for(ll i=2; i<=n; i++) {
                if(n%i == 0) {
                        int cnt = 0;
                        while(n%i == 0) {
                                cnt++, n/=i;
                                factors.push_back(i);
                        }
                        cout << i << "^" << cnt << endl;
                }
        }
}

2. Time Complexity : O(sqrt n) | Optimized Approch

vector<ll> factors;
void primeFact(ll n)
{
        for(ll i=2; i*i<=n; i++) {
                if(n%i == 0) {
                        int cnt = 0;
                        while(n%i == 0) {
                                cnt++, n/=i;
                                factors.push_back(i);
                        }
                        cout << i << "^" << cnt << endl;
                }
        }
        if(n>1) {
                factors.push_back(n);
                cout << n << "^" << 1 << endl;
        }
}


