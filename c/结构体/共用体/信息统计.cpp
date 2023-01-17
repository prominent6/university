struct date
{
	int year;
	int month;
	int day;
};
struct marriedState  //定义已婚结构类型 
{
	struct date marryDay;  //结婚日期 
	char spouseName[20];  //配偶姓名 
	int child;  //子女数量 
}
struct divorceState //定义离婚结构体类型 
{
	struct date divorceDay; //离婚日期 
	int child;  //子女数量 
}
struct person   //定义职工个人信息结构体的类型 
{
	char name[20];  //姓名 
	char sex;  //性别 
	int age; //年龄 
	union maritalState marital;   //婚姻状况 
	int marryFlag;  //婚姻状况标记 
} a;
union maritalState  //定义婚姻状况用的共用体类型 
{
	int single;  //未婚 
	struct marriedState married;  //已婚 
	struct divorceState divorce;  //离婚 
}

int main(void){
	printf("请输入婚姻状况：1-已婚，2-未婚，3-离婚");
	scanf("%d",&a[i].marryFlag);
	if(a[i].marryFlag==1) a[i].marital.single=1;
	else if(a[i].marryFlag==2){
		printf("请输入结婚日期：如1998-5-20");
		scanf("%d-%d-%d",&a[i].marital.married.marryDay.year,...);
		printf("请输入配偶名字：");
		gets(a[i].marital.married.spouseName);
		printf("请输入子女数量：");
		scanf("%d",&a[i].marital.married.child); 
	} else if(a[i].marryFlag==3){
		printf("请输入离婚日期：...");
	}
} 
