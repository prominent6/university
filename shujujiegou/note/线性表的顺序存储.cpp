//
typedef struct LNode *List;
struct LNode{
	ElementType Data[MAXSIZE];
	int last; 
};
struct LNode L;
List Ptrl;

//��Ҫ����
//��ʼ�� �������б�
List MakeEmpty()
{
	List Ptrl;
	Ptrl=(List)malloc(sizeof(struct LNode));
	Ptrl->last=-1;  //
	return Ptrl;
};
//Ѱ�� 
int Find(ElementType X,List Ptrl){
	int i=0;
	while(i<=Ptrl->last&&Ptrl->Data[i]!=X){
		i++; 
	}
	if(i>Ptrl->last) return -1; //û�ҵ�
	else return i; 
}
//����
//���ƶ� �Ӻ���ǰ���ٲ��� 
void Insert(ElementType X,int i,List Ptrl){
	int j;
	//�жϱ��Ƿ�����
	if(Ptrl->last==MAXSIZE-1){
		printf("����");
		return; 
	} 
	//�жϲ���λ���Ƿ�Ϸ�
	if(i<1||i>Ptrl->last+2){
		printf("λ�ò��Ϸ�");
		return;
	} 
	for(j=Ptrl->last;j>=i;j--){
		Ptrl->Data[j+1]=Ptrl->Data[j];
	}
	Ptrl->Data[i-1]=X;
	Ptrl->last++;  //����һ�� 
	return; 
}
//ɾ��
void Delete(int i,List Ptrl){
	int j;
	//�ж�
	if(i<!||i>Ptrl->last+1){
		return;
	} 
	for(j=i;i<=Ptrl->last;i++){
		Ptrl->Data[i-1]=Ptrl->Data[i]; 
	}
	Ptrl->last--;
	return;
} 
//����
void DestroyList(List Ptrl){
	//�ͷŴ洢�ռ� 
} 
//���  
//�����Ա�����Ϊ0 
void ClearList(List Ptrl){
	Ptrl->last=-1;
}

