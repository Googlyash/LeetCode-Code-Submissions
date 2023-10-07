//POTD Oct'7, 2023
//Oct'7, 2023 11:32 pm

class Solution {
public:
    long long ways[51][101][51];
    int MOD=1e9+7;
    int numOfArrays(int n, int m, int k) {
        for (int j = 1; j <= m; j++) {
                ways[1][j][1] = 1;
        }
        
        for (int a = 1; a <= n; a++) {
            for (int b = 1; b <= m; b++) {
                for (int c = 1; c <= k; c++) {
                    long long s = 0;

		            /* In this first case, we can append any element from [1, b] to the end of the array. */
                    s = (s + b * ways[a - 1][b][c]) % MOD;
                    
		           /* In this second case, we can append the element "b" to the end of the array. */
                    for (int x = 1; x < b; x++) {
						s = (s + ways[a - 1][x][c - 1]) % MOD;
                    }
					
                    ways[a][b][c] = (ways[a][b][c] + s) % MOD;
                }
            }
        }

        long long ans = 0;
        for (int j = 1; j <= m; j++) {
            ans = (ans + ways[n][j][k]) % MOD;
        }
        
        return int(ans);
    }
};

//Comments