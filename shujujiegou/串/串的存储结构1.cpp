#define MAXLEN 255 
//串的定长顺序存储结构
typedef struct{
	char ch[MAXLEN];
	int length;
} SString;

//串的堆式存储结构
typedef struct {
	char *ch;
	int length;
} HString;

//串的链块结构
#define CHUNKSIZE 80
typedef struct Chunk{
	char ch[CHUNKSIZE];
	struct Chunk *next;
} Chunk;
typedef struct{
	Chunk *head,*tail;
	int length;
} LString; 
