//********************Array Basics 
//#include<iostream>
//using namespace std; 
//int main(){
//	int n;
//	cout<<"Enter size of array: "<<endl;
//	cin>>n;
//	int A[n];
//	for(int i=0; i<n; i++){
//		A[i]=i;
//		cout<<A[i]<<endl;
//	}
//	cout<<sizeof(A);
//	return 0;
//}

//****************Structure basics 
//#include<iostream>
//using namespace std; 
//struct rect{
//	int l;
//	int b;
//	char x;
//};
//int main(){
//	struct rect r={10,5
//	};
//	r.l=15;
//	r.b=7;
//	cout<<r.l<<endl;
//	cout<<r.b<<endl;
//	cout<<sizeof(r)<<endl;
//}

//**********Pointer basics
//#include<iostream>
//using namespace std; 
//int main(){
//	int a=10;
//	cout<<"value of a: "<<a<<endl;
//	cout<<"adress of a: "<<&a<<endl;
//	int *p;
//	p=&a;
//	cout<<"adress of a: "<<p<<endl;
//	cout<<"value of a: "<<*p<<endl;
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//using namespace std; 
//int main(){
//	int n;
//	printf("Enter size of array: ");
//	scanf("%d",&n);
//	int A[n];
//	
//	printf("enter numbers in array: ");
//	for(int i=0; i<n; i++){
//		scanf("%d",&A[i]);
//	}
//	printf("Numbers are: ");
//	for(int i=0; i<n; i++){
//		printf("%d",A[i]);
//	}
//	
//	return 0;
//--------------------------------------------------------------------------
//	int *p;
//	p = (int *)malloc(5*sizeof(int));
//	for(int i=0; i<5; i++){
//		p[i]=(i+1)*5;
//		printf("The %d element is %d",i+1,p[i]);
//	}
//--------------------------------------------------------------------------
//	int *p;
//	p = new int[5];
//	for(int i=0; i<5; i++){
//		p[i]=(i+1)*5;
//		printf("The %d element is %d",i+1,p[i]);
//	}
//	
//	delete [] p;
//}

//****************Reference
//#include<iostream>
//using namespace std; 
//int main(){
//	int a=10;
//	int &r = a;
//	cout<<a<<endl<<r<<endl;
//	int b=5;
//	//assignment below
//	r=b;
//	cout<<a<<endl<<r<<endl;
//}

//****************Ptr to structure 
//#include<stdio.h>
//#include<stdlib.h>
//#include<iostream>
//using namespace std; 
//struct rect{
//	int l;
//	int b;
//};
//int main(){
////	struct rect r={10,5};
//	struct rect *p;
////	p = (struct rect *)malloc(sizeof(struct rect));
//	p = new struct rect;
////	p=&r;
//	(*p).l=100;
//	p->b=200;
//	printf("%d is l and %d is b",p->l,p->b);
//	
//	return 0;
//}

//****************Function Basics 
//#include<iostream>
//using namespace std;
//int add(int a, int b){
//	int c;
//	c=a+b;
//	return(c);
//}
//int main(){
//	int x=10, y=5, sum;
//	sum=add(x,y);
//	cout<<sum;
//	return 0;
//}
//------------------------------
//#include<iostream>
//using namespace std; 
//void swap(int *a, int *b){
//	int temp; 
//	temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int main(){
//	int x=10, y=20;
//	swap(x,y);
//	cout<<x<<endl<<y<<endl;
//	return 0;
//}

//****************Array as pointer 
//#include<iostream>
//using namespace std; 
//void fun(int *A, int n){
//	for(int i=0; i<n; i++){
//		cout<<A[i]/2<<endl;
//	}
//	cout<<sizeof(A)/sizeof(int)<<endl;
//}
//int main(){
//	int A[]={2,4,6,8,10};
//	fun(A,5);
//	for(int i=0; i<5; i++){
//		cout<<A[i]/2<<endl;
//	}
//	cout<<sizeof(A)/sizeof(int)<<endl;
//	return 0;
//}
//-----------------------------------
//#include<iostream>
//#include<stdlib.h>
//using namespace std; 
//int * fun(int size){
//	int *p;
//	p=(int *)malloc(size*sizeof(int));
//	for(int i=0; i<size; i++){
//		p[i]=(i+1)*2;
//	}
//	return p;
//}
//
//int main(){
//	int n;
//	cout<<"Enter size: "<<endl;
//	cin>>n;
//	int *A;
//	A=fun(n);
//	int j;
//	for(int j=0; j<n; j++){
//		cout<<A[j]<<endl;
//	}
//	return 0;
//}

//****************Structure as parameter 
//#include<iostream>
//using namespace std; 
//struct rect{
//	int l;
//	int b;
//};
//void fun(struct rect * r1){
//	r1->l++;
//	cout<<r1->l<<" "<<r1->b<<endl;
//}
//int main(){
//	struct rect r={10,5};
//	fun(&r);
//	cout<<r.l<<" "<<r.b<<endl;
//	return 0;
//}
//--------------------------------------
//#include<iostream>
//using namespace std; 
//struct rect{
//	int l;
//	int b;
//};
//struct rect * fun(){
//	struct rect *r; 
//	r= new rect; 
//	return r;
//}
//int main(){
//	struct rect * add;
//	add=fun();
//	cout<<add;
//	return 0;
//}

//****************OOP
//#include<iostream>
//using namespace std; 
//class rect{
//	private: 
//	int l;
//	int b;
//	public: 
//	rect(int l1, int b1){
//		l=l1;
//		b=b1;
//	}
//	int area(){
//		return l*b;
//	}
//	int perimeter(){
//		return 2*(l+b);
//	}
//};
//int main(){
//	rect r(10,5);
//	int a=r.area();
//	int peri=r.perimeter();
//	cout<<a<<endl<<peri<<endl;
//	return 0;
//}
//--------------------------------------
//#include<iostream>
//using namespace std; 
//class rect{
//	int l;
//	int b;
//	public: 
//	rect(){
//		l=b=1;
//	}
//	rect(int l1, int b1){
//		l=l1;
//		b=b1;
//	}
//	int area();
//	int peri();
//	int getlen(){
//		return l;
//	}
//	void setlen(int l1){
//		l=l1;
//	}
//	~rect();
//};
//
//	rect::area(){
//		return l*b;
//	}
//	rect::peri(){
//		return 2*(l+b);
//	}
//	rect::~rect(){
//		cout<<"destructor";
//	}
//	
//int main(){
//	rect r(10,5);
//	cout<<r.area()<<endl;
//	cout<<r.peri()<<endl;
//	r.setlen(20);
//	cout<<r.getlen();
//	return 0;
//}

//****************Template classes
//#include<iostream>
//using namespace std; 
//template<class t>
//class arith{
//	t a;
//	t b; 
//	public: 
//	arith(t a, t b);
//	t add();
//}; 
//
//template<class t>
//arith<t>::arith(t a, t b){
//	this->a=a;
//	this->b=b;
//}
//
//template<class t> 
//t arith<t>::add(){
//	t c;
//	c=a+b;
//	return c;
//}
//
//int main(){
//	arith<float> a(10.99,5.44);
//	cout<<a.add();
//	return 0;
//}

//****************Debugger in Dev-C++
//#include<iostream>
//using namespace std;
//int main(){
//	int sum=0;
//	int a[]={2,4,6,8,10};
//	for(int i=0; i<5; i++){
//		sum=sum+a[i];
//	}
//	cout<<sum<<endl;
//	return 0;
//}

//*********************Recursion
//#include<iostream>
//using namespace std;
//void fun(int n){
//	if(n>0){
//	cout<<n<<" ";
//	fun(n-1);
//	}
//}
//int main(){
//	int x=3;
//	fun(x);
//	return 0;
//}

//****************Static variables in recursion
//#include<iostream>
//using namespace std; 
//int x=0;
//int fun(int n){
//	
//	if(n>0){
//		x++;
//		return fun(n-1)+x;
//	}
//	return 0;
//}
//
//int main(){
//	int a=5;
//	cout<<fun(a)<<endl;
//	cout<<fun(a)<<endl;
//	return 0;
//}

//****************Tree Recursion
//#include<iostream>
//using namespace std; 
//void fun(int n){
//	if(n>0){
//		cout<<n<<" ";
//		fun(n-1);
//		fun(n-1);
//	}
//}
//
//int main(){
//	int a=3;
//	fun(3);
//	return 0;
//}

////****************Indirect recursion 
//#include<iostream>
//using namespace std; 
//void funb(int n);
//void funa(int n){
//	if(n>0){
//		cout<<n<<" ";
//		funb(n-1);
//	}
//}
//void funb(int n){
//	if(n>1){
//		cout<<n<<" ";
//		funa(n/2);
//	}
//}
//int main(){
//	int a=20;
//	funa(a);
//	return 0;
//}

////****************nested recursion 
//#include<iostream>
//using namespace std;
//int fun(int n){
//	if(n>100)
//	return n-10;
//	else
//	return fun(fun(n+11));
//}
//int main(){
//	cout<<fun(102);
//	return 0;
//}

//***************sum of n natural numbers 
//#include<iostream>
//using namespace std; 
//int fun(int n){
//	int sum=n;
//	if(n>0){
//		
//		sum=n+fun(n-1);
//		return sum;
//	}
//	if(n==0)
//	return 0;
//
//}
//int main(){
//	cout<<fun(5);
//	return 0;
//}

////****************factorial using recursion 
//#include<iostream>
//using namespace std; 
//int fun(int n){
//	int pro=n;
//	if(n>0){
//		
//		pro=n*fun(n-1);
//		
//		return pro;
//	}
//	if(n==0)
//	return 1;
//
//}
//int main(){
//	cout<<fun(5);
//	return 0;
//}

////****************power of a number using recursion 
//#include<iostream>
//using namespace std; 
//int fun(int n){
//	int p=2;
//	int m=2;
//	if(n>0){
//		p=m*fun(n-1);
//		return p;
//	}
//	if(n==0)
//	return 1;
//}
//int fun1(int m, int n){
//	if(n==0){
//		return 1;
//	}
//	if(n%2==0){
//		return fun1(m*m,n/2);
//	}
//	else{
//		return m*fun1(m*m, (n-1)/2);
//	}
//}
//
//int main(){
//	cout<<fun(5)<<endl;
//	cout<<fun1(3,4); 
//}

////****************Taylor series using recursion 
//#include<iostream>
//using namespace std; 
//double e(int x, int n){
//	static double p=1;
//	static double f=1; 
//	float r; 
//	if(n==0){
//		return 1;
//	}
//	if(n>0){
//		r=e(x,n-1);
//		p=p*x;
//		f=f*n;
//		return r+(p/f);
//	}
//}
//
//int main(){
//	cout<<e(1,10);
//}

////****************Taylor series using horner's rule 
//#include<iostream>
//using namespace std; 
//double fun (double x, double n){
//	static double i=1;
//	static double p=n;
//	if(i==(p+1)){
//		return 1;
//	}
//	if(i<(p+1)){
//		
//		return (1+(x/i)*fun(x,i++));
//	}
//}
//int main(){
//	cout<<fun(2,20);
//}
//--------------------------------
//#include<iostream>
//using namespace std; 
//double e(double x, double n){
//	static double s=1;
//	if(n==0)
//	return s;
//	else 
//	s=1+(x/n)*s;
//	return e(x,n-1);
//}
//
//int main(){
//	cout<<e(2,20);
//}

