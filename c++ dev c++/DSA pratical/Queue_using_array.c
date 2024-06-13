#include<stdio.h>
struct Queue
{
	int front,rear,capcity;
	int *array;
};
struct Queue* create_queue(int capcity)
{
	struct Queue* Q=struct Queue* malloc(sizeof(struct Queue));
	if(!Q) return NULL;
	Q->capacity=capacity;
	Q->front=Q->rear=-1;
	array=int* malloc(Queue->capacity*sizeof(int));
	if(!Q->array)
	{
		return (NULL);
	}
	return (Q);
}
int isempty(struct Queue *Q)
{
	return(Q->front==-1);
}
int isfull(struct Queue *Q)
{
	return((Q->rear+1)%Q->capcity==Q->front);
}
