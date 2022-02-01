#include <stdio.h>

int main(void){
	int a, b, c, ans;
	char s[100];

	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	fgets(s, 100, stdin);
	fgets(s, 100, stdin);

	ans = a + b + c;

	printf("%d %s", ans, s);

	return 0;
}