struct date
{
	int year;
	int month;
	int day;
};
struct marriedState  //�����ѻ�ṹ���� 
{
	struct date marryDay;  //������� 
	char spouseName[20];  //��ż���� 
	int child;  //��Ů���� 
}
struct divorceState //�������ṹ������ 
{
	struct date divorceDay; //������� 
	int child;  //��Ů���� 
}
struct person   //����ְ��������Ϣ�ṹ������� 
{
	char name[20];  //���� 
	char sex;  //�Ա� 
	int age; //���� 
	union maritalState marital;   //����״�� 
	int marryFlag;  //����״����� 
} a;
union maritalState  //�������״���õĹ��������� 
{
	int single;  //δ�� 
	struct marriedState married;  //�ѻ� 
	struct divorceState divorce;  //��� 
}

int main(void){
	printf("���������״����1-�ѻ飬2-δ�飬3-���");
	scanf("%d",&a[i].marryFlag);
	if(a[i].marryFlag==1) a[i].marital.single=1;
	else if(a[i].marryFlag==2){
		printf("�����������ڣ���1998-5-20");
		scanf("%d-%d-%d",&a[i].marital.married.marryDay.year,...);
		printf("��������ż���֣�");
		gets(a[i].marital.married.spouseName);
		printf("��������Ů������");
		scanf("%d",&a[i].marital.married.child); 
	} else if(a[i].marryFlag==3){
		printf("������������ڣ�...");
	}
} 
