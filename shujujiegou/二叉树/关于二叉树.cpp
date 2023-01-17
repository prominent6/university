//1. ͳ�ƶ�����Ҷ������
// ���������Ϊ�գ�����0
// �����������Ϊ������������Ϊ�գ�����1
// �����������Ϊ�գ�������������ͬʱΪ�գ�������������Ҷ�ӽ�����������������Ҷ�ӽڵ����
int LeafNodeCount(BiTree T){
	if(T==NULL) return 0;
	else if(T->lchild==NULL&&T->rchild==NULL) return 1;
	else return LeafNodeCount(T->lchild)+LeafNodeCount(T->rchild);
} 

//2. �б��������Ƿ����
// ���жϵ�ǰ����Ƿ���ȣ���Ҫ����Ϊ�ա��Ƿ�Ϊ�ա��Ƿ���ȣ�
// �����ǰ��㲻��ȣ�ֱ�ӷ��������������
// �����ǰ�ڵ���ȣ���ô�͵ݹ��ж����ǵ����Һ����Ƿ����
int compareTree(TreeNode* tree1,TreeNode* tree2){
	bool tree1IsNull=(tree1==NULL);
	bool tree2IsNull=(tree2==NULL);
	if(tree1IsNull!=tree2Null) return 1;
	if(tree1IsNull&&tree2Null) return 0;
	if(tree->c!=tree2->c) return 1;
	return (compareTree(tree1->left,tree2->left)&compareTree(tree1->right,tree2->right)&compareTree(tree1->left,tree2->right),compareTree(tree1->right,tree2->left));
}

//3. ����������ÿ���������Ӻ��Һ���
// ���ĳ�����������Ϊ�գ����أ�
//���򽻻��ý�����Һ��ӣ�Ȼ��ݹ齻����������
void ChangeLR(BiTree &T){
	BiTree temp;
	if(T->lchild==NULL&&T->rchild==NULL) return;
	else{
		temp=T->child;
		T->lchild=T->rchild;
		T->rchild=temp;
	}
	ChangeLR(T->lchild);
	ChangeLR(T->rchild);
}


//4. ��������˫������㷨
//��˫�����ָ���ڶ�������ÿһ�������˵���ȷ��������㣬
// �ٰ�˫�����������������
// Ȼ����һ�η��������㣬��������˫�����������������
// ����Ϊ�գ����أ�
// ��ĳ���ΪҶ�ӽڵ㣬�������ý�㣻
// ����������ý�㣬�ݹ��������������������ý�㣬�ݹ������������
void DoubleTraverse(BiTree T){
	if(T==NULL) return;
	else if(T->lchild==NULL&&T->rchild==NULL) cout<<T->data;
	else{
		cout<<T->data;
		DoubleTraverse(T->lchild);
		cout<<T->data;
		DoubleTraverse(T->rchild);
	}
}

//5. ������������Ŀ��
//�����������������ָ���������в��н����������ֵ��
// ������ȿɲ��ò�α����ķ��������¸���������
// ÿ�������ϣ������������ԭ������ȣ����޸������ 
int Width(BiTree bt){
	if(ht==null) return 0;
	else{
		BiTree Q[];
		front=1;rear=1;last=1;
		temp=0;maxw=0;
		Q[rear]=bt;
		while(front<=last){
			p=Q[front++];
			temp++;
			if(p->lchild!=null) Q[++rear]=p->lchild;
			if(p->rchild!=null) Q[++rear]=p->rchild;
			if(front>last){
				last=rear;
				if(temp>maxw) maxw=temp;
				temp=0;
			}
		}
	}
	return(maxw);
}

//6. �ð����˳������������ķ�����ͳ�����о��ж�Ϊ1�Ľڵ���Ŀ
// ��ĳ��������������������ǿջ������������������ǿգ���ý��Ϊ��Ϊ1�Ľ��
int Level(BiTree bt){
	int num=0;
	if(bt){
		QueueInit(Q);
		QueueIn(Q,bt);
		while(!QueueEmpty(Q)){
			p=QueueOut(Q);
			cout<<p->data;
			if(p->lchild&&!p->rchild||!p->lchild&&p->rchild) num++;
			if(p->lchild) QueueIn(Q,P->Lchild);
			if(p->rchild) QueueIn(Q,p->rchild);
		}
	}
	return num;
}

//7. ������������е�һ�����·�����ȣ��������·���ϸ��ڵ��ֵ
void LongestPath(BiTree bt){
	BiTree p=bt;
	BiTree l[],s[];
	int i,top=0,tag[],longest=0;
	while(p||top>0){
		while(p){
			s[++top]=p;
			tag[top]=0;
			p=p->Lc;
		}
		if(tag[top]==1){
			if(!s[top]->Lc&&!s[top]->Rc)
				if(top>longest){
					for(i=1;i<top;i++) l[i]=s[i]; longest=top;top--;
				} 
				else if(top>0){
					tag[top]=1;
					p=s[top].Rc;
					
				}
		}
	}
} 

//8. ����������д�ÿ��Ҷ�ӽ�㵽���ڵ��·��
void AllPath(BTNode *b,ElementType path[],int pathlen){
	int i;
	if(b!=NULL){
		if(b->lchild==NULL&&b->rchild==NULL){
			cout<<""<<b->data<<"�����ڵ��·����"<<b->data;
			for(i=pathlen-1;i>=0;i--) cout<<endl;
		} 
		else{
			path[pathlen]=b->data;
			pathlen++;
			AllPath(b->lchild,path,pathlen);
			AllPath(b->rchild,path,pathlen);
			pathlen--;
		}
	}
} 
