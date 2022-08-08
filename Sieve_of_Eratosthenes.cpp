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


2. BEST with minimum prime factors

vector<bool> markPrime(N,true);
vector<int> primes , minFactor(N,0);

void Seive()
{
        int maxN = N-1;
        markPrime[1] = false;
        minFactor[2] = 2;
        for(int i=4; i<=maxN; i+=2) {
            markPrime[i] = false;
            minFactor[i] = 2;
        }
        for(int i=3; i*i<=maxN; i+=2){
            if(markPrime[i]) {
                for(int j=i*i; j<=maxN; j+=i) {
                    markPrime[j] = false;
                    if(!minFactor[j]) minFactor[j] = i;
                }
            }
        }
        for(int i=1; i<=maxN; i++) {
            if(markPrime[i]) {
                primes.push_back(i);
                minFactor[i] = i;
            }
        }
        return;
}
