int StringToInt(char *string) {
    int sign = 1;
    int result = 0;
    if (*string == '-')
    {
        sign = -1;
        string++;
    }
    while (*string != '\0') 
    {
        if (*string >= '0' && *string <= '9')
        {
            result = result * 10 + (*string - '0');
        }
        else 
        { 
            printf("错误!\n");
            return 0;
        }
        string++;
    }
    return sign * result;
}
