typedef struct GNode *GList;
struct GNode{
	int Tag; //��־��0��ʾ����ǵ�Ԫ�أ�1��ʾ����ǹ����
	union{ //�ӱ�ָ���� SubList �뵥Ԫ��������Data���ã������ô洢�ռ� 
		ElementType Data;
		GList SubList;
	} URegion; 
	GList Next;  //ָ���̽ڵ� 
};
