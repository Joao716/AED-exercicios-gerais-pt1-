#include <stdio.h>
int main(){
	int num1,num2;
	int biggest,smallest;
	printf("input 2 numbers\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	biggest=num1>num2? num1 : num2;
	smallest=(biggest==num1)?num2:num1;
	if(num1==num2){
		printf("\nthey're equal");
	}else{
		printf("\nthe biggest is %d",biggest);
		printf("\nthe smallest is %d",smallest);
	}
	return 0;
}
