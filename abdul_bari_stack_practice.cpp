
/*
//*********stack using struct
#include<iostream>
using namespace std; 
struct stack{
	int top; 
	//holds topmost index
	int size;
	int *s; 
};

void create(struct stack *st){
	cout<<"enter number of elements: ";
	cin>>st->size;
	st->s=new int[st->size];
	st->top=-1;
}

int isFull(struct stack *st){
	if(st->top==st->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(stack *st){
	if(st->top==(-1)){
		return 1;
	}else{
		return 0;
	}
}

void push(stack *st, int x){
	if(isFull(st)){
		cout<<"overflow condition"<<endl;
	}
	else{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(struct stack *st){
	int x=-1;
	if(isEmpty(st)){
		cout<<"underflow"<<endl;
	}
	else{
		x=st->s[st->top];
		st->top--;
	}
	return x;
}

void display(struct stack st){
	for(int i=st.top; i>=0; i--){
		cout<<st.s[i]<<" ";
	}
}

int peek(stack st, int x){
	if((st.top-x+1)>0){
		return st.s[st.top-x+1];
	}else{
		return -1;
	}
}

int stackTop(struct stack st){
	if(st.top==(-1)){
		return -1;
	}
	else{
		return(st.s[st.top]);
	}
}

int main(){
	struct stack st;
	create(&st);

	push(&st,2);
	push(&st,3);
	push(&st,4);
	push(&st,6);
	push(&st,8);
	
	cout<<"val popped "<<pop(&st)<<endl;
	cout<<"peek val is: "<<peek(st,2)<<endl;
	cout<<"stacktop val is: "<<stackTop(st)<<endl;
	display(st);
}

*/

//stack using lL in C
/*
#include<iostream>
using namespace std; 
struct Node{
	int data; 
	struct Node *next;
}*top=NULL;

int isFull(){
	struct Node *t;
	t=new Node;
	if(t==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct Node *p, int x){
	struct Node *t;
	t=new Node;
	if(isFull()){
		cout<<"full"<<endl;
	}
	else{
		t->data=x;
		t->next=top;
			top=t;
	}
}

int pop(struct Node *p){
	struct Node *t;
	t=new Node;
	t=p;
	int x=-1;
	if(isEmpty()){
		cout<<"underflow"<<endl;
	}
	else{
		p=top;
		top=top->next;
		x=p->data;
		delete p;
	}
	return x;
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int peek(int x){
	struct Node *p;
	p=new Node;
	p=top;
		while(p && x>0){
			p=p->next;
			x--;
		}
		if(p){
			x=p->data;
		}
		return x;
}

int main(){
	push(top,1);
	push(top,4);
	push(top,3);
	push(top,8);
	push(top,9);
	
	cout<<pop(top)<<endl;
	cout<<peek(0)<<endl;
	display(top);
}
*/


