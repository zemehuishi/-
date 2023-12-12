#include <stdio.h>
void MaxAndMin(int *data, int *max, int *min, int len) {
    *max = data[0];
    *min = data[0];
    for (int i = 1; i < len; i++) {
        if (data[i] > *max) {
            *max = data[i];
        }
        if (data[i] < *min) {
            *min = data[i];
        }
    }
}

int main() {
    int n;
    int data[100];
    printf("请输入数组长度：");
    scanf("%d", &n);
    printf("请输入数组元素：");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    int max, min;
    MaxAndMin(data, &max, &min, n);
    printf("数组的最大值是：%d\n", max);
    printf("数组的最小值是：%d\n", min);
    return 0;
}
