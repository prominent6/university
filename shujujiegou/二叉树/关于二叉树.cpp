//1. 统计二叉树叶结点个数
// 如果二叉树为空，返回0
// 如果二叉树不为空且左右子树为空，返回1
// 如果二叉树不为空，且左右子树不同时为空，返回左子树中叶子结点个数加上右子树中叶子节点个数
int LeafNodeCount(BiTree T){
	if(T==NULL) return 0;
	else if(T->lchild==NULL&&T->rchild==NULL) return 1;
	else return LeafNodeCount(T->lchild)+LeafNodeCount(T->rchild);
} 

//2. 判别两棵树是否相等
// 先判断当前结点是否相等（需要处理为空、是否都为空、是否相等）
// 如果当前结点不相等，直接返回两棵树不相等
// 如果当前节点相等，那么就递归判断他们的左右孩子是否相等
int compareTree(TreeNode* tree1,TreeNode* tree2){
	bool tree1IsNull=(tree1==NULL);
	bool tree2IsNull=(tree2==NULL);
	if(tree1IsNull!=tree2Null) return 1;
	if(tree1IsNull&&tree2Null) return 0;
	if(tree->c!=tree2->c) return 1;
	return (compareTree(tree1->left,tree2->left)&compareTree(tree1->right,tree2->right)&compareTree(tree1->left,tree2->right),compareTree(tree1->right,tree2->left));
}

//3. 交换二叉树每个结点的左孩子和右孩子
// 如果某结点左右子树为空，返回，
//否则交换该结点左右孩子，然后递归交换左右子树
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


//4. 二叉树的双序遍历算法
//（双序遍历指对于二叉树的每一个结点来说，先访问这个结点，
// 再按双序遍历它的左子树，
// 然后再一次访问这个结点，接下来按双序遍历它的右子树）
// 若数为空，返回；
// 若某结点为叶子节点，则仅输出该结点；
// 否则先输出该结点，递归遍历其左子树，再输出该结点，递归遍历其右子树
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

//5. 计算二叉树最大的宽度
//（二叉树的最大宽度是指二叉树所有层中结点个数的最大值）
// 求最大宽度可采用层次遍历的方法，记下各层结点数，
// 每层遍历完毕，若结点数大于原先最大宽度，则修改最大宽度 
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

//6. 用按层次顺序遍历二叉树的方法，统计树中具有度为1的节点数目
// 若某个结点左子树空右子树非空或者右子树空左子树非空，则该结点为度为1的结点
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

//7. 求任意二叉树中第一条最长的路径长度，并输出此路径上各节点的值
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

//8. 输出二叉树中从每个叶子结点到根节点的路径
void AllPath(BTNode *b,ElementType path[],int pathlen){
	int i;
	if(b!=NULL){
		if(b->lchild==NULL&&b->rchild==NULL){
			cout<<""<<b->data<<"到根节点的路径："<<b->data;
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
