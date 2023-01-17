//被打败的自己 
//#include <stdio.h>
//int main(void){
//	int n;
//	printf("求这个数列的前n个元素:\n");
//	scanf("%d",&n);
//	int sum=1,sum1=0;
//		    for(int i=1;i<=3;i++){
//		    	for(int j=1;j<=2;j++){
//		    		sum1+=sum;
//			      printf("%10ld",sum1);
//				   continue;    
//	      	}
//		    	sum+=sum1;
//			    printf("%10ld",sum);
//			   
//			} 
//			printf("\n");
//			 return 0;
//}



//递归
#include <stdio.h>
int Fibon1(int i){
    if (i == 0 || i == 1){
        return i;
    } else{
        return Fibon1(i - 1) + Fibon1(i - 2);
    }
}
int main(){
    int n = 0;
    int ret = 0;
    printf("求这个数列的前n个元素:\n");
    scanf("%d", &n);
        	
    	for(int i=1;i<=n;i++){
    		ret = Fibon1(i);
    	    printf("%10ld",ret);
    	    if(i%5==0)		printf("\n");
    	}
    return 0;
}


//非递归
#include <stdio.h>
int Fibno2(int n){
    int num1 = 1;
    int num2 = 1;
    int tmp = 0;
    if (n < 3){
        return 1;
    }else{
        for (int i = 0; i <= n-3; i++){
            tmp = num1 + num2;
            num1 = num2;
            num2 = tmp;
        }
        return tmp;
    }
}
int main(){
    int n = 0;
    int ret = 0;
    printf("求这个数列的前n个元素:\n");
    scanf("%d", &n);
        	
    	for(int i=1;i<=n;i++){
    		ret = Fibno2(i);
    	    printf("%10ld",ret);
    	    if(i%5==0)		printf("\n");
    	}
    return 0;
}


//数组
public  int Fibno3(int n){
    List<int> list = new List<int>();
    list.fib(1);
    list.fib(1);
    int count = list.Count;
     while (count < n){
                list.fib(list[count - 2] + list[count - 1]);
                 count = list.Count;
          }
         return list[count - 1];
     }
}

//队列
 public int Fibno4(int n){
    Queue<int> queue = new Queue<int>();
    queue.Enqueue(1);
    queue.Enqueue(1);
    for (int i = 0; i <= n - 2; i++){
        queue.Enqueue(queue.AsQueryable().First() + queue.AsQueryable().Last());
        queue.Dequeue();
    }
     return queue.Peek();
}
