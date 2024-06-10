////********************trees basics practice
//#include<iostream>
//using namespace std; 
//
//struct tnode{
//	tnode *lchild;
//	int data;
//	tnode *rchild;
//}*root=NULL;
//
//
//struct node{
//	tnode *data; 
//	node *next;
//}*first=NULL,*rear=NULL,*top=NULL;
//
//void enqueue(tnode *x){
//	node *t;
//	t=new node;
//	if(t==NULL){
//		cout<<"overflow"<<endl;
//	}
//	else{
//		t->data=x;
//		t->next=NULL;
//		if(first==NULL){
//			first=rear=t;
//		}
//		else{
//			rear->next=t;
//			rear=t;
//		}
//	}
//}
//
//int isempty(){
//	if(first==NULL){
//		return 1;
//	}
//	return 0;
//}
//
//tnode* dequeue(){
//	if(first==NULL){
//		cout<<"underflow"<<endl;
//	}
//	else{
//		tnode *x;
//		x=new tnode;
//		x=first->data;
//		first=first->next;
//		return x;
//	}
//}
//
//void create(){
//	tnode *p, *tl, *tr;
//	p=new tnode; 
//	
//	if(root==NULL){
//		tnode *temp;
//		temp=new tnode;
//		temp->data=0;
//		temp->lchild=temp->rchild=NULL;
//		root=temp;
//	}
//	
//	int x;
//	cout<<"enter value of root: ";
//	cin>>x;
//	
//	root->data=x;
//	root->lchild=root->rchild=NULL;
//	enqueue(root);
//	
//	while(!isempty()){
//		
//		tl=new tnode;
//		tr=new tnode;
//		
//		p=dequeue();
//		cout<<"enter value of lchild of "<<p->data<<": ";
//		cin>>x;
//		if(x!=(-1)){
//			tl->data=x;
//			tl->lchild=tl->rchild=NULL;
//			p->lchild=tl;
//			enqueue(tl);
//		}
//		
//		cout<<"enter value of lchild of "<<p->data<<": ";
//		cin>>x;
//		if(x!=(-1)){
//			tr->data=x;
//			tr->lchild=tr->rchild=NULL;
//			p->rchild=tr;
//			enqueue(tr);
//		}
//	}
//}
//
//void preorder(tnode *t){
//	if(t!=NULL){
//		cout<<t->data<<" ";
//		preorder(t->lchild);
//		preorder(t->rchild);
//	}
//}
//
//void push(tnode* x){
//	node *t;
//	t=new node; 
//	t->data=x;
//	t->next=NULL;
//	if(t==NULL){
//		cout<<"overflow"<<endl;
//	}
//	else{
//		if(top==NULL){
//			top=t;
//		}
//		else{
//			t->next=top;
//			top=t;
//		}
//	}
//}
//
//tnode *pop(){
//	if(top==NULL){
//		cout<<"underflow"<<endl;
//	}
//	else{
//		tnode *x;
//		x=new tnode;
//		x=top->data;
//		top=top->next;
//		return x;
//	}
//}
//
//int isemptyS(){
//	if(top==NULL){
//		return 1;
//	}
//	return 0;
//}
//
//void ipreorder(tnode *t){
//	while(t!=NULL || !isemptyS()){
//		if(t!=NULL){
////			cout<<t->data<<" ";
//			push(t);
//			t=t->lchild;
//		}
//		else{
//			t=pop();
//			cout<<t->data<<"" "";
//			t=t->rchild;
//		}
//	}
//}
//
//int count(tnode *t){
//	int x,y; 
//	if(t!=NULL){
//		x=count(t->lchild);
//		y=count(t->rchild);
//		return x+y+1;
//	}
//	return 0;
//}
//
//int height(tnode *t){
//	int x,y; 
//	if(t!=NULL){
//		x=height(t->lchild);
//		y=height(t->rchild);
//		if(x>y){
//			return x+1;
//		}
//		else{
//			return y+1;
//		}
//	}
//	return 0;
//}
//
//void levelOrder(tnode *t){
////	cout<<t->data<<" ";
//	tnode *p;
//	p=new tnode;
//	p=t;
//	enqueue(p);
//	while(!isempty()){
//		p=dequeue();
//		cout<<p->data<<" ";
//		
//		if(p->lchild){
//			enqueue(p->lchild);
//		}
//		
//		if(p->rchild){
//			enqueue(p->rchild);
//		}
//	}
//}
//
//int main(){
//	create();
//	//preorder(root);
////	ipreorder(root);
//	//this is iterative pre order
//	levelOrder(root);
//	cout<<endl;
//	cout<<"number of nodes are: "<<count(root)<<endl;
//	cout<<"height is: "<<height(root)<<endl;
//}

