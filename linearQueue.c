#include<stdio.h>
#include<conio.h>

#define SIZE 10
typedef struct Queue{
	int rear,front;
	int queue [SIZE];
}qe;

void insertItem(qe *);
void deleteItem(qe *);
void displayItem(qe *);

int main(){
int choose;
qe *q;
q->rear=-1;
q->front=0;
printf("\n Menu For program:\n\n");
printf("\n\n1. insert, 2. delete, 3. disolay\n\n");
do{
	printf("\n enter the choose\n");
	scanf("%d,&choose\n");
	switch (choose){
	 case1:
	 	insertItem(q);
	 	break;
	 	case2:
	 		deleteItem(q);
	 		 break;
	 		 case3:
	 		 	displayItem(q);
	 		 	break;
	 		 	default:
	 		 	printf(" your choice is invalid\n");
	 		 	 
	
	}
}
while(choose<10);
getch();
return 0;
}
void insertItem(qe *q){
	int ele;
	printf(" enter the data to be inserted =\n\n");
	  scanf("%d", &ele);
	  if(q->rear==SIZE-1){
	  	printf("Queue is full\n");
	  	
	  }
	  else{
	  	q->rear++;
	  	q->queue[q->rear]=ele;
	  }
}
void deleteItem (qe *q){
	int ele;
	int i;
	if (q->rear< q->front){
		printf("Queue is empty");
	}
	else{
		for(i=q->front; i<q->rear;i++){
		}
		printf("\n %d\n",q->queue[i]);
	
	}
	
}


