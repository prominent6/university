//
typedef struct LNode *List;
struct LNode{
	ElementType Data;
	List Next; 
};
struct LNode L;
List Ptrl;

//������ ���Ǵ����ṹ����� 
List creatList(){
	List headNode=(List)malloc(sizeof(struct LNode));
	//data����ʼ�������컯����ʹ֪���Ǳ�ͷ 
	headNOde->Next=NULL;
	return headNode;
} 

//��ӡ��
void printList(List Ptrl){
	List pMove=headNode->next;
	while(pMove){
		cout<<pMove->Data<<endl;
		pMove=pMove->Next;
	}
	cout<<endl;
} 

//���
int Length(List Ptrl){
	List P=Ptrl;
	int j=0;
	while(p){
		p=p->Next;
		j++;
	}
	return j;
} 
//����Ų���
List FindKth(int K,List Ptrl){  //���ؽڵ�ĵ�ֵַ 
	List p=Ptrl;
	int i=1;
	for(p!=NULL&&i<K){
		p=p->Next;
		i++;
	}
	if(i==K) return p;
	else return NULL;
}
//��ֵ����
List Find(ElementType X,List Ptrl){
	List p=Ptrl;
	for(p!NULL&&p->Date!=X){
		p=p->Next;
	}
	if(p->Date==X) return p;
	else return NULL;
} 

//β�巨
void insertNodeByTail(List Ptrl,int data){
	List newNode=(List)malloc(sizeof(struct LNode));
	List tailNode=headNode;
	while(tailNode->next){
		tailNode=tailNode->Next;
	}
	tailNode->Next=newNode;
} 
//����
List Insert(ElementType X,int i,List Ptrl){
	List p,s;
	s=(List)malloc(sizeof(struct LNode));
	s->Data=X;
	//������ڱ�ͷ
	if(i==1){	
		s->Next=Ptrl;
		return s;
	} 
	//���ҵ�λ��
	p=FindKth(i-1,Ptrl);
	s->Next=p->Next;
	p->Next=s;
	return Ptrl; 
}
//ɾ��
List Delete(int i,List Ptrl){
	List p,s;
	//�Ǳ�ͷ
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

//����
Status DestroyList(LinkList &L){
	LinkList p;
	while(L){
		p=L;
		L=L->next;
		delete p;
	}
	return OK;
} 
