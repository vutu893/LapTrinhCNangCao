#include <stdio.h>

//struct, enum, union
//define a struct
// struct student_t {
//     //define struct fiels
//     char name[50],
//     int age,
//     int grade;
// }

// typedef struct student_t student_t;
//typedef la de dinh nghia lai mot kieu du lie
//typedef int new_name
//cau truc rut gon cua khai bao struct
typedef struct {
    char name[50];
    int age;
    int grade;
} student_t;


//enum: dung de phan loai cac kieu du lieu
typedef enum {
    BWM,
    HONDA,
    TOYOTA = 6,
    LAMBOGINY = 6
} car_band;

//union dung chung bo nho [=> cac bien trong union co gia tri bang nhau, hay dung de dat ten khac cho du lieu
typedef union {
    int x[2],
    struct a
    {
        int y,
        int z
    };
    
} value_t;

int main()
{
    student_t A = {
        .name = "Vu Trinh Tu",
        .age = 21,
        .grade = 16
    };

    car_band car_band = HONDA;

    value_t B;
    B.x = 3;
    printf(">>>> x = %d \n", B.x);
    B.x = 27;
    printf(">>>> x = %d \n", B.x);
    printf(">>> GIA TRI CUA TOYOTA: %d \n", car_band);
    printf(">>> hoc sinh hoc lop: %d", A.grade);
    return 0;
}