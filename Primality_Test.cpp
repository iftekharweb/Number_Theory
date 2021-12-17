# Time complexity: O(n)
# Native Approch

bool isPrime(ll n)
{
        if(n == 1) return false;
        for(int i=2; i<n; i++) {
                if(n%i == 0) return false;
        }
        return true;
}
