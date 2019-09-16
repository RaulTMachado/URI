#include <math.h>
#include <stdio.h>

int main(){
    double a=0,b=0,c=0, delta=0, bask=0, r1 =0,r2=0;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);

    delta = (pow(b,2) - 4*a*c);

    if (delta<0)
        printf("Impossivel calcular\n");
    else if(a==0)
        printf("Impossivel calcular\n");
    else{
        r1 = (-b + sqrt(delta))/(2*a);
        printf("R1 = %.5lf\n", r1);
        r2 = (-b - sqrt(delta))/(2*a);
        printf("R2 = %.5lf\n", r2);
    }
}