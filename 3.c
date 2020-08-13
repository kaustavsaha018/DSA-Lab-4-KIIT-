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
	int poly2[n];
	for(i=0;i<=n;i++){
		printf("Enter the coeff of x^%d: ",i);
		scanf("%d",&poly2[i]);
	}
	int add[50];
	if(m>=n){
		 add[m];
		for(i=0;i<=m;i++){
			add[i]=poly1[i];
		}
		for(i=0;i<=n;i++){
			add[i]=add[i]+poly2[i];
		}
	}
	else{
		 add[n];
		for(i=0;i<=n;i++){
			add[i]=poly2[i];
		}
		for(i=0;i<=m;i++){
			add[i]=add[i]+poly1[i];
		}
	}
	printf("\nAfter Addition the result is:\n");
	
	if(m>=n){
		for(i=0;i<=m;i++){
		if(i==m)
			printf(" %d x^%d",add[i],i);
		else
			printf(" %d x^%d +",add[i],i);
	}
	}
	
	else{
		for(i=0;i<=n;i++){
		
		if(i==n)
			printf(" %d x^%d",add[i],i);
		else
			printf(" %d x^%d +",add[i],i);	
	}
	}
}


