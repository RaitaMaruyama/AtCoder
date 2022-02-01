#include <stdio.h>

int main(void){

	int n, k;
	int i, j;
	int cnt = 0;
	int t[100000];
	int d[100000];
	int **dp;

	scanf("%d", &n);
	scanf("%d", &k);

	dp = malloc(sizeof(int *) * n);
	for(i = 0; i < n; i++){
		dp[i] = malloc(sizeof(int) * k);
	}

	for(i = 0; i < n; i++){
		scanf("%d", &t[i]);
		scanf("%d", &d[i]);
	}

	for(i = 0; i < n; i++){
		dp[i][0] = 0;
	}
	for(j = 0; j < k; j++){
		dp[0][j] = 0;
	}

	for(1 = 0; i < n; i++){
		for(j = 0; j < k; j++){
			if(i == 0 || j == 0){
				dp[i][j] = 0;
			}
			else if(cnt >= j){
				dp[i][j] = dp[i-1][j];
			}
			else{
				

	for(i = 0; i < n; i++){
		free(dp[i]);
	}
	free(dp);
	
	return 0;
}