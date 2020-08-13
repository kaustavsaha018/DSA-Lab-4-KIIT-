#include<stdio.h>
#include<stdlib.h>

void main(){
	int rows, cols, *p;
	printf("Enter the no. of rows and columns:\n");
	scanf("%d\n%d",&rows,&cols);
	
	p = (int *) malloc(rows * cols * sizeof(int));
	
	int i,j;
	printf("Enter the matrix elements:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			scanf("%d", p+(i*cols)+j);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf(" %d ", *(p+(i*cols)+j));
		}
		printf("\n");
	}
	
	free(p);
	
}
