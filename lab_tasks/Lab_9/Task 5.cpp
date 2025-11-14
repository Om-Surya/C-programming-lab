#include <stdio.h>

void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int x=5,y=7;
    printf("%d %d\n",x,y);
    swap(&x,&y);
    printf("%d %d\n",x,y);
}

