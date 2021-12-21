
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
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
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

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
3. Time Complexity : O(log n) | Sieve Approch
NOTE : Prime factorization for all numbers from 2 to N using sieve.

ll maxN = 1000001;
bool mark[1000001];
vector<ll> factorsFull[1000001], factors[1000001];
void primeFactSeive()
{
        for(ll i = 1; i<maxN; i++) mark[i] = false;
        mark[1] = true;
        for(ll i=2; i<maxN; i++) {
                if(!mark[i]) {
                        for(ll j=i; j<maxN; j+=i) {
                                mark[j] = true;
                                factorsFull[j].push_back(i);
                        }
                }
        }
        for(int i=2; i<maxN; i++) {
                ll value = i;
                for(auto x:factorsFull[i]) {
                        while(value%x==0) {
                                value/=x;
                                factors[i].push_back(x);
                        }
                }
        }
        for(int i=2; i<20; i++) {
                cout << i << " = ";
                printVector(factors[i]);
        }
}
input:
5
Output:
2 = 2
3 = 3
4 = 2 2
5 = 5
120 = 2 2 2 3 5

