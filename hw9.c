
void date(int intDateNumber, int *pMonth, int *pDay, int *pYear) {
  *pYear = intDateNumber / 10000; 
  *pMonth = (intDateNumber % 10000) / 100; 
  *pDay = intDateNumber % 100; 
}
