#include <stdio.h>
 
int main()
{
    int a[4], b, c[3], d[4], i = 1;
    for(a[0] = 1010; a[0] <= 1377; a[0]++)
      for(b = 112; b <= 142; b++)
        for(c[0] = 8; c[0] <= 9; c[0]++)
          if(b*c[0] > 1000 && (d[0] = a[0] - b*c[0]) >= 10 && d[0] < 100)
            for(a[1] = 0; a[1] <= 9; a[1]++)
              if((d[1] = d[0]*10 + a[1] - b*7) >= 100 && d[1] < b)
                for(a[2] = 0; a[2] <= 9; a[2]++)
                for(c[1] = 7; c[1] <= 8; c[1]++)
                  if(b*c[1] < 1000 && (d[2] = d[1]*10 + a[2] - b*c[1]) >= 10 && d[2] < 100)
                    for(a[3] = 0; a[3] <= 99; a[3]++)
                    for(c[2] = 8; c[2] <= 9; c[2]++)
                      if(0 == d[2]*100 + a[3] - b*c[2])
                      {
                          printf("No%2d:",i++);
                          printf("%d%d%d%d%d/", a[0], a[1], a[2], a[3]/10, a[3]%10);
                          printf("%d=",b);
                          printf("%d%d%d%d%d", c[0], 7, c[1], 0, c[2]);
                      }
     printf("\n");
 
    return 0;
}
