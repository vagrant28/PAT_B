#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
	int a[15];
	for(int i = 0; i <= 9; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i <= 9; i++){
		if(a[i] >= 1){
			printf("%d", i);
			a[i]--;
			break;
		}
	}
	for(int i = 0; i < a[0]; i++){
		printf("0");
	}
	for(int i = 1; i <= 9; i++){
		for(int j = 0; j < a[i]; j++){
			printf("%d", i);
		}
	}
	putchar('\n');
	return 0;	
}
