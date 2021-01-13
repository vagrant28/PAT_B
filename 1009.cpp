#include <stdio.h>

int main(){
	char str[100][100];
	int num = 0;
	while(1){
		scanf("%s", str[num++]);
		char tmp = getchar();
//		printf("tmp = %c\n", tmp);
		if(tmp == '\n'){
			for(int i = num - 1; i >= 0; i--){
				printf("%s", str[i]);
				if(i == 0){
					putchar('\n');
				}
				else{
					putchar(' ');
				}
			}
			break;
		}
	}
	return 0;
}
