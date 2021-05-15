#include <stdio.h>

void add(int *binary, int n){
	binary[n]++;
	if(binary[n] == 2){
		binary[n] = 0;
		add(binary, n+1);
	}
}

int main(void){

	int n, k;
	int i, j;
	int cnt = 0;
	int t[100000];
	long d[100000];
	int check[100000] = {};
	int binary[100000] = {};
	long max = 0;
	long yum = 0;
	long sat;

	scanf("%d", &n);
	scanf("%d", &k);

	for(i = 0; i < n; i++){
		scanf("%d", &t[i]);
		scanf("%d", &d[i]);
	}
	
	while(binary[n] == 0){
		while(binary[n] == 0){
			add(binary, 0);
			cnt = 0;
			for(i = 0; i < n; i++){
				if(binary[i] == 1) cnt++;
			}
			if(cnt == k) break;
		}
		yum = 0;
		for(i = 0; i < n; i++){
			if(binary[i] == 1){
				check[t[i]]++;
				yum += d[i];
			}
		}
		cnt = 0;
		for(i = 1; i <= n; i++){
			if(check[i] != 0){
				cnt++;
				check[i] = 0;
			}
		}
		sat = yum + (long)cnt * (long)cnt;
		if(max < sat) max = sat;
	}

	printf("%ld", max);
	
	return 0;
}

