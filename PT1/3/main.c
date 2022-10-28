#include <stdio.h>
int main(){
	unsigned int age;
	printf("what's your age? ");
	scanf("%d",&age);
	if(age>18){
		printf("\nyou're over 18");
	}else{
		printf("\nyou're 18 or bellow");
	}
	return 0;
}
