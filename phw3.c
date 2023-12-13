void Mystrcpy(char *src, char *des, int m) {
  if (src == NULL || des == NULL || m < 1) {
    return;
  }
  int len = strlen(src);

  if (m > len) {
    return;
  }
  int i = m - 1;
  int j = 0; 
  while (src[i] != '\0') {
    des[j] = src[i];
    i++; 
    j++;
  }
  des[j] = '\0'; 
}
