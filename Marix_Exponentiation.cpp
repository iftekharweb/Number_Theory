1. Time Complexity : O(m^3 log n)  |  Binary Exponentiation Approch
  
ll mat[51][51], I[51][51];

void mulFunc(ll A[][51],ll B[][51], ll dim)
{
        ll res[dim][dim];
        for(ll i=0; i<dim; i++){
                for(ll j=0; j<dim; j++){
                        res[i][j] = 0;
                        for(ll k=0; k<dim; k++) {
                                res[i][j] = (res[i][j] % MOD + ((A[i][k] % MOD) * (B[k][j] % MOD) % MOD)) % MOD;
                        }
                }
        }
        for(ll i=0; i<dim; i++) for(ll j=0; j<dim; j++) A[i][j] = res[i][j];
}

void matrixExp(ll dim,ll n)
{
        for(ll i=0; i<dim; i++) for(ll j=0; j<dim; j++) {
                if(i==j) I[i][j] = 1;
                else I[i][j] = 0;
        }
        while(n) {
                // Binary Exponentiation
                if(n%2) mulFunc(I, mat, dim), n--;
                else mulFunc(mat, mat, dim), n/=2;
        }
        for(ll i=0; i<dim; i++) for(ll j=0; j<dim; j++) mat[i][j] = I[i][j];
}

void printMat(ll dim)
{
        for(ll i=0; i<dim; i++){
                for(ll j=0; j<dim; j++) {
                       cout << mat[i][j] << " ";
                }
                cout << endl;
        }
}

FUNCTIONS: matrixExp(dim, n); printMat(dim);