//////****************fibonacci series using recursion 
//#include<iostream>
//using namespace std; 
//int fun(int n){
//	static int x;
//
//	if(n==0)
//	return 0;
//	else if(n==1)
//	return 1;
//	else
//	return fun(n-2)+fun(n-1);
//}
//int f[7]={};
//int mfib(int n){
//	if(n<=1){
//		f[n]=n; 
//		return n; 
//	}
//	else{
//		if(f[n-2]==-1){
//			f[n-2]=mfib(n-2);
//		}
//		if(f[n-1]==-1){
//			f[n-1]=mfib(n-1);
//		}
//		return mfib(n-1)+mfib(n-2);
//	}
//}
//
//int main(){
//	int t0=0, t1=1, s,m=7;
//	for(int i=0; i<m-1; i++){
//		s=t0+t1;
//		t0=t1;
//		t1=s;
//	}
//	cout<<t1<<endl;
//	cout<<fun(7)<<endl;
//	
//		for(int i=0; i<m; i++){
//		f[i]=-1;
//	}
//	cout<<mfib(6)<<endl;
//}

//////****************Combination nCr using recursion
//#include<iostream>
//using namespace std;
//int fun2(int x); 
//float fun1(int n, int r){
//	int num, den1, den2;
//	if(r==0 || r==n){
//		return 1;
//	}
//	else if(r>n){
//		cout<<"error";
//	}
//	else{
//		num=fun2(n);
//		den1=fun2(r);
//		den2=fun2(n-r);
//		return (num/(den1*den2));
//	}
//}
//
//int fun2(int x){
//	if(x==0){
//		return 1;
//	}
//	else
//	return x*fun2(x-1);
//}
//
//int main(){
//	cout<<fun1(5,4);
//}
//---------------------------------
//#include<iostream>
//using namespace std; 
//int fun(int n, int r){
//	if(r==0 || r==n){
//		return 1;
//	}
//	else
//	return (fun(n-1, r-1)+fun(n-1,r));
//}
//int main(){
//	cout<<fun(5,3);
//}

//////****************Tower of Hanoi using recursion 
//#include<iostream>
//using namespace std; 
//toh(int n, int a, int b, int c){
//	if(n>0){
//	toh(n-1,a,c,b);
//	cout<<a<<" "<<c<<endl;
//	toh(n-1,b,a,c);
//}
//}
//int main(){
//	toh(3,1,2,3);
//	return 0;
//}

//****************Increasing Size of Array 
//#include<iostream>
//using namespace std; 
//int main(){
//	int *p;
//	p = new int[5];
//	for(int i=0; i<5; i++){
//		p[i]=i+1;
//	}
//	for(int i=0; i<5; i++){
//		cout<<p[i]<<endl;
//	}
//	int *q;
//	q = new int[10];
//	for(int i=0; i<5; i++){
//		q[i]=p[i];
//	}
//	delete [] p;
//	p=q;
//	q=NULL;
//	for(int i=0; i<5; i++){
//		cout<<p[i]<<endl;
//	}
//	return 0;
//}

//****************2D Arrays
//#include<iostream>
//using namespace std; 
//int main(){
//	int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,7,9}};
//	int i,j; 
//
//	int *B[3];
//	B[0]= new int[4];
//	B[1]= new int[4];
//	B[2]= new int[4];
//	
//	int **C;
//	C = new int *[3]; 
//	C[0]=new int[4];
//	C[1]=new int[4];
//	C[2]=new int[4];
//	
//		for(i=0; i<3; i++){
//		for(j=0; j<4; j++){
//			cout<<C[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	
//}

//****************Array ADT 
//#include<iostream>
//using namespace std; 
//struct array{
//	int *a; 
//	int size; 
//	int length;
//};
//int main(){
//	struct array arr;
//	cout<<"Enter size: "<<endl;
//	cin>>arr.size;
//	arr.a = new int[arr.size];
//	int n, i;
//	cout<<"enter no of nos: "<<endl;
//	cin>>n; 
//	arr.length=n; 
//	
//	cout<<"enter nos: "<<endl; 
//	for(i=0; i<arr.length; i++){
//		cin>>arr.a[i];
//	}
//	for(i=0; i<arr.length; i++){
//		cout<<arr.a[i]<<endl;
//	}
//	return 0;
//}
//-------------------------------
//#include<iostream>
//using namespace std; 
//struct array{
//	int a[10]; 
//	int size; 
//	int length;
//};
//void display(array arr){
//	for(int i=0; i<arr.length; i++){
//		cout<<arr.a[i]<<" ";
//	}
//}
//
//void add(array *arr, int x){
//	if(arr->length < arr->size){
//		arr->a[arr->length++]=x;
//	}
//}
//
//void insert(array *arr, int index, int x){
//	int i;
//	if(index>=0 && index<=arr->length){
//		for(i=arr->length; i>index; i--){
//			arr->a[i]=arr->a[i-1];
//		}
//		arr->a[index]=x;
//		arr->length++;
//	}
//}
//
//void del(array *arr, int index){
//	if(index>=0 && index<arr->length){
//		int i; 
//		for(i=index; i<((arr->length)-1); i++){
//			arr->a[i]=arr->a[i+1];
//		}
//		arr->length--;
//	}
//}
//
//int linearSearch(array *arr, int key){
//	int i;
//	for(i=0; i<(arr->length); i++){
//		if(key==(arr->a[i])){
//			//swap(arr->a[i], arr->a[0]);
//			return i;
//		}
//	}
//	return -1;
//}
//
//void swap(int *x, int *y){
//	int temp; 
//	temp=*x; 
//	*x=*y; 
//	*y=temp; 
//}
//
//int binarySearch(array arr, int key){
//	int l=0;
//	int h=arr.length-1;
//	int mid;
//	while(l<=h){
//		mid=(l+h)/2;
//		if(key==arr.a[mid]){
//			return mid;
//		}
//		else if(key<arr.a[mid]){
//			h=mid-1;
//		}
//		else 
//		l=mid+1;
//	}
//	return -1;
//}
//
//int rBinarySearch(int a[], int l, int h, int key){
//	
//while (l<=h){
//	int mid = (l+h)/2;
//	if (key==a[mid]){
//			return mid;
//		}
//		else if(key<a[mid])
//		{
//			rBinarySearch(a, l, mid-1, key);
//		}
//		else
//		rBinarySearch(a, mid+1, h, key);
//	}
//	return -1;
//}
//
//int get(array arr, int index){
//	if(index>=0 && index<arr.length){
//		return arr.a[index];
//	}
//	else 
//	return -1;
//}
//
//void set(array *arr, int index, int x){
//	if(index>=0 && index<arr->length){
//		arr->a[index]=x;	
//	}
//}
//
//int max(array arr){
//	int max;
//	max=arr.a[0];
//	for(int i=0; i<arr.length; i++){
//		if(arr.a[i]>max){
//			max=arr.a[i];
//		}
//	}
//	return max;
//}
//
//int min(array arr){
//	int min; 
//	min=arr.a[0];
//	for(int i=0; i<arr.length; i++){
//		if(arr.a[i]<min){
//			min=arr.a[i];
//		}
//	}
//	return min;
//}
//
//int sumArray(array arr){
//	int i, sum=0; 
//	for(i=0; i<arr.length; i++){
//		sum=sum+arr.a[i];
//	}
//	return sum;
//}
//
//int rSumArray(array arr, int n){
//	int sum=0; 
//	if(n<0){
//		return 0;
//	}
//	if(n>=0){
//		sum= arr.a[n]+ rSumArray(arr,n-1);
//	}
//	
//	return sum;
//}
//
//int avgArray(array arr){
//	
//	return sumArray(arr)/(arr.length);
//}
//
//void reverse(array *arr){
//	////method1
////	int *b;
////	b = new int[arr->length];
////	int i,j;
////	for(i=arr->length-1, j=0; i>=0; i--, j++){
////		b[j]=arr->a[i];
////	}
////	for(i=0; i<arr->length; i++){
////		arr->a[i]=b[i];
////	}
//
//	////method2
//	int i,j;
//	for(i=0, j=arr->length-1; i<j; i++, j--){
//		int temp; 
//		temp=arr->a[i];
//		arr->a[i] = arr->a[j];
//		arr->a[j]=temp;
//	}
//}
//
//int  insertInSorted(array *arr, int x){
//	arr->length++;
//	int i=arr->length-2;
//	while(arr->a[i]>x){
//		arr->a[i+1]=arr->a[i];
//		i--;
//	}
//	arr->a[i+1]=x;
//}
//
//void checkIfSorted(array arr){
//	int count=0;
//	for(int i=0; i<arr.length-1; i++){
//		if(arr.a[i+1]>arr.a[i]){
//			count++;
//		}
//	}
//	if(count==arr.length-1){
//		cout<<"sorted"<<endl;
//	}
//	else
//	cout<<"not sorted"<<endl;
//}
//
//void negLeft(array *arr){
//	int i=0;
//	int j= arr->length-1;
//	while(i<j){
//		while(arr->a[i]<0){
//			i++;
//		}
//		while(arr->a[j]>=0){
//			j--;
//		}
//		if(i<j)
//		swap(arr->a[i],arr->a[j]);
//	}
//}
//
////void merge(array arr1, array arr2){
////	int i=0,j=0,k=0; 
////	int arr3[arr1.length+arr2.length];
////	for(int k=0; k<(arr1.length + arr2.length); k++){
////		if(arr1.a[i]<arr2.a[j]){
////			arr3[k]=arr1.a[i];
////			i++;
////		}
////		else {
////			arr3[k]=arr2.a[j];
////			j++;
////		}
////		
////	}
////	
////	for(; i<arr1.length; i++){
////		arr3[k++]=arr1.a[i++];
////	
////	}
////	
////	for(; j<arr2.length; j++){
////		arr3[k++]=arr2.a[j++];
////		
////	}
////	
////	for(int k=0; k<(arr1.length + arr2.length); k++){
////		
////		cout<<arr3[k]<<endl;
////	}
////	
////}
//
//struct array* merge(array arr1, array arr2){
//	int i,j,k; 
//	i=j=k=0; 
//	struct array *arr3;
//	arr3 = new array;
//	arr3->length = arr1.length + arr2.length; 
//	arr3->size = 10;
//	while(i<arr1.length && j<arr2.length){
//		if(arr1.a[i]<arr2.a[j]){
//			arr3->a[k++] = arr1.a[i++];
//		}
//		else{
//			arr3->a[k++]=arr2.a[j++];
//		}
//	}
//	
//	for(; i<arr1.length; i++)
//		arr3->a[k++]=arr1.a[i++];
//		
//	for(; j<arr1.length; j++)
//		arr3->a[k++]=arr2.a[j++];
//		
//	return arr3;
//}
//
//struct array* Union(array arr1, array arr2){
//	int i,j,k; 
//	i=j=k=0; 
//	struct array *arr3;
//	arr3 = new array;
//
//	while(i<arr1.length && j<arr2.length){
//		if(arr1.a[i]<arr2.a[j]){
//			arr3->a[k++] = arr1.a[i++];
//		}
//		else if(arr1.a[i]==arr2.a[j]){
//			arr3->a[k++]=arr2.a[j++];
//			i++;
//		}
//		else{
//			arr3->a[k++]=arr2.a[j++];
//		}
//	}
//	
//	for(; i<arr1.length; i++)
//		arr3->a[k++]=arr1.a[i++];
//		
//	for(; j<arr1.length; j++)
//		arr3->a[k++]=arr2.a[j++];
//		
//	arr3->length = k; 
//	arr3->size = 10;
//	return arr3;
//}
//
//struct array* Intersection(array arr1, array arr2){
//	int i,j,k; 
//	i=j=k=0; 
//	struct array *arr3;
//	arr3 = new array;
//
//	for(i=0; i< arr1.length; i++){
//		for(j=0; j< arr2.length; j++){
//			if(arr1.a[i]==arr2.a[j]){
//				arr3->a[k++]=arr1.a[i];
//			}
//		}
//	}
//		
//	arr3->length = k; 
//	arr3->size = 10;
//	return arr3;
//}
//
//
//struct array* difference(array arr1, array arr2){
//	int i,j,k; 
//	i=j=k=0; 
//	struct array *arr3;
//	arr3 = new array;
//	arr3->length = arr1.length + arr2.length; 
//	arr3->size = 10;
//	while(i<arr1.length && j<arr2.length){
//		if(arr1.a[i]<arr2.a[j]){
//			arr3->a[k++] = arr1.a[i++];
//		}
//		else if(arr1.a[i]==arr2.a[j]){
//			j++;
//			i++;
//		}
//		else{
//			j++;
//		}
//	}
//	
//	for(; i<arr1.length; i++)
//		arr3->a[k++]=arr1.a[i++];
//		
//	return arr3;
//}
//
//
//int main(){
//	struct array arr={{2,4,5,9,10},10,5};
//	struct array arr2={{1,3,4,9,12},10,5};
//	struct array *arr3;
////	add(&arr, 12);
////	insert(&arr, 3, 14);
////	del(&arr, 3);
////	//delete
////	cout<<"linear search: "<<linearSearch(&arr, 6)<<endl;
////	cout<<"binary search: "<<binarySearch(arr, 6)<<endl;
////	cout<<arr.length<<endl;
//
////	int temp=rBinarySearch(arr.a, 0, arr.length, 6);
////	cout<<"recursive binary search: "<<temp<<endl;
//
////	cout<<get(arr, 4)<<endl;
////	set(&arr, 2, 20);
////	cout<<max(arr)<<endl;
////	cout<<min(arr)<<endl;
////	cout<<sumArray(arr)<<endl;
////	cout<<rSumArray(arr, arr.length)<<endl;
////	cout<<avgArray(arr)<<endl;
////	reverse(&arr);
////	insertInSorted(&arr, 12);
////	checkIfSorted(arr);
////	negLeft(&arr);
////	arr3 = merge(arr, arr2);
////	arr3 = Union(arr, arr2);
////	arr3 = Intersection(arr, arr2);
//	arr3 = difference(arr, arr2);
//	display(*arr3);
//	return 0;
//}

