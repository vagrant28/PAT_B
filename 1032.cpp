#include <stdio.h>
#include <string.h>
#define MAXN 100005

int main(){
	int N;
	scanf("%d", &N);
	int num, grade;
	int a[MAXN];
	memset(a, 0, sizeof(a));
	for(int i = 0; i < N; i++){
		scanf("%d%d", &num, &grade);
		a[num] += grade;
	}
	int index = 0, max = 0;
	for(int i = 1; i <= N; i++){
		if(a[i] > max){
			index = i;
			max = a[i];
		}
	}
	printf("%d %d\n", index, a[index]);
	return 0;
}
