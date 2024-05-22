#include <stdio.h>

void display_caculator(){
    printf("----------------My Caculator----------------\n");
    printf("1.Addition\n");
    printf("2.Subtraction \n");
    printf("3.Multiption\n");
    printf("4.Divive\n");
    printf("5.GCD\n");
    printf("6.Exit programing\n");
    printf("Chose option: ");
}

long long addition(int a, int b){
    return a + b;
}
int subtraction(int a, int b){
    return a - b;
}
long long multiption(int a, int b){
    return a * b;
}
int divive(int a, int b){
    return 1.0 * a /b;
}

int gcd(int a, int b){
    if(a == 0){
        return b;
    }else{
        return gcd(b%a, a);
    }
}
int main(){   
    while(1){
        display_caculator();
        int n;
        scanf("%d", &n);
         if(n == 6){
            printf("Ket thuc chuong trinh!!!");
            break;
        }
        int a, b;
        printf(">>>> nhap hai so a va b la: \n");
        scanf("%d %d", &a, &b);
        if(n == 1){
            int sum = addition(a, b);
            printf("Tong cua hai so la: %d\n", sum);
        }
        if(n == 2){
            int sub = subtraction(a, b);
            printf("Hieu cua hai so la: %d\n", sub);
        }
        if(n == 3){
            long long mul = multiption(a, b);
            printf("Tich cua hai so la: %lld\n", mul);
        }
        if(n == 4){
            double div = divive(a, b);
            printf("Thuong cua hai so la: %.2lf\n", div);
        }
        if(n == 5){
            int gcd_val = gcd(a, b);
            printf("Uoc chung lon nhat la: %d", gcd_val);
        }
    }
    return 0;
}