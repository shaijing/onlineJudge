#include <stdc.h>

typedef struct stu {
    char name[10];
    int id;
} Student;

int serialize(char* str, Student student);
int serialize(char* str, Student student) {
    return sprintf(str, "student : {name : '%s', id : %d}", student.name, student.id);
}


int main(int argc, char** argv) {
    // FILE* f;
    // f = fopen("Student.dat", "a+b");
    // rewind(f); // 定位到文件开始

    // char str[20] = {};
    // Student s = {
    //     "Li Hua",
    //     1
    // };
    // //fwrite(&s, sizeof(s), 1, f);
    // char a = 'a';
    // fwrite(&a, sizeof(a), 1, f);
    // serialize(str, s);
    // printf("%s\n", str);

    return 0;
}

