#include <stdio.h>


int main(){
    //cac kieu du lieu
    float y = 12.34343;
    //printf("so y la: %.3f", y);
    //thao tac mang
    short int a[10] = {0,1,2,3,4,5,6,7,8,9};
    for( int i = 0; i < 10; i++){
        printf("dia chi cua phan tu %d la: %x\n", i, &a[i]);
    }
    int *b;
    printf("dia chi cua b: %d", &b);
    return 0; 
}
