#include <stdio.h>
#include <ctype.h>
int CountNumofLetter(char *string)
{
    int count = 0;
    while (*string != '\0') {
        if (isalpha(*string)) {
            count++;
        }
        string++;
    }
    return count;
}

int main() {
    char str[100];
    printf("请输入字符串：");
    scanf("%s", str);
    int result = CountNumofLetter(str);
    printf("字符串中有%d个字母\n", result);
    return 0;
}
