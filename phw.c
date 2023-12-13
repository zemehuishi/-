// 定义一个名为strcpy的函数，将字符串from复制到字符串to
void strcpy(char *to, char *from) {
  // 使用一个循环来逐个复制字符，直到遇到字符串结束符'\0'
  while (*to++ = *from++);
}

// 定义一个主程序，调用strcpy函数
#include <stdio.h>
int main() {
  // 定义两个字符串变量
  char to[20];
  char from[] = "Hello, world!";
  // 调用strcpy函数，将from复制到to
  strcpy(to, from);
  // 打印to的内容
  printf("The copied string is: %s\n", to);
  return 0;
}
