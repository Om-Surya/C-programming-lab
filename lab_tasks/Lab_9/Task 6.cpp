#include <stdio.h>

void calculate(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)(a+b)/2;
}

int main(){
    int s;
    float a;
    calculate(4,6,&s,&a);
    printf("%d %.2f\n",s,a);
}

