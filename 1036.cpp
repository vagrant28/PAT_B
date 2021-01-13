#include <stdio.h>

int main(){
	int n;
	char c;
	scanf("%d %c", &n, &c);
	for(int i = 0; i < n; i++){
		putchar(c);
	}
	putchar('\n');
	int row;
	if(n % 2 == 0)
		row = n / 2;
	else
		row = n / 2 + 1;
	for(int i = 1; i <= row - 2; i++){
		putchar(c);
		for(int j = 1; j <= n - 2; j++){
			putchar(' ');
		}
		putchar(c);
		putchar('\n');
	}
	for(int i = 0; i < n; i++){
		putchar(c);
	}
	return 0;
}
