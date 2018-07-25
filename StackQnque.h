#ifndef QWITHLL_H_INCLUDED
#define QWITHLL_H_INCLUDED


typedef struct node{
char num;// data part of the node
struct node* next; // pointer to the next node
}Node, *NodePtr;

typedef struct def{
    NodePtr head;
    NodePtr tail;
}QueueType, *Queue;

Queue initQ();
int isEmpty(Queue Q);
void enQ(Queue Q, char x);
char deQ(Queue Q);

Queue initQ()
{
    Queue Q = malloc(sizeof(QueueType));
    Q->head = NULL;
    Q->tail = NULL;
    return Q;
}
int isEmpty(Queue Q)
{
    return (Q->head == NULL);
}

void enQ(Queue ptr, char x) {
	NodePtr temp = (NodePtr)malloc(sizeof(Node));
	temp->num =x;
	temp->next = NULL;

	if(isEmpty(ptr)){
         ptr->head = temp;
         }
    else{
	// if it is not the first node then enqueue at the rare end
        ptr->tail->next = temp;
        }
        ptr->tail = temp;


}

char deQ(Queue Q)
{
    if(isEmpty(Q))
    {
        printf("empty Queue");
        exit(1);
    }
    NodePtr tmp = Q->head;
    char hold = Q->head->num;
    Q->head = Q->head->next;
    if(Q->head == NULL) Q->tail = NULL; // if dequeuing the last node
    free(tmp); // to reclaim the memory pointed to by old head of Queue
    return hold;
}



#endif // QWITHLL_H_INCLUDED

