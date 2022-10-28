#include <stdio.h>
int get_biggest(int array[],int size);
int main(){
	int list[5];
	int i;
	printf("insert 5 numbers\n");
	for(i=0;i<5;i++){
		scanf("%d",&list[i]);
	}
	printf("%d is the biggest",get_biggest(list,5));
	return 0;
}
int get_biggest(int array[],int size){
	int result=array[0];
	int i;
	for(i=1;i<size;i++){
		result=array[i]>result?array[i]:result;
	}
	return result;
}
