//write a program in a array
#include<stdio.h>
#include<conio.h>
void displayArray(int A[10][10],int,int);//function prototype:
int main(){
	int a[10][10],b[10][10],res[10][10],i,r,c,j;
	printf("Enter the size of a matrix\n");
	scanf("%d %d",&r,&c);
	printf("Enter element of first matrix\n");
	for(i=0;i<r;i++){
	for(j=0;j<c;j++){
		scanf("%d", &a[i][j]);
	}
}
	printf("Enter element of second matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d", &b[i][j]);
		}
	}
	//sum
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			res[i][j]=a[i][j]+b[i][j];
		}
	}
		printf("the first matrix is\n")	;
		displayArray(a,r,c);
		printf("the second matrix is\n");
		displayArray(b,r,c);
		printf(" the result matrix is\n ");
		displayArray(res, r,c);
		getch();
	}
		void displayArray(int d[10][10],int r,int c){
			
		int i,j;
		for(i=0;i<r;i++){
		for (j=0;j<c;j++)
		{
		printf("%d\t",d[i][j]);		
		}	
		printf("\n");
		}

	}

