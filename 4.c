#include<stdio.h>
void main(){
	int m;
	printf("Enter the highest order of polynomial 1: ");
	scanf("%d", &m);
	int i, poly1[m];
	for(i=0;i<=m;i++){
		printf("Enter the coeff of x^%d: ",i);
		scanf("%d",&poly1[i]);
	}
	int n;
	printf("\nEnter the highest order of polynomial 2: ");
	scanf("%d", &n);
	int j,poly2[n];
	for(j=0;j<=n;j++){
		printf("Enter the coeff of x^%d: ",j);
		scanf("%d",&poly2[j]);
	}
	
	int mult[m+n];
	for(i=0;i<=m+n;i++){
		mult[i]=0;
	}
	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			mult[i+j]=mult[i+j]+(poly1[i]*poly2[j]);
		}
	}
	printf("\nAfter Multiplication the result is:\n");
	for(i=0;i<=m+n;i++){
		
		if(i==m+n){
			printf(" %d x^%d",mult[i],i);
		}
		else{
			printf(" %d x^%d +",mult[i],i);
		}
	}
	
	
	
}