//****************Student challenge: missing element in array 
//#include<iostream>
//using namespace std; 
//
//int sum1(int n, int *a){
//	int p=0;
//	if(n>=0)
//	p = a[n]+sum1(n-1,a);
//	return p;
//	if(n==-1)
//	return 0;
//	
//}
//int main(){
//	int a[5]={1,2,3,4,6};
//	int n;
//	n=a[4];
//	int sum = n*(n+1)/2;
////	int sum2=0;
////	for(int i=0; i<n; i++){
////		sum2=sum2+a[i];
////	}
////	cout<<"missing: "<<sum-sum2<<endl;
//
//int *p=a;
//	cout<<"missing: "<<sum-sum1(4,p);
//}
//-----------------if array does not start from 0
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={2,3,4,6,7,13};
//	int l=a[0];
//	int h=a[5];
//	int diff=l-0; 
//	for(int i=0; i<6; i++){
//		if(a[i]-i!=diff){
//			cout<<"missing: "<<i+diff<<endl;
//			diff++;
//			if((i+diff)!=a[i-1]+1){
//				for(int j=0; j<(a[i]-(i+diff)); j++){
//					cout<<"missing: "<<(i+diff)+j<<endl;
//				}
//			}
//		}
//	}
//}

//****************missing element in unsorted array 
//recheck 
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={2,3,4,6,7,10};
//	int l=a[0];
//	int h=a[5];
//	int *p; 
//	p=new int[12];
//	for(int i=0; i<(11); i++){
//		p[i]=0;
//	}
//	for(int j=0; j<(11); j++){
//		int k=a[j];
//		p[k]++;
//	}
//	for(int m=0; m<(11); m++){
//		cout<<p[m]<<endl;
//	}
//	
//	for(int n=l; n<(11); n++){
//		if(p[n]==0){
//			cout<<"missing: "<<n<<endl;
//		}
//	}
//	delete []p;
//}

//****************finding and counting duplicates in a sorted array 
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={4,6,6,7,8,8,8,8,9};
//	int lastDupl=-1;
//	for(int i=1; i<9; i++){
//		if(a[i]==a[i-1] && a[i]!=lastDupl){
//			cout<<"duplicate: "<<a[i]<<endl;
//			lastDupl=a[i];
//		}
//	}
//}
//------------------------------------
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={4,6,6,7,8,8,8,8,9};
//	int lastDupl=-1;
//	for(int i=0; i<9; i++){
//			if(a[i]==a[i-1] && a[i]!=lastDupl){
//			cout<<"duplicate: "<<a[i]<<endl;
//			lastDupl=a[i];
//			int j=i;
//			while(a[i]==a[j]){
//				j++;
//			}
//			cout<<"count: "<<j-i+1<<endl;
//		}
//	}
//}

//****************find suplicates in an unsorted array 
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={9,6,6,8,8,4,8,8,7};
//	for(int i=0; i<9; i++){
//		int count=0;
//		for(int j=i; j<9; j++){
//			if(a[j]==a[i]){
//			
//				count++;
//			}
//		}
//		if(count>1)
//		cout<<"count: "<<count<<" for "<<a[i]<<endl;
//	}
//}

//****************pair of elements with sum=k
//#include<iostream>
//using namespace std; 
//int main(){
//	int a[]={6,3,8,10, 16,7,5,2,9,14};
//	int sum=10;
//	int pair=0;
//	for(int i=0; i<10; i++){
//		for(int j=i+1; j<10; j++){
//			if(a[j]==(sum-a[i])){
//				pair++;
//			}
//		}
//	}
//	cout<<pair;
//}

//reversing a string 
//#include<iostream>
//using namespace std; 
//int main(){
//	char a[]="python";
//	char b[7];
//	int count=0;
//	for(int i=0; a[i]!='\0'; i++){
//		count++;
//	}
//	count-=1;
//	int j,k;
//	for(j=count, k=0; j>=0; j--,k++){
//		b[k]=a[j];
//	}
//	
//	for(int m=0; a[m]!='\0'; m++){
//		a[m]=b[m];
//	}
////	for(int n=0; n<7; n++){
////		cout<<a[n];
////	}
//cout<<a;
//}

//****************comparing strings 
//#include<iostream>
//using namespace std; 
//int main(){
//	char a[]="painter";
//	char b[]="painter";
//	int count=0;
//	int i,j;
//	i=j=0;
//	for(i=0; b[i]!='\0';i++){
//	}
//	for(j=0; a[j]!='\0'; j++){
//	}
//	if(i==j){
//		for(int k=0; k<i; k++){
//			if(a[k]==b[k]){
//				count++;
//			}
//		}
//		if(count==(i)){
//			cout<<"equal"<<endl;
//		}
//	}
//	else{
//		cout<<"not equal"<<endl;
//	}
//	return 0;
//}
//-----------------------------
//#include<iostream>
//using namespace std; 
//int main(){
//	 char a[]="finding";
//	int h[26];
//	int i=0;
//	for(i=0; i<26; i++){
//		h[i]=0;
//	}
//	int j=0;
//	for(j=0; a[j]!='\0';j++){
//		h[a[j]-97]++;
//	}
//	for(i=0; i<26; i++){
//		if(h[i]>1){
//			cout<<i+97<< " was present "<<h[i]<<" times "<<endl;
//		}
//	}
//}

//****************check if string is anagram 
//#include<iostream>
//using namespace std; 
//int main(){
//	char a[]="decimal";
//	char b[]="medical";
//	int i,j;
//	int count1, count2=0;
//	for(i=0; a[i]!='\0';i++){
//		count1=0;
//		for(j=0; b[j]!='\0';j++){
//			if(a[i]==b[j]){
//				count1++;
//			}
//		}
//		
//		if(count1==1){
//			count2++;
//		}
//	}
//	if(count2==i){
//		cout<<"anagram"<<endl;
//	}
//	else{
//		cout<<"not";
//	}
//}

//****************diagonal matrices 
//#include<iostream>
//using namespace std; 
//class matrix{
//	private: 
//	int *a;
//	int n; 
//	public: 
//	matrix(){
//		n=2; 
//		a=new int[2];
//	}
//	matrix(int n){
//		this->n=n; 
//		a=new int[n];
//	}
//	void set(int i, int j, int x);
//	int get(int i, int j);
//	void display();
//	~matrix(){
//		delete []a;
//	}
//};
//
//void matrix::set(int i, int j, int x){
//	if(i==j){
//		a[i-1]=x;
//	}
//}
//
//int matrix::get(int i, int j){
//	if(i==j){
//		return a[i-1];
//	}
//	else{
//		return 0;
//	}
//}
//
//void matrix::display(){
//	int i,j; 
//	for(i=1; i<=n; i++){
//		for(j=1; j<=n; j++){
//			if(i==j){
//				cout<<a[i-1]<<" ";
//			}
//			else
//			cout<<"0 ";
//		}
//		cout<<endl;
//	}
//}
//
//int main(){
//	matrix m(4);
//	m.set(1,1,5); m.set(2,2,7); m.set(3,3,8); m.set(4,4,9);
//	m.display();
//	cout<<m.get(2,2);
//}

//lower triangular matrix
//#include<iostream>
//using namespace std; 
//class matrix{
//	private: 
//	int *a;
//	int n; 
//	public: 
//	matrix(){
//		n=2; 
//		a=new int[n*(n+1)/2];
//	}
//	matrix(int n){
//		this->n=n; 
//		a=new int[n*(n+1)/2];
//	}
//	void set(int i, int j, int x);
//	int get(int i, int j);
//	void display();
//	~matrix(){
//		delete []a;
//	}
//};
//
//void matrix::set(int i, int j, int x){
//	if(i>=j){
//		a[n*(j-1)-(j-1)*(j-2)/2 + (i-j)]=x;
//	}
//}
//
//int matrix::get(int i, int j){
//	if(i>=j){
//		return a[n*(j-1)-(j-1)*(j-2)/2 + (i-j)];
//	}
//	else{
//		return 0;
//	}
//}
//
//void matrix::display(){
//	int i,j; 
//	for(i=1; i<=n; i++){
//		for(j=1; j<=n; j++){
//			if(i>=j){
//				cout<<a[n*(j-1)-(j-1)*(j-2)/2 + (i-j)]<<" ";
//			}
//			else
//			cout<<"0 ";
//		}
//		cout<<endl;
//	}
//}
//
//int main(){
//	int d;
//	cout<<"enter dim: "; 
//	cin>>d;
//	matrix m(d);
//	int ans; 
//	cout<<"enter numbers: ";
//	for(int i=1; i<=d; i++){
//		for(int j=1; j<=d; j++){
//			cin>>ans;
//			m.set(i,j,ans);
//		}
//	}
//	m.display();
//	
//}

