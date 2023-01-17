#include <stdio.h>
int main()
{  	 	 	  	 	
    char c;
    int first = 1, flag = 0, n = 0;
    while ((c = getchar()) != '\n')
    {  	 	 	  	 	
        n++;
        if (first == 1)
        {  	 	 	  	 	
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c == '_'))   flag = 1;
         first = 0;
        }
        else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9') || (c == '_')))
            flag = 0;
    }
    if (flag == 1 && n <= 31)
        printf("is\n");
    else
        printf("is not\n");
    return 0;
}  	 	 	  	 	


