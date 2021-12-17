1. Time Complexity : O(n log log n) | Sieve of Eratosthenes

int markPrime[1000001];
vector<ll> primes;
void seive()
{
        int maxN = 1000000;
        for(int i=1; i<=maxN; i++) markPrime[i] = 1;
        markPrime[1] = 0;
        for(int i=2; i*i<=maxN; i++){
                if(markPrime[i]) {
                        for(int j=i*i; j<= maxN; j+=i) markPrime[j] = 0;
                }
        }
        for(int i=1; i<=maxN; i++) if(markPrime[i]) primes.push_back(i);
}