//****************array representation of matrix 
//#include<iostream>
//using namespace std; 
//struct element{
//	int i; 
//	int j; 
//	int x; 
//};
//struct sparse{
//	int m; 
//	//number of rows
//	int n; 
//	//number of columns
//	int num; 
//	//number of non zero elements
//	struct element *e;
//};
//void create(struct sparse *s){
//	int i;
//	cout<<"enter dimensions: ";
//	cin>>s->m>>s->n;
//	cout<<"enter number of non zero elements: ";
//	cin>>s->num; 
//	s->e = new element[s->num];
//	cout<<"Enter all numbers: ";
//	for(i=0; i<s->num; i++){
//		cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
//	}
//}
//
//void display(struct sparse s){
//	int i,j,k=0;
//	for(i=1; i<=s.m; i++){
//		for(j=1; j<=s.n; j++){
//			if(i==s.e[k].i && j==s.e[k].j)
//			cout<<s.e[k++].x<<" ";
//			else
//			cout<<"0 ";
//		}
//		cout<<endl;
//	}
//}
//
//sparse * add(sparse *s1, sparse *s2){
//	struct sparse *s3;
//	s3 = new sparse;
//	if(s1->m == s2->m && s1->n == s2->n){
//	s3->e = new element[s1->num + s2->num];
//	int i,j,k=0;
//
//	while(i<s1->num && j<s2->num){
//		if(s1->e[i].i < s2->e[j].i){
//			s3->e[k++] = s1->e[i++];
//		}
//		else if(s1->e[i].i > s2->e[j].i){
//			s3->e[k++] = s2->e[j++];
//		}
//		else{
//			if(s1->e[i].j < s2->e[j].j){
//				s3->e[k++] = s1->e[i++];
//			}
//			else if(s1->e[i].j > s2->e[j].j){
//				s3->e[k++] = s2->e[j++];
//			}
//			else{
//				s3->e[k]=s1->e[i];
//				s3->e[k++].x = s1->e[i++].x+s2->e[j++].x;
//			}
//		}
//	}
//	
//	for(; i<s1->num; i++) s3->e[k++]=s1->e[i];
//	for(; j<s1->num; j++) s3->e[k++]=s2->e[j];
//	s3->m = s1->m; 
//	s3->n = s1->n;
//	s3->num=k;
//} 
//
//	return s3;
//}
//
//
//int main(){
//	struct sparse s1;
//	create(&s1);
//	cout<<"s1: "<<endl;
//	display(s1);
//	struct sparse s2; 
//	create(&s2);
//		cout<<"s2: "<<endl;
//	display(s2);
//	struct sparse *s3; 
//	s3=add(&s1,&s2);
//
//
//	cout<<"s3: "<<endl;
//	display(*s3);
//}

//****************Polynomials 
//#include<iostream>
//#include<math.h>
//using namespace std; 
//struct Term{
//	int coeff; 
//	int Exp;
//};
//struct Poly{
//	int n; 
//	//total terms
//	Term *t;
//};
//
//int main(){
//	struct Poly p;
//	int i;
//	cout<<"enter number of non-zero terms: "; 
//	cin>>p.n;
// 	p.t = new Term[p.n];
//	//creating polynomial
//	cout<<"enter coeff and exp values: "; 
//	for(i=0; i<p.n; i++){
//		cin>>p.t[i].coeff>>p.t[i].Exp;
//	}
//
//
//	//evaluating for certain value of x
//	int x=5; 
//	int sum=0;
//	for(i=0; i<p.n; i++){
//		sum=sum+p.t[i].coeff*pow(x, p.t[i].Exp);
//	}
//	
//	cout<<sum;
//}
//
//----------------------------------------------
//#include<iostream>
//#include<math.h>
//using namespace std;
//struct Term{
//	int coeff; 
//	int Exp;
//};
//struct Poly{
//	int n; 
//	//total terms
//	Term *t;
//};
//
//void create(Poly *p){
//	cout<<"enter no of terms: ";
//	cin>>p->n;
//	p->t= new Term[p->n];
//	cout<<"enter coeff and exp: ";
//	for(int i=0; i<p->n; i++){
//		cin>>p->t[i].coeff>>p->t[i].Exp;
//	}
//}
//
//void display(Poly p){
//	int i;
//	for(i=0; i<p.n; i++){
//		cout<<p.t[i].coeff<<"x"<<p.t[i].Exp<<" + ";
//	}
//	cout<<endl;
//}
//
//struct Poly* add(Poly *p1, Poly *p2){
//	struct Poly *p3;
//	p3 = new Poly;
//	p3->t = new Term[p1->n + p2->n];
//	int i,j,k;
//	i=j=k=0;
//	
//	while(i<p1->n && j<p2->n){
//		if(p1->t[i].Exp > p2->t[j].Exp)
//			p3->t[k++] = p1->t[i++];
//		else if(p1->t[i].Exp < p2->t[j].Exp)
//			p3->t[k++] = p2->t[j++];
//		else {
//			p3->t[k].Exp = p2->t[j].Exp;
//			p3->t[k++].coeff = p1->t[i++].coeff + p2->t[j++].coeff;
//		}
//	}
//	
//	for(;i<p1->n;i++) p3->t[k++]=p1->t[i];
// 	for(;j<p2->n;j++)p3->t[k++]=p2->t[j];
// 	
// 	p3->n=k;
// 	return p3;
//}
//
//int main(){
//	struct Poly p1;
//	create(&p1);
//	display(p1);
//	struct Poly p2;
//	create(&p2);
//	display(p2);
//	
//	struct Poly *p3;
//	p3 = add(&p1, &p2);
//	display(*p3);
//}

////****************Linked list 
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data; 
//	struct node*next;
//}*second = NULL, *second=NULL, *third=NULL; 
//
//void create(int a[], int n){
//	int i;
//	struct node*t, *last; 
//	second=new Node;
//	second->data=a[0];
//	second->next=NULL;
//	last=second;
//	
//	for(i=1; i<n; i++){
//		t= new Node; 
//		t->data=a[i];
//		t->next=NULL;
//		last->next=t;
//		last=t;
//	}
//}
//
//void create2(int a[], int n){
//	int i;
//	struct node*t, *last; 
//	second=new Node;
//	second->data=a[0];
//	second->next=NULL;
//	last=second;
//	
//	for(i=1; i<n; i++){
//		t= new Node; 
//		t->data=a[i];
//		t->next=NULL;
//		last->next=t;
//		last=t;
//	}
//}
//
//void display(struct node*p){
//	while(p!=0){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//void rDisplay(struct node*p){
//	if(p!=0){
//		cout<<p->data<<" ";
//		rDisplay(p->next);
//	}
//}
//
//void counter(struct node*p){
//	int count=0;
//	while(p!=0){
//		count++;
//		p=p->next;
//	}
//	cout<<count;
//}
//
//int rCounter(struct node*p){
//	if(p==0){
//		return 0;
//	}
//	else{
//		return 1+rCounter(p->next);
//	}
//}
//
//int sum(struct node*p){
//	int sum1=0;
//	while(p!=0){
//		sum1 = sum1 + p->data;
//		p=p->next;
//	}
//	return sum1;
//}
//
//int rSum(struct node*p){
//	int sum1=0;
//	if(p==0) return 0;
//	else
//	return p->data + rSum(p->next);
//	return sum1;
//}
//
//int max(struct node*p){
//	int max=-32768;
//	while(p){
//		if(max<p->data){
//			max=p->data;
//		}
//	}
//	return max;
//}
//
//int rMax(node*p){
//	int max=-32768;
//	int x=0;
//	if(!p)
//	return max;
//	else{
//		x=rMax(p->next);
//		if(x>p->data)
//			return x;
//		else
//			return p->data;	
//	}
//	
//}
//
//int search(node*p, int x){
//	int i=0;
//	while(p){
//		if(p->data==x){
//			return i;
//		}
//		i++;
//		p=p->next;
//	}
//	return 0;
//}
//
//int rSearch(node*p, int x){
//	static int i=0;
//	if(p==0){
//		return -1;
//	}
//	else{
//		if(x==p->data){
//			return i;
//		}
//		else{
//			i++;
//			return rSearch(p->next,x);
//		}
//	}
//}
//
//int optSearch(node*p, int x){
//
//	struct node*q=NULL;
//	q=p;
//	int i=0;	
//	while(p){
//		if(x==p->data){
//				if(i<=4){
//				q->next=(p->next);
//				p->next = second;
//				second=p;
//				}
//			return i;
//		}
//		else{
//			i++;
//			q=p;
//			p=p->next;
//		}
//	}
//
//}
//
//void insert(struct node*p, int index, int x){
//	node*t, *P;
//	if(index==0){
//		t= new Node; 
//		t->data=x;
//		t->next=second;
//		second=t;
//	}
//	else if(index>0){
//		p=second;
//		int i;
//		for(i=0; i<index-1 && p; i++){
//			p=p->next;
//		}
//		if(p){
//			t=new Node; 
//			t->data=x;
//			t->next=p->next; 
//			p->next=t;
//		}
//	}
//}
//
//void insertLast(struct node*p,int x){
//	node*t, *last;
//	t=new Node;
//	last=new Node;
//	last=second;
//	for(int i=0; i<4; i++){
//		last=last->next;
//	}
//	t->data=x;
//	t->next=NULL;
//	if(second==NULL){
//		second=last=t;
//	}
//	else{
//		last->data=x;
//		last->next=t;
//		last=t;
//	}
//}
//
//void insertSorted(struct node*p, int x){
//	node*q;
//	q=new Node;
//	q=p;
//	while(p!=NULL){
//		if(p->data < x){
//			q=p;
//			p=p->next;
//		}
//		else {
//			node*t;
//			t= new Node;
//			t->data=x;
//			t->next=p;
//			q->next=t;
//			
//			break;
//		}
//	}
//	
//}
//
//void deletesecond(struct node*p){
//	node*q;
//	q=new Node;
//	q=p;
//	p=p->next;
//	second=p;
//	int x;
//	x=q->data;
//	delete q;
//}
//
//void delPosn(struct node*p, int x){
//	if(x!=1){
//	node*q;
//	p=second;
//	q=new Node;
//	for(int i=0; i<x-1 && p; i++){
//		q=p;
//		p=p->next;
//	}
//	if(p){
//		q->next=p->next; 
//		delete p;
//	}
//}
//}
//
//int checkSort(struct node*p){
//	int x=-32768;
//	while(p){
//		if(x<p->data){
//			x=p->data;
//		}
//		else{
//			return 0;
//		}
//		p=p->next;
//	}
//	return 1;
//}
//
//void delDuplicate(struct node*p){
//	p=second;
//	node*q;
//	q=new Node;
//	q=p;
//	while(p){
//		if(q->data == p->data){
//			p=p->next;
//			q->next=p;
//		}
//		else{
//			q=p;
//			p=p->next;
//		}
//	}
//}
//
//void reverse(struct node*p){
//	int arr[5];
//	int i=0;
//	//copying elements in array
//	while(p){
//		arr[i]=p->data; 
//		p=p->next;
//		i++;
//	}
//	//i=5 as the loop runs when p was 4 and became null
//	//recopy elements
//	p=second;
//
//	while(p){
//		p->data=arr[i-1];
//		i--;
//		p=p->next;
//	}
//}
//
//void reverse2(struct Node* p){
//	//uses concept of sliding pointer
//	p=second;
//	node*q, *r;
//	q=new Node;
//	r=new Node;
//	q=NULL;
//	r=NULL;
//	while(p){
//		r=q;
//		q=p;
//		p=p->next;
//		q->next=r;
//	}
//	second=q;
//}
//
//void rReverse(struct node*q, struct node*p){
//	if(p!=0){
//		rReverse(p,p->next);
//		p->next=q;
//	}
//	else{
//			second=q;
//			
//		}
//
//}
//
//void concat(struct node*p, struct node*q){
//	while(p->next!=NULL){
//		p=p->next;
//	}
//	p->next=q;
//
//}
//
//void merge(struct node*p, struct node*q){
//	struct node*last;
//	if(p->data < q->data){
//		third=last=p;
//		p=p->next;
//		third->next=NULL;
//	}
//	else{
//		third=last=q;
//		q=q->next; 
//		third->next=NULL;
//	}
//	while(p && q){
//		if(p->data < q->data){
//			last->next=p;
//			last=p;
//			p=p->next; 
//			last->next = NULL;
//		}
//		else{
//			last->next=q;
//			last=q;
//			q=q->next;
//			last->next = NULL;
//		}
//		if(p) last->next=p;
//		if(q) last->next=q;
//	}
//}
//
//void checkLoop(struct node*f){
//	node*p, *q;
//	p=q=f;
//	while(p && q){
//		p=p->next;
//		q=q->next;
//		if(q==NULL){
//			q=NULL;
//		}
//		else{
//			q=q->next;
//		}
//		if(p==q){
//			cout<<"loop";
//			break;
//		}
//	}
//	if(p==NULL || q==NULL){
//		cout<<"linear";
//	}
//}
//
//int main(){
//	int a[]={5,15,25,35,45};
//	create(a,5);
//	int b[]={10,20,30,40,50};
//	create2(b,5);
////	rDisplay(second);
////	cout<<rCounter(second);
////	cout<<sum(second);
////	cout<<rSum(second);
////	cout<<max(second);
////	cout<<rMax(second);
////	cout<<search(second, 11);
////	cout<<rSearch(second,11);
////	cout<<optSearch(second,12)<<endl;
////	insert(second, 2, 70);
////	insertLast(second,20);
////	insertSorted(second,6);
////	deletesecond(second);
////	delPosn(second, 2);
////	if(checkSort(second)){
////		cout<<"sorted"<<endl;
////	}
////	else{
////		cout<<"unsorted"<<endl;
////	}
////	delDuplicate(second);
////	reverse(second);
////	reverse2(second);
////	rReverse(NULL,second);
////	concat(second,second);
////	merge(second,second);
////	node*t1, *t2;
////	t1=second->next->next;
////	t2=second->next->next->next->next;
////	t2->next=t1;
////	checkLoop(second);
//	display(second);
//	
//}

