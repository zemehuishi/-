#include <stdio.h>
#include <ctype.h> // 引入ctype.h头文件，用于判断字符类型
int CountNumofLetter(char *string)
{
    int count = 0;
    // 遍历字符串，直到遇到空字符'\0'为止
    while (*string != '\0') {
        // 如果当前字符是字母，计数器加一
        if (isalpha(*string)) {
            count++;
        }
        // 指针后移，指向下一个字符
        string++;
    }
    // 返回计数器的值
    return count;
}

int main() {
    // 定义字符串变量
    char str[100];
    // 输入字符串
    printf("请输入字符串：");
    scanf("%s", str);
    // 调用函数，传递字符串地址
    int result = CountNumofLetter(str);
    // 输出结果
    printf("字符串中有%d个字母\n", result);
    return 0;
}