//stack using class
/*
#include<iostream>
using namespace std; 
class Node{
	public: 
	int data; 
	Node *next;
};

class stack{
	private: 
	Node *top;
	public: 
	stack(){
		top=NULL;
	}
	void push(int x);
	int pop();
	int peek(int x);
	void display();
	int isFull(){
		Node *t;
		t=new Node;
		if(t==NULL){
			return 1;
		}
		else{
			return 0;
		}
	}
	int isEmpty(){
		if(top==NULL){
			return 1;
		}
		else{
			return 0;
		}
	}
};

void stack::push(int x){
	Node *t;
	t=new Node;
	if(isFull()){
		cout<<"overflow"<<endl;
	}
	else{
		t->data=x;
		t->next=top;
		top=t;
	}	
}

int stack::pop(){
	struct Node *t;
	int x=-1;
	t=new Node;
	t=top;
	if(isEmpty()){
		cout<<"empty"<<endl;
	}
	else{
		top=top->next;
		x=t->data;
		delete t;
	}
	return x;
}

void stack::display(){
	struct Node *p;
	p=new Node;
	p=top;
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int stack::peek(int x){
	struct Node *p;
	p=new Node;
	p=top;
	int i = (-1);
	while(p && x>0){
		p=p->next;
		x--;
	}
	if(p){
		i=p->data;
	}
	return i;
}

int main(){
	stack st;
	st.push(2);
	st.push(4);
	st.push(6);
	st.push(8);
	
	cout<<st.pop()<<endl;
	cout<<st.peek(0)<<endl;
	st.display();
}

*/
/*
//parenthesis question
#include<iostream>
using namespace std; 
struct Node{
	int data; 
	struct Node *next;
}*top=NULL;

int isFull(){
	struct Node *t;
	t=new Node;
	if(t==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void push(struct Node *p, int x){
	struct Node *t;
	t=new Node;
	if(isFull()){
		cout<<"full"<<endl;
	}
	else{
		t->data=x;
		t->next=top;
			top=t;
	}
}

int pop(struct Node *p){
	struct Node *t;
	t=new Node;
	t=p;
	int x=-1;
	if(isEmpty()){
		cout<<"underflow"<<endl;
	}
	else{
		p=top;
		top=top->next;
		x=p->data;
		delete p;
	}
	return x;
}

void display(struct Node *p){
	while(p){
		cout<<p->data<<" ";
		p=p->next;
	}
}

int peek(int x){
	struct Node *p;
	p=new Node;
	p=top;
		while(p && x>0){
			p=p->next;
			x--;
		}
		if(p){
			x=p->data;
		}
		return x;
}

int ifBalanced(char *exp){
	for(int i=0; exp[i]!='\0'; i++){
		if(exp[i]=='('){
			push(top,'(');
		}
		else if(exp[i]==')'){
			if(top==NULL){
				return 0;
			}
			pop(top);
		}
	}
	
	if(isEmpty()){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	char exp[]="((a+b)*(c-d))";
	cout<<ifBalanced(exp)<<endl;
}
*/
/*
//queue using array in c
#include<iostream>
using namespace std; 
struct queue{
	int size; 
	int front; 
	int rear; 
	int *Q;
}*q=NULL;

void create(struct queue *q){
	cout<<"enter number of elements: ";
	cin>>q->size;
	q->Q=new int[q->size];
	q->front=q->rear=-1;
}

int isFull(struct queue *q){
	if(q->front==q->size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(struct queue *q){
	if(q->front==q->rear){
		return 1;
	}
	else{
		return 0;
	}
}

void enqueue(struct queue *q, int x){
	if(isFull(q)){
		cout<<"overflow"<<endl;
	}
	else{
		q->rear++;
		q->Q[q->rear]=x;
	}
}

int dequeue(struct queue *q){
	int x=-1;
	if(isEmpty(q)){
		cout<<"underflow"<<endl;
	}
	else{
		q->front++;
		x=q->Q[q->front];
	}
	return x;
}

void display(struct queue q){
	for(int i=q.front+1; i<=q.rear; i++){
		cout<<q.Q[i]<<" ";
	}
}

int main(){
	struct queue q;
	create(&q);
	enqueue(&q,2);
	enqueue(&q,4);
	enqueue(&q,6);
	
//	dequeue(&q);
	display(q);
	
}
*/

//queue using array in c++
/*
#include<iostream>
using namespace std; 
class queue{
	private: 
	int size; 
	int front; 
	int rear; 
	int *Q;
	
	public: 
	queue(int x){
		size=x;
		front=rear=-1;
		Q=new int[size];
	}
	
	void enqueue(int x);
	int dequeue();
	int isEmpty();
	int isFull();
	void display();
};

void queue::enqueue(int x){
	if(isFull()){
		cout<<"overflow"<<endl;
	}
	else{
		rear++;
		Q[rear]=x;
	}
}

int queue::dequeue(){
	int x=-1;
	if(isEmpty()){
		cout<<"underflow"<<endl;
	}
	else{
		front++;
		x=Q[front];
	}
	return x;
}

int queue::isFull(){
	if(rear==size-1){
		return 1;
	}
	else{
		return 0;
	}
}

int queue::isEmpty(){
	if(front==rear){
		return 1;
	}
	else{
		return 0;
	}
}

void queue::display(){
	for(int i=front+1; i<=rear; i++){
		cout<<Q[i]<<" ";
	}
}

int main(){
	queue q(5);

	int ch,x;
	do{
		cout<<"\nmenu:\n 1. enqueue\n 2. dequeue\n 3. isFull\n 4. isEmpty\n enter 0 to exit"<<endl;
		cin>>ch;
		switch(ch){
			case 0: exit;
			break;
			case 1: cout<<"enter number: "<<endl; cin>>x; q.enqueue(x); q.display();
			break;
			case 2: q.dequeue(); q.display();
			break;
			case 3: cout<<q.isFull(); 
			break;
			case 4: cout<<q.isEmpty(); 
			break;
			default: cout<<"invalid";
			break;
		}
	}while(ch!=0);
}
*/