//****************linked list using c++
//#include<iostream>
//using namespace std; 
//class Node{
//	public: 
//	int data; 
//	node*next;
//};
//
//class LinkedList{
//	private: 
//	node*second; 
//	public: 
//	LinkedList(){
//		second=NULL;
//	}
//	LinkedList(int a[], int n);
//	~LinkedList();
//	void display();
//	void insert(int index, int x);
//	void Delete(int index);
//};
//
//LinkedList::LinkedList(int a[], int n){
//	node*last, *t;
//	second=new Node; 
//	second->data = a[0];
//	second->next=NULL;
//	last=second;
//	
//	for(int i=1; i<n; i++){
//		t=new Node;
//		t->data = a[i];
//		t->next = NULL;
//		last->next=t; 
//		last=t;
//	}
//}
//
//void LinkedList::display(){
//	node*t;
//	t=new Node; 
//	t=second;
//	while(t){
//		cout<<t->data<<" ";
//		t=t->next;
//	}
//}
//
//LinkedList::~LinkedList(){
//	node*p;
//	p=second; 
//	while(p){
//		second = second->next; 
//		delete p;
//		p=second;
//	}
//}
//
//void LinkedList::insert(int index, int x){
//	node*t, *p;
//		t=new Node;
//		p=new Node;
//		t->data=x;
//		t->next=NULL;
//		p=second;
//	if(index==0){
//		t->next=second;
//		second=t;
//	}
//	else{
//		
//		int i=0;
//		while(i!=index-1){
//			i++;
//			p=p->next;
//			
//		}
//		t->data=x;
//		t->next=p->next;
//		p->next=t;
//		
//	}
//}
//
//void LinkedList::Delete(int index){
//	node*p, *q;
//	p=new Node;
//	q=new Node;
//	p=q=second;
//	int i=1;
//	if(index==0){
//		second=second->next;
//	}
//	while(i<=index){
//		q=p;
//		p=p->next;
//		i++;
//	}
//	q->next=p->next;
//}
//
//
//
//int main(){
//	int a[]={1,3,5,7,9};
//	LinkedList l(a,5);
//	l.insert(2,10);
//	l.Delete(2);
//	l.display();
//}

//****************circular linked lists
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data; 
//	node*next;
//}*head;
//
//void create(int a[], int n){
//	node*last, *t;
//	head=new Node;
//	head->data=a[0];
//	head->next=head;
//	last=head;
//	
//	for(int i=1; i<n; i++){
//		t=new Node; 
//		t->data=a[i];
//		t->next=last->next;
//		last->next=t;
//		last=t;
//	}
//}
//
//void display(struct node*h){
//	do{
//		cout<<h->data<<" "; 
//		h=h->next;
//	}while(h!=head);
//}
//
//void rDisplay(struct node*h){
//	static int flag=0;
//	if(h!=head || flag==0){
//		flag=1;
//		cout<<h->data<<" ";
//		rDisplay(h->next);
//	}
//	flag=0;
//}
//
//void insert(struct node*h, int index, int x){
//	node*t,*p=head;
//	t=new Node;
//	int i=0;
//	if(index>=0 && index<=5){
//	if(index==0){
//		t->data=x;
//		t->next=head;
//		while(p->next!=head){
//			p=p->next;
//		}
//		p->next=t;
//		head=t;
//	}
//	else{
//	
//	i=0;
//	while(i<index-1){
//		h=h->next;
//		i++;
//	}
//	t->data=x;
//	t->next=h->next;
//	h->next=t;
//	}
//	}
//	else{
//		cout<<"enter valid index"<<endl;
//	}
//}
//
//void Delete(struct node*h, int index){
//	node*p, *q;
//	p = new Node;
//	p=head;
//	q = new Node;
//	int i=0;
//	if(index==1){
//		node*t;
//		t=head;
//		while(t->next!=head){
//			t=t->next;
//		}
//		h=h->next;
//		t->next=h;
//		delete head;
//		head=h;
//	}
//	else{
//	while(i<index-2){
//		p=p->next;
//		i++;
//	}
//	q=p->next;
//	p->next=q->next;
//	delete q;
//}
//}
//
//int main(){
//	int a[]={1,2,3,4,5};
//	create(a,5);
////	insert(head,0,7);
//	Delete(head, 1);
//	display(head);
//}

//****************doubly linked list 
//#include<iostream> 
//using namespace std; 
//struct Node{
//	struct node*prev; 
//	int data; 
//	struct node*next;
//}*second=NULL;
//void create(int a[], int n){
//	struct node*t,*last;
//	int i=0;
//	second = new Node; 
//	second->data=a[0];
//	second->prev=NULL;
//	second->next=NULL;
//	last = second;
//	for(i=1; i<n; i++){
//		t=new Node;
//		t->data=a[i];
////		t->next=last->next;
//	t->next = NULL;
//		t->prev=last; 
//		last->next=t;
//		last=t;
//	}
//}
//
//void display(struct node*p){
//	int i;
//	while(p!=NULL){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//void len(struct node*p){
//	int len=0;
//	while(p){
//		len++;
//		p=p->next;
//	}
//			cout<<"len: "<<len<<endl;
//}
//
//void insertsecond(struct node*p, int x){
//	struct node*t;
//	t=new Node; 
//	t->data = x;
//	t->prev=NULL;
//	t->next=second;
//	second->prev=t;
//	second=t;
//}
//
//void insertAny(struct node*p, int index, int x){
//	struct node*q;
//	q=new Node; 
//	int i=0;
//	q=second;
//	while(i<index-1){
//		q=q->next;
//		i++;
//	}
//	struct node*t; 
//	t=new Node; 
//	t->data=x;
//	t->next=q->next;
//	t->prev=q;
//	q->next=t;
//	q=q->next;
//	q->prev=t;
//}
//
//
//void Delete(struct node*p, int index){
//	int i=0;
//	int x;
//	
//	if(index==1){
//		if(p->next!=NULL){
//		second=second->next;
//		second->prev=NULL;
//	}
//	}
//	else{
//	
//	while(i<index-1){
//		i++;
//		p=p->next;
//	}
//	p->prev->next=p->next;
//	if(p->next)
//	p->next->prev=p->prev;
//	x=p->data;
//	delete p;
//}
//}
//
//void reverse(struct node*p){
//	struct node*t;
//	while(p){
//			
//			t=p->next;
//			p->next=p->prev;
//			p->prev=t;
//			p=p->prev;
//			if(p!=NULL && p->next==NULL)
//			second=p;
//	}
//	
//}
//
//int main(){
//	int a[]={1,2,3,4,5};
//	create(a,5);
//	len(second);
////	insertsecond(second,10);
////	insertAny(second,3,10);
////	Deletesecond(second);
////	Delete(second,5);
//	reverse(second);
//	display(second);
//}

//****************SC-middle of a linked list 
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data; 
//	struct node*next;
//}*second=NULL;
//
//void create(int a[], int n){
//	node*last, *t;
//	second=new Node; 
//	second->data=a[0];
//	second->next=NULL;
//	last=second;
//	for(int i=1; i<n; i++){
//		t=new Node; 
//		t->data=a[i];
//		t->next=last->next; 
//		last->next=t;
//		last=t;
//	}
//}
//
//void display(struct node*p){
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//void midElement(struct node*p){
//	node*q;
//	q=new Node;
//	q=p;
//	while(p){
//		p=p->next;
//		if(p){
//			p=p->next;	
//			if(p)
//			q=q->next;
//		}	
//	}
//	
//	cout<<"mid: "<<q->data<<endl;
//}
//
//int main(){
//	int a[]={1,2,3,4,5,6};
//	create(a,6);
//	midElement(second);
//	display(second);
//}

//****************evaluate polynomial using linked list 
//#include<iostream>
//#include<math.h>
//using namespace std; 
//struct Node{
//	int coeff; 
//	int exp; 
//	struct node*next;
//}*poly=NULL;
//
//void create(){
//	node*last=NULL,*t;
//	int num,i;
//	cout<<"enter number of terms: ";
//	cin>>num;
//	cout<<"enter terms with coeff and exp";
//	
//	for(i=0; i<num; i++){
//
//		t=new Node;
//		cin>>t->coeff>>t->exp;
//		t->next=NULL;
//		if(poly==NULL){
//			poly=last=t;
//		}
//		else{
//			last->next=t;
//			last=t;
//		}
//	}
//}
//
//void display(struct node*p){
//	while(p){
//		cout<<p->coeff<<"x"<<p->exp<<" + ";
//		p=p->next;
//	}
//	cout<<endl;
//}
//
//long eval(struct node*p, int x){
//	long sum=0;
//	while(p){
//		sum=sum+p->coeff*pow(x,p->exp);
//		p=p->next;
//	}
//	cout<<sum<<endl;
//}
//
//int main(){
//	create();
//	eval(poly,1);
//	display(poly);
//	
//}


