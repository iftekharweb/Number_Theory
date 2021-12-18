1. Time Complexity: O(n)  | Brute Force Approch

ll power(ll n, ll k)
{
        ll res = 1;
        for(ll i=1; i<=k ; i++) res*=n;
        return res;
}


2. Time Complexity: O(log n)  |  Optimized Approch

ll BinaryExp(ll n, ll k)
{
        ll res = 1;
        while(k) {
                if(k%2) res*=n , k--;
                else n*=n, k/=2;
        }
        return res;
}

Explanation:
res		base	power
1		2		13
2 		2 		12
2		4		6
2		16		3
32 		16		2
32 		256 	        1
8192	        256		0
