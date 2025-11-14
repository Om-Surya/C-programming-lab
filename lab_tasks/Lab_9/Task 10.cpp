#include <stdio.h>

float average(int a,int b,int c){
    return (a+b+c)/3.0;
}

int main(){
    printf("%.2f\n",average(3,6,9));
}