//****************stack operations using array
//#include<iostream>
//using namespace std; 
//struct Stack{
//	int size; 
//	int top; 
//	int *s;
//};
//
//void create(struct Stack *st){
//
//	cout<<"enter size of the stack: ";
//	cin>>st->size;
//	st->top=-1;
//	st->s=new int[st->size];
//}
//
//void display(struct Stack st){
//	for(int i=st.top; i>=0; i--){
//		cout<<st.s[i]<<" ";
//	}
//}
//
//void push(struct Stack *st, int x){
//	if(st->top==st->size-1){
//		cout<<"stack overflow"<<endl;
//	}else{
//			st->top++;
//			st->s[st->top]=x;
//	}
//}
//
//int pop(struct Stack *st){
//	int x=-1;
//	if(st->top==-1){
//		cout<<"stack underflow"<<endl;
//	}else{
//		x=st->s[st->top];
//		st->top--;
//	}
//	return x;
//}
//
////we send in a position and peek returns the element at the index that the position corresponds to 
//int peek(struct Stack st, int pos){
//	int x=-1;
//	//second we check for valid position
//	if(st.top-pos+1<0)
//	cout<<"invalid index"<<endl;
//	else
//	x=st.s[st.top-pos+1];
//	return x;
//	
//}
//
////function to check if stack is expty
//int isEmpty(struct Stack st){
//	if(st.top==-1){
//		return 1;
//	}
//	else
//	return 0;
//}
//
////function to check if stack is full
//int isFull(struct Stack st){
//	if(st.top==st.size-1){
//		return 1;
//	}
//	else 
//	return 0;
//}
//
////function to return the element at the top of the stack(last element) 
//int stackTop(struct Stack st){
//	if(!isEmpty(st))
//	return st.s[st.top];
//	else 
//	return -1;
//}
//
//int main(){
//	struct Stack st;
//	create(&st);
//	push(&st,10);
//	push(&st,20);
//	push(&st,30);
//	push(&st,40);
//	
////	cout<<pop(&st)<<endl;
////	cout<<peek(st,5)<<endl;
//	cout<<isFull(st)<<endl;
//	cout<<stackTop(st)<<endl;
//	
//	display(st);
//}

//****************stack operations using linked lists
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data;
//	struct node*next;
//}*top=NULL;
//
//
//
//void push(int x){
//	node*t=new Node; 
//	if(t==NULL){
//		cout<<"stack overflow";
//	}
//	else{
//		t->data=x;
//		t->next=top;
//		top=t;
//	}
//}
//
//void display(){
//	struct node*p=new Node;
//	p=top;
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//int pop(){
//	struct node*p=new Node;
//	p=top;
//	int x=-1;
//	if(top==NULL){
//		return -1;
//	}
//	else{
//		top=top->next;
//		x=p->data;
//		delete p;
//		return x;
//	}
//}
//
//int main(){
//	
//	push(10);
//	push(20);
//	push(30);
//	push(40);
//	cout<<pop()<<endl;
//	display();
//}

//****************parenthesis checking using stacks and linked lists + infix to postfix
//#include<iostream>
//#include<strings.h>
//using namespace std; 
//struct Node{
//	char data;
//	struct node*next;
//}*top=NULL;
//
//
//
//void push(char x){
//	node*t=new Node; 
//	if(t==NULL){
//		cout<<"stack overflow";
//	}
//	else{
//		t->data=x;
//		t->next=top;
//		top=t;
//	}
//}
//
//void display(){
//	struct node*p=new Node;
//	p=top;
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//char pop(){
//	struct node*p=new Node;
//	p=top;
//	int x=-1;
//	if(top==NULL){
//		return -1;
//	}
//	else{
//		top=top->next;
//		x=p->data;
//		delete p;
//		return x;
//	}
//}
//
//int isBalance(char *exp){
//	
//	for(int i=0; exp[i]!='\0';i++){
//		if(exp[i]=='(') push(exp[i]);
//		else if(exp[i]==')'){
//			if(top==NULL) 
//			return 0;
//			else
//			pop();
//		}
//	}
//	if(top==NULL)
//	return 1;
//	else 
//	return 0;
//}
//
//int isOperand(char x){
//	if(x=='+' || x=='-' || x=='*' || x=='/')
//	return 0;
//	return 1;
//}
//
//int pre(char x){
//	if(x=='+' || x=='-')
//	return 1;
//	else if(x=='*' || x=='/')
//	return 2;
//	return 0;
//}
//
//char *intopost(char *infix){
//	char *postfix; 
//	int len=strlen(infix);
//	postfix= new char[len+2];
//	int i=0;
//	int j=0; 
//	while(infix[i]!='\0'){
//		if(isOperand(infix[i])){
//			postfix[j++]=infix[i++];  
//		}
//		else{
//			if(pre(infix[i])>pre(top->data)){
//				push(infix[i++]);
//			}
//			else{
//				postfix[j++]=pop();
//			}
//		}
//	}
//	
//	while(top!=NULL){
//		postfix[j++]=pop();
//	}
//	postfix[j]='\0';
//	return postfix;
//}
//
//int eval(int f, int s, char x){
//	switch(x){
//		case '+': return f+s;
//		break;
//		case '-': return s-f;
//		break;
//		case '*': return s*f;
//		break;
//		case '/': return s/f;
//		break;
//		default: 
//		cout<<"invalid";
//		break;
//	}
//}
//
//int evalPostfix(char *exp){
//	int result=0;
//	int i=0;
//	int second,second;
//	int *postfix;
//	postfix=new int[strlen(exp)];
//	while(exp[i]!='\0'){
//	if(isOperand(exp[i])){
//		push(exp[i++]-'0');
//	}
//	else{
//		second=pop();
//		second=pop();
//		push(eval(second,second,exp[i]));
//		i++;
//	}
//}
//	result=pop();
//	return result;
//}
//
//int main(){
//	
////	char *exp="((a+b)*(c-d))";
////	cout<<isBalance(exp)<<endl;
//
////	char *infix="a+b*c-d/e";
////	push('#');
////	char *postfix;
////	postfix=intopost(infix);
////	cout<<postfix;
//
//	char *exp="35*62/+4-";
//	cout<<evalPostfix(exp)<<endl;
//	//display();
//}

//****************Queue basics
//#include<iostream>
//using namespace std; 
//struct Queue{
//	int size; 
//	int front; 
//	int rear; 
//	int *Q;
//};
//
//void enqueue(struct Queue *q, int x){
//	if((q->rear+1)%q->size==q->front){
//		cout<<"queue is full";
//	}
//	else{
//		q->rear=(q->rear+1)%(q->size);
//		q->Q[q->rear]=x;
//	}
//}
//
//int dequeue(struct Queue *q){
//	int x=-1;
//	if(q->front==q->rear)
//	cout<<"queue is empty";
//	else{
//		q->front=(q->front+1)%(q->size);
//		x=q->Q[q->front];
//	}
//	return x;
//}
//
//void display(struct Queue *q){
//	int i=q->front+1;
//	do{
//		cout<<q->Q[i]<<" ";
//		i=(i+1)%(q->size);
//	}while(i!=(q->rear+1)%(q->size));
//}
//
//int main(){
//	//initializing
//	struct Queue q;
//	cout<<"enter size: ";
//	cin>>q.size; 
//	q.Q=new int[q.size];
//	q.front=q.rear=-1;
//	
//	//inserting elements
//	enqueue(&q,5);
//	enqueue(&q,6);
//	enqueue(&q,7);
//	
////	dequeue(&q);
//	display(&q);
//}

//****************Queue using linked list 
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data; 
//	struct node*next;
//}*front=NULL,*rear=NULL;
//
//void enqueue(int x){
//	node*t= new Node;
//	if(t==NULL){
//		cout<<"full";
//	}else{
//		t->data=x;
//		t->next=NULL;
//		if(front==NULL){
//			front=rear=t;
//		}
//		else{
//			rear->next=t;
//			rear=t;
//		}
//	}
//}
//
//int dequeue(){
//	int x=-1;
//	node*p;
//	if(front==NULL){
//		cout<<"empty";
//	}else{
//		p=front;
//		front=front->next;
//		x=p->data;
//		delete p;
//	}
//}
//
//void display(){	
//	struct node*p;
//	p=front;
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//int main(){
//	enqueue(10);
//	enqueue(20);
//	enqueue(30);
//	enqueue(40);
//	enqueue(50);
//	
//	dequeue();
//	display();
//}

//****************creating trees
//#include<iostream>
//using namespace std; 
//struct Node{
//	node*lchild; 
//	int data; 
//	node*rchild;	
//};
//
//struct node*root=NULL;
//
//struct Queue{
//	int size; 
//	int front; 
//	int rear; 
//	node**Q;
//};
//
//Node* enqueue(struct Queue *q, node* x){
//	if((q->rear+1)%q->size==q->front){
//		cout<<"queue is full";
//	}
//	else{
//		q->rear=(q->rear+1)%(q->size);
//		q->Q[q->rear]=x;
//	}
//}
//
//node* dequeue(struct Queue *q){
//	node*x=NULL;
//	if(q->front==q->rear)
//	cout<<"queue is empty";
//	else{
//		q->front=(q->front+1)%(q->size);
//		x=q->Q[q->front];
//	}
//	return x;
//}
//
//int isEmpty(struct Queue q){
//	return q.rear==q.front;
//}
//
//void preorder(struct node*p){
//	if(p){
//		cout<<p->data<<" ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//
//void inorder(struct node*p){
//	if(p){
//		inorder(p->lchild);
//		cout<<p->data<<" ";
//		inorder(p->rchild);
//	}
//}
//
//void postorder(struct node*p){
//	if(p){
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout<<p->data<<" ";
//	}
//}
//
//void levelOrder(struct node*root, Queue q){
//	cout<<root->data<<" ";
//	enqueue(&q,root);
//	while(!isEmpty(q)){
//	root=dequeue(&q);
//	if(root->lchild){
//		cout<<root->lchild->data<<" ";
//		enqueue(&q,root->lchild);
//	}
//	if(root->rchild){
//		cout<<root->rchild->data<<" ";
//		enqueue(&q,root->rchild);
//	}
//}
//}
//
//int count(node*root){
//	if(root){
//		return count(root->lchild)+count(root->rchild)+1;
//	}
//	else
//	return 0;
//}
//
//int height(node*root){
//	int x=0; 
//	int y=0; 
//	if(root==0){
//		return 0;
//	}
//	else{
//		x=height(root->lchild);
//		y=height(root->rchild);
//		if(x>y)
//		return x+1;
//		else 
//		return y+1;
//	}
//}
//
//int Lnodes(node*root){
//	int x=0; 
//	int y=0; 
//
//	if(root==0){
//		return 0;
//	}
//	else{
//		x=height(root->lchild);
//		y=height(root->rchild);
//		if(root->lchild && root->rchild){
//			return x+y+1;
//		}
//		else{
//			return x+y;
//		}
//		
//	}
//	return 0;
//}
//
//int main(){
//	//initializing
//	struct Queue q;
//	q.size=5; 
//	q.Q=new Node*[q.size];
//	q.front=q.rear=-1;
//	
//	//creating root
//	struct node*p,*t;
//	int x;
//	cout<<"enter root value: ";
//	cin>>x;
//	root= new Node;
//	root->data=x;
//	root->lchild=root->rchild=NULL;
//	enqueue(&q,root);
//	
//	while(!isEmpty(q)){
//		p=dequeue(&q);
//		cout<<"enter value of lchild of "<<p->data<<" ";
//		cin>>x;
//		if(x!=-1){
//			t=new Node;
//			t->data=x;
//			t->rchild=t->lchild=NULL;
//			p->lchild=t;
//			enqueue(&q,t);
//		}
//		
//		cout<<"enter value of rchild of "<<p->data<<" ";
//		cin>>x;
//		if(x!=-1){
//			t=new Node;
//			t->data=x;
//			t->rchild=t->lchild=NULL;
//			p->rchild=t;
//			enqueue(&q,t);
//		}
//	}
//	
////	preorder(root);
////	cout<<endl;
////	inorder(root);
////	cout<<endl;
////	postorder(root);
////	cout<<endl;
////	levelOrder(root,q);
////	cout<<"count: "<<count(root)<<endl;
////	cout<<"height: "<<height(root)<<endl;
//	cout<<"number of nodes: "<<Lnodes(root)<<endl;
//}


