//
typedef struct LNode *List;
struct LNode{
	ElementType Data[MAXSIZE];
	int last; 
};
struct LNode L;
List Ptrl;

//主要操作
//初始化 创建空列表
List MakeEmpty()
{
	List Ptrl;
	Ptrl=(List)malloc(sizeof(struct LNode));
	Ptrl->last=-1;  //
	return Ptrl;
};
//寻找 
int Find(ElementType X,List Ptrl){
	int i=0;
	while(i<=Ptrl->last&&Ptrl->Data[i]!=X){
		i++; 
	}
	if(i>Ptrl->last) return -1; //没找到
	else return i; 
}
//插入
//先移动 从后往前，再插入 
void Insert(ElementType X,int i,List Ptrl){
	int j;
	//判断表是否满了
	if(Ptrl->last==MAXSIZE-1){
		printf("表满");
		return; 
	} 
	//判断插入位置是否合法
	if(i<1||i>Ptrl->last+2){
		printf("位置不合法");
		return;
	} 
	for(j=Ptrl->last;j>=i;j--){
		Ptrl->Data[j+1]=Ptrl->Data[j];
	}
	Ptrl->Data[i-1]=X;
	Ptrl->last++;  //调节一下 
	return; 
}
//删除
void Delete(int i,List Ptrl){
	int j;
	//判断
	if(i<!||i>Ptrl->last+1){
		return;
	} 
	for(j=i;i<=Ptrl->last;i++){
		Ptrl->Data[i-1]=Ptrl->Data[i]; 
	}
	Ptrl->last--;
	return;
} 
//销毁
void DestroyList(List Ptrl){
	//释放存储空间 
} 
//清空  
//将线性表长度置为0 
void ClearList(List Ptrl){
	Ptrl->last=-1;
}

