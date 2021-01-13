#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn = 1005;

struct item{
	double num;
	double value;
	double avg;
}r[maxn];

int cmp(item a, item b){
	return a.avg > b.avg;
}

int main(){
	int N;
	double D;
	scanf("%d%lf", &N, &D);
	for(int i = 0; i < N; i++){
		scanf("%lf", &r[i].num);
	}
	for(int i = 0; i < N; i++){
		scanf("%lf", &r[i].value);
		r[i].avg = r[i].value / r[i].num;
	}
	sort(r, r + N, cmp);
//	for(int i = 0; i < N; i++){
//		printf("num = %d; value = %f; avg = %f\n", r[i].num, r[i].value, r[i].avg);
//	}
	double bene = 0;
	for(int i = 0; i < N; i++){
		if(r[i].num	> 0){
			if(r[i].num <= D){
				bene += r[i].value;
				D = D - r[i].num;
			}
			else{
				bene += r[i].avg * D;
				break;
			}
		}
	}
	printf("%.2f\n", bene);
	return 0;
	
}