/*
//circular q
#include<iostream>
using namespace std; 
struct queue{
	int size; 
	int front; 
	int rear; 
	int *Q;
};

void create(struct queue *q){
	cout<<"enter size: ";
	cin>>q->size;
	q->Q=new int[q->size];
	q->front=q->rear=0;
	
}

void enqueue(struct queue *q, int x){
	if(((q->rear+1)%(q->size))==q->front){
		cout<<"full";
	}
	else{
		q->rear=((q->rear+1)%(q->size));
		q->Q[q->rear]=x;
	}
}

int dequeue(struct queue *q){
	int x=-1;
	if(q->front==q->rear){
		cout<<"empty";
	}
	else{
		q->front++;
		x=q->Q[q->front];
	}
}

void display(struct queue q){
	int p;
	p=q.front+1;
	do{
		cout<<q.Q[p]<<" ";
		p=((p+1)%(q.size));
	}while(p!=(q.rear+1)%(q.size));
}

int main(){
	struct queue q;
	create(&q);
	enqueue(&q,2);
	enqueue(&q,3);
	enqueue(&q,4);
	cout<<dequeue(&q)<<endl;
	display(q);
}
*/
/*
#include<iostream>
using namespace std; 
struct Node{
	int data;
	struct Node *next;
}*front=NULL, *rear=NULL;

void enqueue(int x){
	struct Node *t;
	t=new Node; 
	if(t==NULL){
		cout<<"overflow"<<endl;
	}
	else{
		t->data=x;
		t->next=NULL;
		if(front==NULL && rear==NULL){
			front=rear=t;
		}
		else{
			rear->next=t;
			rear=t;
		}
	}
}

int dequeue(){
	int x=-1;
	if(front==NULL && rear==NULL){
		cout<<"underflow"<<endl;
	}else{
		struct Node *p;
		p=new Node;
		p=front;
		front=front->next;
		x=p->data;
		delete p;
	}
	return x;
}

void display(){
	struct Node *t;
	t=new Node;
	t=front;
	while(t){
		cout<<t->data<<" ";
		t=t->next;
	}
}

int main(){
	struct queue *q;
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	
	cout<<dequeue()<<endl;
	
	display();
}
*/

//**************************queue using two stacks

#include<iostream>
using namespace std; 
struct stack{
	int size; 
	int top; 
	int *S;
};

//two stacks for implementing queue
struct stack stkr, stkf;

void create(struct stack *s){
	cout<<"enter size: ";
	cin>>s->size;
	s->S=new int[s->size];
	s->top=(-1);
}

