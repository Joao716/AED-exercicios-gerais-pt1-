#include <stdio.h>
void sort(int array[],int size);
int main(){
	int list[3];
	printf("insert 3 integers\n");
	int i;
	for(i=0;i<3;i++){
		scanf("%d",&list[i]);
	}
	sort(list,3);
	for(i=0;i<3;i++){
		printf("%d,",list[i]);
	}
	return 0;
}
void sort(int array[],int size){
	int i,j,aux;
	for(i=0;i<size-1;i++){
		for(j=i;j<size;j++){
			if(array[i]>array[j]){
				aux=array[i];
				array[i]=array[j];
				array[j]=aux;
			}
		}
	}
}
