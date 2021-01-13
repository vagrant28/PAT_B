#include <stdio.h>
typedef long long LL;

int main(){
	int a, b, d;
	scanf("%d%d%d", &a, &b, &d);
	int tmp = a + b;
	int len = 0;
	int ans[40];
	do{
		ans[len++] = tmp % d;
		tmp = tmp / d;
	}while(tmp != 0);
	for(int i = len - 1; i >= 0; i--){
		printf("%d", ans[i]);
	}
	return 0;
}