//creating trees using linked list queue. did it myself without help. very proud. good job. 
//********************trees basics practice
//#include<iostream>
//using namespace std; 
//
//struct tnode{
//	tnode*lchild;
//	int data;
//	tnode*rchild;
//}*root=NULL;
//
//
//struct node{
//	tnode*data; 
//	node*next;
//}*second=NULL,*rear=NULL;
//
//void enqueue(tnode*x){
//	node*t;
//	t=new node;
//	if(t==NULL){
//		cout<<"overflow"<<endl;
//	}
//	else{
//		t->data=x;
//		t->next=NULL;
//		if(second==NULL){
//			second=rear=t;
//		}
//		else{
//			rear->next=t;
//			rear=t;
//		}
//	}
//}
//
//int isempty(){
//	if(second==NULL){
//		return 1;
//	}
//	return 0;
//}
//
//tnode* dequeue(){
//	if(second==NULL){
//		cout<<"underflow"<<endl;
//	}
//	else{
//		tnode*x;
//		x=new tnode;
//		x=second->data;
//		second=second->next;
//		return x;
//	}
//}
//
//void create(){
//	tnode*p, *tl, *tr;
//	p=new tnode; 
//	
//	if(root==NULL){
//		tnode*temp;
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
//int height(tnode*root){
//	int x=0; 
//	int y=0; 
//	if(root==0){
//		return 0;
//	}
//	else{
//		x=height(root->lchild);
//		y=height(root->rchild);
//		if(x>y)
//		return x+1;
//		else 
//		return y+1;
//	}
//}
//
//void preorder(tnode*t){
//	if(t!=NULL){
//		cout<<t->data<<" ";
//		preorder(t->lchild);
//		preorder(t->rchild);
//	}
//}
//
//int main(){
//	create();
//	preorder(root);
//	cout<<"height is: "<<height(root);
//}

//****************BinarySearchTrees
//#include<iostream>
//using namespace std; 
//struct Node{
//	node*lchild; 
//	int data; 
//	node*rchild;
//}*root=NULL;
//
//void insert(int key){
//	node*t=root;
//	node*r; 
//	node*p;
//	if(root==NULL){
//		p=new Node;
//		p->data=key;
//		p->lchild=p->rchild=NULL;
//		root=p;
//		return;
//		//allowed even if return type of function is void
//	}
//	while(t!=NULL){
//		r=t;
//		if(key==t->data){
//			return;
//		}
//		else if(key<t->data){
//			t=t->lchild;
//		}
//		else 
//		t=t->rchild;
//	}
//	p=new Node;
//	p->data=key;
//	p->lchild=p->rchild=NULL;
//	if(key > r->data)
//	r->rchild=p;
//	else
//	r->lchild=p;
//}
//
//void Inorder(struct node*p){
//	if(p){
//		Inorder(p->lchild);
//		cout<<p->data<<" ";
//		Inorder(p->rchild);
//	}
//}
//
//struct node* search(int key){
//	struct node*t=root;
//	while(t!=NULL){
//		if(t->data==key){
//			return t;
//		}
//		else if(t->data>key){
//			t=t->lchild;
//		}
//		else
//		t=t->rchild;
//	}
//	return NULL;
//}
//
//struct node*Rinsert(struct node*p, int key){
//	struct node*t=NULL;
//	if(p==NULL){
//		t=new Node; 
//		t->data=key;
//		t->lchild=t->rchild=NULL;
//		return t;
//	}
//	if(key>p->data){
//		p->rchild=Rinsert(p->rchild, key);
//	}
//	else if(key<p->data){
//		p->lchild=Rinsert(p->lchild,key);
//	}
//	return p; 
//}
//
//int height(struct node*p){
//	int x,y;
//	if(p==NULL){
//		return 0;
//	}
//	x=height(p->lchild);
//	y=height(p->rchild);
//	if(x>y){
//		return x+1;
//	}
//	else{
//		return y+1;
//	}
//}
//
//struct node*InPre(struct node*p){
//	while(p && p->lchild){
//		p=p->lchild;
//	}
//	return p;
//}
//
//struct node*InSucc(struct node*p){
//	while(p && p->rchild){
//		p=p->rchild;
//	}
//	return p;
//}
//
//struct Node* Delete(struct node*p, int key){
//	struct node*q;
//	if(p==NULL){
//		return NULL;
//	}
//	if(p->lchild==NULL && p->rchild==NULL){
//		if(p==root){
//			root=NULL;
//		}
//		delete p;
//		return NULL;
//	}
//	if(key<p->data){
//		p->lchild=Delete(p->lchild,key);
//	}
//	else if(key>p->data){
//		p->rchild=Delete(p->rchild, key);
//	}
//	else{
//		if(height(p->lchild)>height(p->rchild)){
//			q=InPre(p->lchild);
//			p->data=q->data;
//			p->lchild=Delete(p->lchild, key);
//		}
//		else{
//			q=InSucc(p->rchild);
//			p->data=q->data;
//			p->rchild=Delete(p->rchild, key);
//		}
//	}
//	
//	return p;
//}
//
//int main(){
//	struct node*temp;
//	root=Rinsert(root,10);
//	Rinsert(root,5);
//	Rinsert(root,20);
//	Rinsert(root,8);
//	Rinsert(root,30);
//	
//	Delete(root,20);
//	
//	Inorder(root);
//	cout<<endl;
//	temp=search(20);
//	if(temp!=NULL){
//		cout<<"value is found: "<<temp->data;
//	}
//	else
//	cout<<"element is not found"<<endl;
//}

//****************Sorting techniques 
//bubble sort
//#include<iostream>
//using namespace std; 
//
//void swap(int *x, int *y){
//	int temp; 
//	temp=*x; 
//	*x=*y; 
//	*y=temp;
//}
//
//void bubble(int a[], int n){
//	int i,j,flag;
//	for(i=0; i<(n-1); i++){
//		flag=0;
//		for(j=0; j<(n-i-1); j++){
//			if(a[j]> a[j+1]){
//				swap(&a[j],&a[j+1]);
//				flag=1;
//			}
//		}
//		if(flag==0) break;
//	}
//}

//did not work 
//
//void insertion(int a[], int n){
//	int i,j,k;
//	for(i=1; i<(n-1); i++){
//		for(j=(i-1); j>=0; j--){
//			k=a[i];
//			if(a[j]>k){
//				a[j+1]=a[j];
//			}
//			else{
//				a[j+1]=k;
//				break;
//			}
//		}
//	}
//}

//void selection(int a[], int n){
//	int i,j,k; 
//	for(i=0; i<n; i++){
//		j=i;
//		k=i;
//		for(j=(i+1); j<n; j++){
//			if(a[j]<a[i]){
//				k=j;
//			}
//		}
//		
//	swap(a[i],a[k]);
//	}
//}
//
//int partition(int a[], int l, int h){
//	int i=l, j=h; 
//	int pivot = a[l];
//	do{
//		do{i++;}while(a[i]<=pivot);
//		do{j--;}while(a[j]>pivot);
//		
//		if(i<j){
//		swap(&a[i],&a[j]);	
//		}
//		
//		
//	}while(i<j);
//	swap(&a[l],&a[j]);
//	return j;
//}
//
//void quickSort(int a[], int l, int h){
//	int j;
//	if(l<h){
//		j=partition(a,l,h);
//		quickSort(a,l,j);
//		quickSort(a,j+1,h);
//	}
//}
//
//int merge(int a[], int n){
//	int i,j,k;
//	i=k=0;
//	j=(n/2);
//	int c[n];
//	while(i<(j) && j<(n)){
//		if(a[i]<a[j]){
//			c[k++]=a[i++];
//		}
//		else{
//			c[k++]=a[j++];
//		}
//	}
//	
//	
//	for(; i<j; i++){
//		c[k++]=a[i++];
//	}
//	
//	for(; j<n; i++){
//		c[k++]=a[j++];
//	}
//	
//	for(k=0; k<n; k++){
//		cout<<c[k]<<" ";
//		
//	}		
//}
//
//int findmax(int a[], int n){
//	int i, max=a[0];
//	for(i=0; i<n; i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	return max;
//}
//
//void count(int a[], int n){
//	int max, i,j;
//	max=findmax(a,n);
//	int *c;
//	c=new int[max];
//	for(i=0; i<max+1; i++){
//		c[i]=0;
//	}
//	for(i=0; i<n; i++){
//		c[a[i]]++;
//	}
//	i=0,j=0;
//	while(i<(max+1)){
//		if(c[i]>0){
//			a[j++]=i;
//			c[i]--;
//		}else{
//			i++;
//		}
//	}
//	
//	for(j=0; j<n; j++){
//		cout<<a[j]<<" ";
//	}
//}
//
//int main(){
////	int a[]={11,13,7,12,16,9,24,5,10,3};
//	//int n=4, i;
////	int n=10, i;
//	
//	//bubble(a,n);
////	insertion(a,n);
//	//selection(a,n);
//	
////	quickSort(a,0,n-1);
////	
////	for(int i=0; i<n; i++){
////		cout<<a[i]<<" ";
////	}
////	
////	int b[]={1,3,5,7,10,12,13};
////	int c[]={2,4,6,8};
//
//	int b[]={1,3,5,7,22,23,2,4,6,8};
//	int n=10;
////	merge(b,8);
//	
//	cout<<endl;
//	count(b,n);
//}

//*********************************heaps
//inserting in a heap

//#include<iostream>
//using namespace std; 
//
//void insert(int a[], int n, int x){
//	int t=x;
//	int i=n;
//	a[n]=x;
//	
//	while(a[i/2]<x && i/2>0){
//			a[i]=a[i/2];
//			i=i/2;
//	}
//	
//	a[i]=x;
//}
//
//void create(int a[], int n){
//	int i;
//	
//	for(i=2; i<n; i++){
//		insert(a,i,a[i]);
//	}
//}
////
////////my try at deleting an element 
////////void del(int a[], int n){
////////	int i=1; 
////////	n=n-1;
////////	int temp=a[i];
////////	a[1]=a[n];
////////		
////////		while (i*2 < n && ((2*n)+1)<n){
////////		if(a[i*2]>a[(i*2)+1]){
////////			if(a[i*2]>a[i]){
////////				a[i]=a[i*2];
////////				i=i*2;
////////			}
////////		}
////////		else{
////////			if(a[(i*2)+1]>a[i]){
////////				a[i]=a[(i*2)+1];
////////				i=(i*2)+1;
////////			}
////////		}
////////	}	
////////}
//////
//void swap(int *x, int *y){
//	int temp;
//	temp=*x;
//	*x=*y;
//	*y=temp;
//}
//
//void del2(int a[], int n){
//	int i,j,temp;
//	i=1, j=2*i;
//	temp=a[1];
//	a[1]=a[n];
//	while(j<n-1){
//		if(a[j]<a[j+1]){
//			j=j+1;
//		}
//		if(a[i]<a[j]){
//			swap(a[i],a[j]);
//			i=j;
//			j=2*i;
//		}
//		else{
//			break;
//		}
//	}
//	a[n]=temp;
//}
//
//void heapSort(int a[], int n){
//	int i=n;
//	while(i>1){
//		del2(a,i);
//		i=i-1;
//	}
//}
//
//int main(){
//	int i=0;
//	int n=7;
//	int *a;
//	a=new int[10]{0,10,20,30,25,5,40,35};
////	insert(a,8,40);
////	insert(a,9,35);
//
////	create(a,n);
////	del(a,n);
//	
////	del2(a,n);
////	heapSort(a,n);
//	for(i=n; i>1; i--){
//		cout<<a[i]<<" ";
//	}
//}

