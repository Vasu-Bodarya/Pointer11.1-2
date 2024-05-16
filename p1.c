#include<stdio.h>

void main(){
	
	int size;
	
	printf("Enter Number Of Elements : ");
	scanf("%d",&size);
	
	int a[size];
	
	int *ptr[size];
	int i;
	
	for(i=0; i<size; i++){
		printf("Enter Element %d : ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<size; i++){
		ptr[i] = &a[i];
	}
	
	for(i=0; i<size; i++){
		int sum = *ptr[i] + *ptr[i];
		printf("%d\t",sum);
	}
	
	
	
}