//**************************BSTs
#include<iostream>
using namespace std;

struct node{
	node *lchild;
	int data; 
	node *rchild;
}*root=NULL;

node* Rinsert(node *p, int key){
	node *t;
	t=new node;
	t->data=key;
	t->lchild=t->rchild=NULL;
	
	if(p==NULL){
		p=t;
	}
	else{
		if(key<p->data){
			p->lchild=Rinsert(p->lchild, key);
		}
		else if(key>p->data){
			p->rchild=Rinsert(p->rchild, key);
		}
	}
	
	return t;
}

void insert(int key){
	node *t, *r;
	t=new node;
	r=new node;
	
	if(root==NULL){
		t->data=key;
		t->lchild=t->rchild=NULL;
		root=t;
		return;
	}
	
	t=root;
	
	while(t!=NULL){
		r=t;
		if(key<t->data){
			t=t->lchild;
		}
		else if(key>t->data){
			t=t->rchild;
		}
		else{
			return;
		}
	}
	node *p;
	p=new node;
	p->data=key;
	p->lchild=p->rchild=NULL;
	if(r->data>key){
		r->lchild=p;
	}
	else{
		r->rchild=p;
	}
}


void inorder(node *p){
	if(p){
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
	
}

node* search(int key){
	node *t;
	t=root;
	
	while(t!=NULL){
		if(key<t->data){
			t=t->lchild;
		}
		else if(key>t->data){
			t=t->rchild;
		}
		else if(key==t->data){
			return t;
		}
	}
	return NULL;
}

node* inpre(node *p){
	while(p->rchild){
		p=p->rchild;
	}
	return p;
}


node* insucc(node *p){
	while(p->lchild){
		p=p->lchild;
	}
	return p;
}

int height(node *p){
	int x,y;
	if(p){
		x=height(p->lchild);
		y=height(p->rchild);
		return x>y?x+1:y+1;
	}
}

struct node *del(struct node *p, int key){
	node *q;
	q=new node;
	
	if(p==NULL){
		return NULL;
	}
	if(!p->lchild && !p->rchild){
		if(p==root){
			root==NULL;
		}
		delete p;
		return NULL;
	}
	
		if(key<p->data){
			p->lchild=del(p->lchild, key);
		}
		else if(key>p->data){
			p->rchild=del(p->rchild, key);
		}
		else{
			if(height(p->lchild)>height(p->rchild)){
				q=inpre(p->lchild);
				p->data=q->data;
				p->lchild=del(q->lchild, q->data);
			}
			else{
				q=insucc(p->rchild);
				p->data=q->data;
				p->rchild=del(q->rchild, q->data);
			}
		}
		
}

int main(){
//	root=Rinsert(root,3);
//	Rinsert(root,2);
//	Rinsert(root,4);
//	inorder(root);

	insert(3);
	insert(1);
	insert(4);
	inorder(root);
	cout<<endl;
	
	node *temp;
	temp=search(5);
	if(temp){
		cout<<temp->data<<" found";
	}
	else{
		cout<<"not found";
	}
	
	cout<<endl;
	
	del(root,4);
	inorder(root);
}

