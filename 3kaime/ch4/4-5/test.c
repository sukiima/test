#include<stdio.h>

int main(){
	int flag;
	int mod;
	int i = 1;

	while (i <= 100) {
		flag = 0;
		mod = 2;
		while (i > mod){
			flag = i % mod;
			
			if (flag == 0){
				flag = 0;
				break;
			}
			mod++;
		}
	if (flag) {
		printf("%d\n", i);
	}
	i++;
	}
	
	return 0;
}
