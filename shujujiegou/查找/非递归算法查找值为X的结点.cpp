void SearchBST(BiTree &T,int target){
	BiTree s,q,f; //以数据值target，新建结点s
	s=new BiTNode;
	s->data.x=target;
	s->data.count=0;
	s->lchild=s->rchild=NULL;
	if(!T){
		T=s;
		return;
	} //如果该树为空则跳出该函数
	f=NULL;
	q=T;
	while(q){
		if(q->data.x==target){
			q->data.count++；
			return;
		} //如果找到该值则值计数加一
		f=q;
		if(q->data.x->target) q=q->lchild;
		else q=q->rchild;
	} //将新节点插入树中
	if(f->data.x?target) f->lchild=s;
	else f->rchild=s;
}
