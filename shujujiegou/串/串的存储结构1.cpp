#define MAXLEN 255 
//���Ķ���˳��洢�ṹ
typedef struct{
	char ch[MAXLEN];
	int length;
} SString;

//���Ķ�ʽ�洢�ṹ
typedef struct {
	char *ch;
	int length;
} HString;

//��������ṹ
#define CHUNKSIZE 80
typedef struct Chunk{
	char ch[CHUNKSIZE];
	struct Chunk *next;
} Chunk;
typedef struct{
	Chunk *head,*tail;
	int length;
} LString; 
