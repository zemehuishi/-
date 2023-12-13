// 定义一个名为date的函数，接收一个yyyymmdd形式的整数，确定相应的月、日、年的值，并向调用函数返回这个值
void date(int intDateNumber, int *pMonth, int *pDay, int *pYear) {
  // 使用取余和除法运算来分离年、月、日的值
  *pYear = intDateNumber / 10000; // 取前四位作为年份
  *pMonth = (intDateNumber % 10000) / 100; // 取中间两位作为月份
  *pDay = intDateNumber % 100; // 取最后两位作为日期
}
