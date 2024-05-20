#include <stdio.h>

void swap(int*a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    int a = 1;
    int b = 2;
    swap(&a, &b);
    int *p = &a;
    printf(">>>> gia tri dia chi cua a la: %d\n", &a);
    printf(">>>> gia tri tai o nho %d la: %d\n",p, *p);
    int *x = &p;
    printf(">>>> gia tri dia chi cua con tro p: %d\n", x);
    printf(">>>> gia tri o nho cua dia chi %d la: %d\n",x, *x);
    int *poi = NULL;
    printf("gia tri NULL: %d \n", poi);
    printf(">>>> a la: %d \n", a);
    printf(">>>> b la: %d", b);
    return 0;
}