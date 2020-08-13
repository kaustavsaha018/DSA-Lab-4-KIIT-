#include<stdio.h>
void sparseMatrixRow(int *, int, int, int);
void sparseMatrixCol(int *, int, int, int);
void main(){

	int n1,n2;
	printf("Enter the no. of rows and cols:\n");
	scanf("%d\n%d", &n1,&n2);
	int matrix[n1][n2];
	
	int size=0;
	int i,j;
	printf("\nEnter the matrix elements:\n\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("Enter matrix[%d][%d]: ",i,j);
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j]!=0){
				size++;
			}
		}
	}
	printf("\nThe original Matrix is:\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	if(size<n1*n2){
		sparseMatrixRow(&matrix[0][0],n1,n2,size);
		sparseMatrixCol(&matrix[0][0],n1,n2,size);
	}
	else{
		printf("\nSparse matrix need not to be formed.");
	}
	
	
}

void sparseMatrixRow(int *p, int n1, int n2, int size){
	int sparseMatrix[size+1][3];
	int k=1;
	sparseMatrix[0][0]=n1;
	sparseMatrix[0][1]=n2;
	sparseMatrix[0][2]=size;
	int i,j;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(*(p+(i*n2)+j)!=0){
				sparseMatrix[k][0]=i;
				sparseMatrix[k][1]=j;
				sparseMatrix[k][2]=*(p+(i*n2)+j);
				k++;
			}
		}
	}
	printf("\nThe Sparse Matrix (ROW WISE) is:\n");
	for(i=0;i<size+1;i++){
		for(j=0;j<3;j++){
			printf(" %d ",sparseMatrix[i][j]);
		}
		printf("\n");
	}
}

void sparseMatrixCol(int *p, int n1, int n2, int size){
	int sparseMatrix[3][size+1];
	int k=1;
	sparseMatrix[0][0]=n1;
	sparseMatrix[1][0]=n2;
	sparseMatrix[2][0]=size;
	int i,j;
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(*(p+(i*n2)+j)!=0){
				sparseMatrix[0][k]=i;
				sparseMatrix[1][k]=j;
				sparseMatrix[2][k]=*(p+(i*n2)+j);
				k++;
			}
		}
	}
	printf("\nThe Sparse Matrix (COLUMN WISE) is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<size+1;j++){
			printf(" %d ",sparseMatrix[i][j]);
		}
		printf("\n");
	}
}
