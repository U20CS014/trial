#include <stdio.h>

int front = -1,rear = -1;
int queue[10];

void enqueue(int num,int l)
{
	if(rear==l-1){
		printf("Queue is full");
	}
	else if((front==-1)&&(rear==-1)){
		front = rear = 0;
		queue[rear] = num;
	}
	else{
        rear++;
		queue[rear] = num;	
	}
}
void print(){
	int i;
	for(i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
}
void reverse(){
	int i,j,t;
	for(i=front,j=rear;i<j;i++,j--){
		t = queue[i];
		queue[i] = queue[j];
		queue[j] = t;
	}
}
int main(){
	int n,i=0,data;
	printf("Enter the size of Queue : ");
	scanf("%d",&n);
	printf("Enter the data for Queue : ");
	while(i<n){
		scanf("%d",&data);
		enqueue(data,n);
		i++;
	}
	printf("The elements in the queue are : ");
	print();
	reverse();
	printf("\nThe queue after reversing is : ");
	print();
	return 0;
}