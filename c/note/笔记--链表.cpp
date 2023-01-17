//指向本结构体类型的指针成员的结构体类型声明方式
struct temp{
	int data;
	struct temp *pt;
}; 


//最简单值包含一个实际节点数据的链表结构
struct link{
	int data;  //数据域 
	struct link *next; //指针域 
}; 
