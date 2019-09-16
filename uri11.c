#include <math.h>
#include <stdio.h>
int main(){
    int R =0;
    double vol=0.0;
    scanf("%d",&R);
    vol = (4/3.0)* 3.14159 * pow(R,3);
    printf("VOLUME = %.3lf\n", vol); 
}