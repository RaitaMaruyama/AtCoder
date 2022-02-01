#include <stdio.h>

int main(void){

	int s, n, i, j, check, num[100000];

	scanf("%d", &s);
	n = s;
	num[1] = n;
	i = 2;
	check = 0;

	while(1){
		if(n % 2 == 0){
			n = n / 2;
		}else{
			n = 3 * n + 1;
		}
		num[i] = n;
		for(j = 1; j < i; j++){
			if(num[i] == num[j]){
				check = 1;
			}
		}
		if(check == 1) break;
		i++;
	}

	printf("%d", i);
	
	return 0;
}