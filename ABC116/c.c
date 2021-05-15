#include <stdio.h>

int main(void){

	int n;
	int h[101];
	int m[101] = {};
	int c[101] = {};
	int check;
	int i;
	int cnt = 0;

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		scanf("%d", &h[i]);
	}

	while(1){
		check = 0;
		for(i = 1; i <= n; i++){
			if(h[i] == m[i]){
				c[i] = 0;
			}else{
				c[i] = 1;
			}
		}
		for(i = 1; i <= n; i++){
			if(c[i] == 1){
				m[i]++;
				check = 1;
			}
			if(c[i-1] == 0 && c[i] == 1){
				cnt++;
			}
		}
		if(check == 0) break;
	}

	printf("%d", cnt);

	return 0;
}