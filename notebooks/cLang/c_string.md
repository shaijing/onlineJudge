## 1. strlen()

作用:返回字符串s中的字符数(末尾'\0'除外)
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
    char str[100] = "abc  ";
    printf("%d",strlen(str));
    return 0;
}

```

## 2. strcat()
作用:把s2指向的字符串连接到s1指向字符串后面,s2字符串的第一个字符覆盖s1字符串的'\0',该函数返回s1,
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
       char str1[100] = "abc";
       char str2[100] = "123";
       printf("%s",strcat(str1,str2));
       return 0;
}

```

## 3. strncat()
作用:把s2前n个字符连接到s1后面,该函数返回s1,
```c {.line-numbers}
#include<stdio.h> 
#include<string.h> 
int main() {
    char* s2 = "bbbbbbbbbbbbbbbbbbbb";//20 'b's
    char s1[50] = "aaaaaaaaaaaaaaaaaaaa";//20 'a's
    strncat(s1, s2, 10);
    puts(s1);
    return 0;
}
```
> 与strncpy不同的是，strncat会自动在末尾加‘\0’，若指定长度超过源字符串长度，则只复制源字符串长度即停止　

## 4. strcmp()
作用:比较两个字符串s1和s2,如果s1>s2,返回正数;如果s1<s2,返回负数;如果s1=s2,返回0
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100] = "abc";
    char str2[100] = "abc";
    char str3[100] = "bcd";
    if (strcmp(str1, str2) == 0)
        printf("str1与str2相等\n");
    if (strcmp(str3, str1) == 1)
        printf("str3大于str1\n");
    if (strcmp(str1, str3) == -1)
        printf("str1小于str3");
    return 0;
}
```

## 5. strncmp()
作用:比较两个字符串s1和s2,如果s1>s2,返回正数;如果s1<s2,返回负数;如果s1=s2,返回0
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100] = "abc";
    char str2[100] = "abc";
    char str3[100] = "bcd";
    if (strncmp(str1, str2,3) == 0)
        printf("str1与str2相等\n");
    if (strncmp(str3, str1,1) == 1)
        printf("str3与str1相等(前n个字符)\n");
    if (strncmp(str1, str3,2) == -1)
        printf("str1小于str3");
    return 0;
}
```

## 6. strcpy()
作用:把s2指向的字符串拷贝到s1的内存位置(会覆盖s1的内容),返回s1
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100] = "abc";
    char str2[100] = "123";
    printf("%s", strcpy(str1, str2));
    return 0;
}

```

## 7. strncpy()
作用: 将字符串s2中的n个字符拷贝到字符串s1的内存位置(会覆盖s1的内容),返回s1
```c {.line-numbers}
#include<stdio.h> 
#include<string.h> 
int main() {
    char* s2 = "bbbbbbbbbbbbbbbbbbbb";//20 'b's
    char s1[50] = "aaaaaaaaaaaaaaaaaaaa";//20 'a's
    strncpy(s1, s2, 10);
    puts(s1);
    return 0;
}
```

## 8. strchr()
作用:查找字符串s中第一次出现字符c的位置指针,如果没有找到,返回NULL
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100] = "abcdefg";
    char str2[100] = "123";
    if (strchr(str1, 'c'))//找到，则返回指向该字符指针，输出其后的字符串 
        printf("%s\n", strchr(str1, 'c'));
    if (strchr(str1, 'n') == NULL)//返回为NULL，则没有找到 
        printf("未找到！");
    return 0;
}

```

## 9. strstr()
作用:查找字符串s1中第一次出现字符串s2的位置指针,如果没有找到,返回NULL
```c {.line-numbers}
#include<stdio.h>
#include<string.h>

int main() {
    char str1[100] = "abcdefg";
    if (strstr(str1, "bc"))//找到，则返回指向该字符指针，输出该字符串后的所有字符 
        printf("%s\n", strstr(str1, "bc"));
    if (strstr(str1, "bca") == NULL)//返回为NULL，则没有找到 
        printf("未找到！");
    return 0;
}

```

## 10. strrrev()
```c {.line-numbers}
#include<string.h> 
#include<stdio.h> 
int main() {
    char forward[] = "string"; //原文中定义为char*是不对的，指向代码段的指针内容是不可变的
    printf("Before strrev():%s\n", forward);
    strrev(forward);
    printf("Afterstrrev(): %s\n", forward);
    return 0;
}
```
