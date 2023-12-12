int Delete(int *data, int len)
{
    int x; 
    printf("请输入要删除的元素：\n");
    scanf("%d", &x);
    for (int i = 0; i < len; i++)
    {
        if (data[i] == x)
        {
            for (int j = i; j < len - 1; j++)
            {
                data[j] = data[j + 1];
            }
            len--;
            i--;
        }
    }
    return len;
}
