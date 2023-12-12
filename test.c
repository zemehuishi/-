#include <stdio.h>
void MaxAndMin(int *data, int *max, int *min, int len) {
    // 初始化最大值和最小值为数组的第一个元素
    *max = data[0];
    *min = data[0];
    // 从第二个元素开始遍历数组
    for (int i = 1; i < len; i++) {
        // 如果当前元素大于最大值，更新最大值
        if (data[i] > *max) {
            *max = data[i];
        }
        // 如果当前元素小于最小值，更新最小值
        if (data[i] < *min) {
            *min = data[i];
        }
    }
}

int main() {
    // 定义数组长度和数组变量
    int n;
    int data[100];
    // 输入数组长度
    printf("请输入数组长度：");
    scanf("%d", &n);
    // 输入数组元素
    printf("请输入数组元素：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    // 定义最大值和最小值变量
    int max, min;
    // 调用函数，传递数组地址和最大值最小值的地址
    MaxAndMin(data, &max, &min, n);
    // 输出结果
    printf("数组的最大值是：%d\n", max);
    printf("数组的最小值是：%d\n", min);
    return 0;
}
