#include <stdio.h>

int main(void){
	int a, b, c, min, ans;

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int max = 0;

	if(max < a){
		max = a;
		ans = b*c;
	}
	if(max < b){
		max = b;
		ans = a*c;
	}
	if(max < c){
		max = c;
		ans = a*b;
	}

	printf("%d", ans/2);

	return 0;
}