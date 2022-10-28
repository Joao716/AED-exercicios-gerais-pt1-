#include <stdio.h>
int main(){
	int num_of_ints=4;
	int list[num_of_ints];
	printf("insert %d positive integers\n",num_of_ints);
	int i;
	for(i=0;i<num_of_ints;i++){
		do{
			scanf("%d",&list[i]);
		}while(list[i]<0);
	}
	float average;
	for(i=0;i<num_of_ints;i++){
		average+=(float)list[i];
	}
	average/=num_of_ints;
	printf("\nthe average is %f",average);
	return 0;
}
