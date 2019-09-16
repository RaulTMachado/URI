#include <stdio.h>

int main(){
    double A = 0, B = 0, med;
    scanf("%lf%lf", &A, &B);
    med = ((A*3.5)+(B*7.5))/(11);
    printf("MEDIA = %.5lf\n", med);

    return 0;
}