char *string_in(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for (int i = 0; i <= len1 - len2; i++) 
    {
        if (strncmp(s1 + i, s2, len2) == 0) 
        {
            return s1 + i;
        }
    }
    return NULL;
}

int main() {
    char s1[20];
    char s2[10];
    char *p; 
    printf("请输入第一个字符串：\n");
    scanf("%s", s1); 
    printf("请输入第二个字符串：\n");
    scanf("%s", s2); 
    p = string_in(s1, s2); 
    if (p) 
    {
        printf("第二个字符串被包含在第一个字符串中，其地址是：%p\n", p); 
    } 
    else 
    {
        printf("第二个字符串不被包含在第一个字符串中。\n");
    }
    return 0;
}
