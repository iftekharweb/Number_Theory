1. Time complexity: O(n) | Native Approch
bool isPrime(ll n)
{
        if(n == 1) return false;
        for(ll i=2; i<n; i++) {
                if(n%i == 0) return false;
        }
        return true;
}



2. Time Complexity: O(sqrt(n)) | Better Approch 
bool isPrime(ll n)
{
        if(n == 1) return false;
        for(ll i=2; i*i<=n; i++) {
                if(n%i == 0) return false;
        }
        return true;
}
