//
typedef struct LNode *List;
struct LNode{
	ElementType Data;
	List Next; 
};
struct LNode L;
List Ptrl;

//创建表 就是创建结构体变量 
List creatList(){
	List headNode=(List)malloc(sizeof(struct LNode));
	//data不初始化，差异化处理使知道是表头 
	headNOde->Next=NULL;
	return headNode;
} 

//打印表
void printList(List Ptrl){
	List pMove=headNode->next;
	while(pMove){
		cout<<pMove->Data<<endl;
		pMove=pMove->Next;
	}
	cout<<endl;
} 

//求表长
int Length(List Ptrl){
	List P=Ptrl;
	int j=0;
	while(p){
		p=p->Next;
		j++;
	}
	return j;
} 
//按序号查找
List FindKth(int K,List Ptrl){  //返回节点的地址值 
	List p=Ptrl;
	int i=1;
	for(p!=NULL&&i<K){
		p=p->Next;
		i++;
	}
	if(i==K) return p;
	else return NULL;
}
//按值查找
List Find(ElementType X,List Ptrl){
	List p=Ptrl;
	for(p!NULL&&p->Date!=X){
		p=p->Next;
	}
	if(p->Date==X) return p;
	else return NULL;
} 

//尾插法
void insertNodeByTail(List Ptrl,int data){
	List newNode=(List)malloc(sizeof(struct LNode));
	List tailNode=headNode;
	while(tailNode->next){
		tailNode=tailNode->Next;
	}
	tailNode->Next=newNode;
} 
//插入
List Insert(ElementType X,int i,List Ptrl){
	List p,s;
	s=(List)malloc(sizeof(struct LNode));
	s->Data=X;
	//如果插在表头
	if(i==1){	
		s->Next=Ptrl;
		return s;
	} 
	//先找到位置
	p=FindKth(i-1,Ptrl);
	s->Next=p->Next;
	p->Next=s;
	return Ptrl; 
}
//删除
List Delete(int i,List Ptrl){
	List p,s;
	//是表头
	if(i==1){
		s=Ptrl;
		if(Ptrl!=NULL) Ptrl=Ptrl->Next;
		else return NULL;
		free(s);
		return Ptrl;
	} 
	p=FindKth(i-1,Ptrl);
	if(p==NULL){
		return NULL;
	}else if(p->Next==NULL){
		return NULL;
	}else{
		s=p->Next;
		p->Next=s->Next;
		free(s);
		return Ptrl;
	}
}

//销毁
Status DestroyList(LinkList &L){
	LinkList p;
	while(L){
		p=L;
		L=L->next;
		delete p;
	}
	return OK;
} 
