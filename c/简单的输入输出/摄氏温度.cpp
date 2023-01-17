#include <stdio.h>

int main(void)
{
    double fahr,cels;
    printf("Please input cels: ");
    scanf("%lf",&cels);
    fahr=9.0*cels/5.0+32.0;
    printf("The fahr is: %.2f",fahr);

    return 0;
}


#include <stdio.h>

int main(void){
    double f=0,c=0;
    printf("Please input fahr:");
    scanf("%lf",&f);
    c=(f-32.0)*5.0/9.0;
    printf(" The cels is: %.2f",c);
    
    return 0;
}

