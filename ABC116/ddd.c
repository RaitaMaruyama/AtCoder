#include <stdio.h>

struct sushi{
	int t;
	int d;
};

int main(void){

	int n, k;
	int i, j;
	int cnt = 0;
	int t[100000];
	int d[100000];
	int check[100000] = {};
	struct sushi s[100000];
	struct sushi sorted[100000];

	scanf("%d", &n);
	scanf("%d", &k);

	for(i = 0; i < n; i++){
		scanf("%d", &t[i]);
		scanf("%d", &d[i]);
		s[i].t = t[i];
		s[i].d = d[i];
	}

	for(i = 0; i < n; i++){
		
	}
	
	return 0;
}