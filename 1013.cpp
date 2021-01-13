#include <stdio.h>
#include <string.h>
const int maxn = 1e6 + 10;

int prime[maxn], num;
bool flag[maxn];

void findPrime(){
	num = 0;
	memset(prime, 0, sizeof(prime));
	memset(flag, 0, sizeof(flag));
	for(int i = 2; i < maxn; i++){
		if(!flag[i]){
			prime[num++] = i;
			for(int j = i + i; j < maxn; j += i){
				flag[j] = true;
			}
		}
	}	
}

int main(){
	findPrime();
//	printf("%d", num);
	int M, N;
	scanf("%d%d", &M, &N);
	int cnt = 0;
	for(int i = M - 1; i < N; i++){
		int j = (i - M + 1) % 10;
		printf("%d", prime[i]);
		if(j == 9 || i == N -1){
			printf("\n");
		}
		else{
			printf(" ");
		}
	}
	return 0;
}
