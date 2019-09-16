#include <stdio.h>
int main(){
    double A=0, B=0, C=0, med=0;
    scanf("%lf %lf %lf", &A, &B, &C);
     med = (((A*2)+(B*3)+(C*5))/10);
     printf("MEDIA = %.1lf\n", med);

    return 0;
}