#include <stdio.h>
typedef struct TWO{
	int big;
	int small;
}TWO;
TWO getBig_and_small(int array[],int size);
int main(){
	int list[7];
	int i;
	printf("insert 7 numbers\n");
	for(i=0;i<7;i++){
		scanf("%d",&list[i]);
	}
	TWO output=getBig_and_small(list,7);
	printf("the biggest is %d, and the smallest is %d",output.big,output.small);
	return 0;
}
TWO getBig_and_small(int array[],int size){
	TWO result;
	result.big=array[0],result.small=array[0];
	int i;
	for(i=1;i<size;i++){
		result.big=result.big<array[i]?array[i]:result.big;
		result.small=result.small>array[i]?array[i]:result.small;
	}
	return result;
}