int isFull(struct stack *s){
	if(s->top==(s->size-1)){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(struct stack *s){
	if(s->top==(-1)){
		return 1;
	}
	else{
		return 0;
	}
}

void display(struct stack *s){
	if(!isEmpty(s)){
		for(int i=s->top; i>=0; i--){
		cout<<s->S[i]<<" ";
	}
	}
}

void push(struct stack *s, int x){
	if(isFull(s)){
		cout<<"overflow"<<endl;
	}
	else{
		s->top++;
		s->S[s->top]=x;
	}
}

int pop(struct stack *s){
	int x=-1;
	if(isEmpty(s)){
		cout<<"underflow"<<endl;
	}
	else{
		x=s->S[s->top];
		s->top--;
	}
	return x;
}

//all elements are pushed into stkf while enqueue
int enqueue(int x){
	if(isFull(&stkf)){
		cout<<"overflow";
	}
	else{
		push(&stkf,x);
	}
}

//while dequeue, we first check if stkr and stkf are empty  
//if empty then we pop elements from stkf and push to stkr
//if not empty then we pop from stkr
int dequeue(){
	int x=-1;
	if(isEmpty(&stkr)){
		if(stkf.top==(-1)){
			return x;
		}
		else{
			x=pop(&stkf);
			push(&stkr,x);
			stkr.top--;
		}
	}
	else{
		x=pop(&stkr);
	}

	return x;
}

//function to check if queue is full
int isFullQ(){
	if(stkf.top==stkf.size-1){
		return 1;
	}
	else{
		return 0;
	}
}

//function to check if queue is empty
int isEmptyQ(){
	if(stkf.top==(-1)){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){

	create(&stkf);
	create(&stkr);
	enqueue(2);
	enqueue(4);
	enqueue(6);
	enqueue(8);
	cout<<dequeue()<<endl;
	cout<<dequeue()<<endl;
//	cout<<dequeue()<<endl;
//	cout<<dequeue()<<endl;
	cout<<isFullQ()<<endl;
	cout<<isEmptyQ()<<endl;
}




/*
#include<iostream>
using namespace std; 
int tower(int n){
	if(n>0){
		tower(n-1);
		cout<<"moved: "<<n<<endl;
		tower(n-1);
	}

}
int main(){
	int n=5;
	tower(n);
}
*/

/*
//*********************tower of hanoi problem
#include<iostream>
using namespace std; 
int tower(int n, int a, int b, int c){
	if(n>0){
		tower(n-1,a,c,b);
		cout<<"moved: "<<n<<" from "<<a<<" to "<<c<<" via "<<b<<endl;
		tower(n-1,b,a,c);
	}

}
int main(){
	int n=3;
	int a,b,c;
	a=1;
	b=2;
	c=3;
	tower(n,a,b,c);

}
*/

/*
//priority queues using class
#include<iostream>
using namespace std;
class pqueue{
	private: 
	int size; 
	int front; 
	int rear; 
	int *Q;
	public: 
	pqueue(int x){
		size=x;
		Q=new int[x];
		//initializing array 
		front=rear=-1;
	}
	void enqueue(int x);
	int dequeue();
	int isfull();
	int isempty();
	void display();
};

int pqueue::isempty(){
	if(front==rear){
		return 1;
	}
	else{
		return 0;
	}
}

int pqueue::isfull(){
	if(rear==size-1){
		return 1;
	}
	else{
		return 0;
	}
}

void pqueue::enqueue(int x){
	int i=front;
	if(isfull()){
		cout<<"overflow"<<endl;
	}
	else{
		if(front==(-1) && rear==(-1)){
			rear++;
			Q[rear]=x;
		}
		else{
				for(i=front+1; i<=rear; i++){
					if(Q[i]>x){
						break;
					}
				}
				rear++;
				for(int j=(rear)+1; j>=i; j--){
					Q[j]=Q[j-1];
				}
				Q[i]=x;
			
		}
	}
}


int pqueue::dequeue(){
	int x=-1;
	if(isempty()){
		cout<<"underflow";
	}
	else{
		front++;
		x=Q[front];
	}
	return x;
}

void pqueue::display(){
	for(int i=front+1; i<=rear; i++){
		cout<<Q[i]<<" ";
	}
	cout<<endl;
}

int main(){
	pqueue q(5);
	int ans,x;
	do{
		cout<<"\nmenu:\n 1. enqueue\n 2. dequeue\n 3. isFull\n 4. isEmpty\n enter 0 to exit"<<endl;
		cin>>ans;
		switch(ans){
			case 0: cout<<"thank you"<<endl;
			break;
			case 1: cout<<"enter number: "<<endl; cin>>x; q.enqueue(x); cout<<"queue is: "; q.display();
			break;
			case 2: q.dequeue(); cout<<"queue is: ";q.display();
			break;
			case 3: cout<<"full? "<<q.isfull(); 
			break;
			case 4: cout<<"empty? "<<q.isempty(); 
			break;
			default: cout<<"invalid";
			break;
		}
	}while(ans!=0);
}
*/