//*******************************hash table 
//chaining. works well. proud of myself.
//#include<iostream>
//using namespace std; 
//struct node{
//	int data; 
//	node *next;
//}*second=NULL;
//
////same as normal linked list but replace pointer p with pointer to a pointer
////sorted insert
//void si(node **p, int x){
//	node *t; 
//	t=new node;
//	t->data=x;
//	t->next=NULL;
//	if(*p==NULL){
//		*p=t;
//		second=t;
//	}
//	else{
//		node *q;
//		q=new node;
//		q=second;
//		if(q->data>x){
//			t->next=q;
//			second=t;
//		}
//		else{
//			if(q->next){
//			while(q->next && q->next->data<x){
//				if(q->next){
//					q=q->next;
//				}
//				else{
//					break;
//				}
//			}
//		}
//		if(q->next){
//			t->next=q->next;
//		}
//		q->next=t;
//		
//	}	
//		}
//		
//}
//
////searching 
//struct node *search(node *p, int x){
//	while(p){
//		if(x==p->data){
//			return p;
//		}
//		p=p->next;
//	}
//	return NULL;
//}
//
//void disp(node *p){
//	while(p){
//		cout<<p->data<<" ";
//		p=p->next;
//	}
//}
//
//int hash(int x){
//	return x%10;
//}
//
//void insert(node *ht[], int key){
//	int x=hash(key);
//	si(&ht[x],key);
//}
//
//void display(node *ht[]){
//	for(int i=0; i<10; i++){
//		cout<<"index "<<i<<" : ";
//		disp(ht[i]);
//		cout<<endl;
//	}
//}
//
//int main(){
//	struct node *ht[10];
//	struct node *t;
//	int i;
//	for(i=0; i<10; i++){
//		ht[i]=NULL;
//	}
//	insert(ht,12);
//	insert(ht,22);
//	insert(ht,34);
//	display(ht);

//	cout<<endl;
//	
//	t=search(ht[hash(32)],32);
//	if(t){
//		cout<<"found"<<endl;
//	}
//	else{
//		cout<<"not found"<<endl;
//	}

//}

//linear probing 
//#include<iostream>
//using namespace std; 
//#define size 10
//
//int hashfun(int a[], int key){
//	int b;
//	b=key%size;
//	
//	if(a[b]==0){
//		return b;
//	}
//	else{
//		while(a[b%size]!=0){
//			b++;
//		}
//		return b%size;
//	}
//}
//
//void insert(int a[], int key){
//	int index;
//	index=hashfun(a, key);
//	a[index]=key;
//}
//
//void display(int a[]){
//	int i;
//	for(i=0; i<size; i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//int search(int a[], int key){
//	int flag=0;
//	int i=0;
//	while(a[(key+i)%size]!=key && a[(key+i)%size]!=0){
//		i++;
//	}
//	if(a[(key+i)%size]==key){
//		flag=1;
//	}
//	return flag;
//}
//
//int main(){
//	int h[size]={0};
//	insert(h,12);
//	insert(h,22);
//	insert(h,25);
//	display(h);
//	cout<<endl;
//	if(search(h,22)){
//		cout<<"search successful";
//	}else{
//		cout<<"search unsuccessful";
//	}
//}

//quadratic probing
//#include<iostream>
//using namespace std; 
//#define size 10
//
//int hashfun(int a[], int key){
//	int b;
//	b=key%size;
//	
//	if(a[b]==0){
//		return b;
//	}
//	else{
//		int i=0;
//		while(a[(b%size)+i*i]!=0){
//			i++;
//		}
//		return (b%size)+i*i;
//	}
//}
//
//void insert(int a[], int key){
//	int index;
//	index=hashfun(a, key);
//	a[index]=key;
//}
//
//void display(int a[]){
//	int i;
//	for(i=0; i<size; i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//int main(){
//	int h[size]={0};
//	insert(h,12);
//	insert(h,22);
//	insert(h,32);
//	insert(h,47);
//	display(h);
//}

//double hashing 
//h1=(h1)%size
//h2=r-(x%r)
//r is the closest lesser prime number. In this case, r=7
//h'(x)=(h1-i*h2)%size
//#include<iostream>
//using namespace std; 
//#define size 10
//
//int hashfun(int a[], int key){
//	
//	if(a[key%size]==0){
//		return key%size;
//	}
//	else{
//		int i=0;
//		while(a[((key%size)+i*(7-(key)%7))%size]!=0){
//			i++;
//		}
//		return ((key%size)+i*(7-(key)%7))%size;
//	}
//}
//
//void insert(int a[], int key){
//	int index;
//	index=hashfun(a, key);
//	a[index]=key;
//}
//
//void display(int a[]){
//	int i;
//	for(i=0; i<size; i++){
//		cout<<a[i]<<" ";
//	}
//}
//
//int main(){
//	int h[size]={0};
//	insert(h,12);
//	insert(h,22);
//	insert(h,32);
//	insert(h,47);
//
//	display(h);
//}

//******************************Graphs
//BFS 
//#include<iostream>
//using namespace std; 
//struct Node{
//	int data; 
//	struct node*next;
//}*front=NULL,*rear=NULL;
//
//void enqueue(int x){
//	node*t= new Node;
//	if(t==NULL){
//		cout<<"full";
//	}else{
//		t->data=x;
//		t->next=NULL;
//		if(front==NULL){
//			front=rear=t;
//		}
//		else{
//			rear->next=t;
//			rear=t;
//		}
//	}
//}
//
//int dequeue(){
//	int x=-1;
//	node*p;
//	if(front==NULL){
//		cout<<"empty";
//	}else{
//		p=front;
//		front=front->next;
//		x=p->data;
//		delete p;
//	}
//	return x;
//}
//
//int isEmpty(){
//	if(front==NULL){
//		return 1;
//	}
//	return 0;
//}
//
//void BFS(int G[][7], int start, int n){
//	//n is the dimensions
//	//start is the start vertex
//	int i=start;
//	int visited[7]={0};
//	
//	cout<<i<<" ";
//	visited[i]=1;
//	enqueue(i);
//	
//	while(!isEmpty()){
//		i=dequeue();
//		for(int j=1; j<n; j++){
//			if(G[i][j]==1 && visited[j]==0){
//				cout<<j<<" ";
//				visited[j]=1;
//				enqueue(j);
//			}
//		}
//	}
//}
//
//void DFS(int G[][7], int start, int n){
//	static int visited[7]={0};
//	if(visited[start]==0){
//		cout<<start<<" ";
//		visited[start]=1;
//		for(int j=1; j<n; j++){
//			if(G[start][j]==1 && visited[j]==0){
//				DFS(G,j,n);
//			}
//		}
//	}
//}
//
//int main(){
//	int G[7][7]={{0,0,0,0,0,0,0},
// {0,0,1,1,0,0,0},
// {0,1,0,0,1,0,0},
// {0,1,0,0,1,0,0},
// {0,0,1,1,0,1,1},
// {0,0,0,0,1,0,0},
// {0,0,0,0,1,0,0}};
// 
// DFS(G,1,7);
// 
// return 0;
//
//}

//**************************correct it!
//#include<iostream>
//using namespace std;
//#define I 100
//
//int cost[8][8]={
//        {I, I, I, I, I, I, I, I},
//        {I, I, 25, I, I, I, 15, I},
//        {I, 26, I, 12, I, I, I, 10},
//        {I, I, 12, I, 8, I, I, I},
//        {I, I, I, 8, I, 16, I, 14},
//        {I, I, I, I, 16, I, 20, 18},
//        {I, 5, I, I, I, 20, I, I},
//        {I, I, 10, I, 14, 18, I, I}
//};
//
//int near[8]={I,I,I,I,I,I,I,I};
//int t[2][7];
// 
//int main(){
//	int i,j,k,u,v,n=7,min=I;
//	for(i=1;i<=n;i++){
//		for(j=i; j<=n; j++){
//			if(cost[i][j] < min){
//				min=cost[i][j];
//				u=i; 
//				v=j;
//			}
//		}
//	}
//	
//	t[0][0]=u;
//	t[1][0]=v;
//	near[u]=near[v]=0;
//	
//	for(i=1; i<=n; i++){
//		
//		if(near[i]!=0){
//			if(cost[i][u] < cost[i][v]){
//			near[i]=u;
//		}
//		else{
//			near[i]=v;
//		}
//		}
//	}
//	
//	for(i=1; i<n; i++){
//		min=I;
//		for(j=1; j<=n; j++){
//			if(near[j]!=0 && cost[j][near[j]] < min){
//				min=cost[j][near[j]];
//				k=j;
//			}
//			t[0][i]=k;
//			t[1][i]=near[k];
//			near[k]=0;
//			
//			for(j=1; j<=n; j++){
//				if((cost[j][k]<cost[j][near[j]])&&near[j]!=0){
//					near[j]=k;
//				}
//			}
//		}
//	}
//	
//	for(i=0; i<2; i++){
//		for(j=0; j<n-1; j++){
//			cout<<t[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}


//kruskal
//#include<iostream>
//using namespace std; 
//#define I 100
//
//int edges[3][9] = {{ 1, 1,  2,  2, 3,  4,  4,  5,  5},
//                       { 2, 6,  3,  7, 4,  5,  7,  6,  7},
//                       {25, 5, 12, 10, 8, 16, 14, 20, 18}};
//                       
//int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};
//int included[9]={0};
//int t[2][6];
//
//
//void un(int a, int b){
//	if(set[a]<set[b]){
//		set[a]=set[a]+set[b];
//		set[b]=a;
//	}
//	else{
//		set[b]=set[a]+set[b];
//		set[a]=b;
//	}
//}
//
//int find(int a){
//	int x=a,v=0;
//	while(set[x]>0){
//		x=set[x];
//	}
//	
//	while(a!=x){
//		v=set[a];
//		set[a]=x;
//		a=v;
//	}
//	return x;
////if (set[a] < 0) return a;
////    return set[a] = find(set[a]);
//}
//
//
//int main(){
//	int i=0,j,k,u,v,min=I,n=7,e=9;
//	
//	//i is for traversing t=result array
//	while(i<n-1 && e>=0){	
//		min=I;
//		for(j=0; j<=e; j++){
//			if(included[j]==0 && edges[2][j]<min){
//				min=edges[2][j];
//				u=edges[0][j];
//				v=edges[1][j];
//				k=j;
//			}
//		}
//		
//		if(find(u)!=find(v)){
//			t[0][i]=u;
//			t[1][i]=v;
//			un(find(u),find(v));
//			i++;
//		}
//		included[k]=1;
//		
//	}
//	
//	
//	for(i=0; i<2; i++){
//		for(j=0; j<n-1; j++){
//			cout<<t[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//}

