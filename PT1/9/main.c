#include <stdio.h>
#include <stdbool.h>
int main(){
	int num1,num2;
	bool are_multiples;
	printf("insert 2 numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	are_multiples=num1%num2==0 || num2%num1==0;
	if(are_multiples){
		printf("sao multiplos");
	}else{
		printf("nao sao multiplos");
	}
	return 0;
}
