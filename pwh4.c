void MatrixInvert(double (* matrix) [], int n) {
  if (matrix == NULL || n < 1) {
    return; 
  }

  double temp;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {

      temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
}


int main() {

  double matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  printf("Original matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%.2f ", matrix[i][j]);
    }
    printf("\n");
  }

  MatrixInvert(matrix, 3);

  printf("Transposed matrix:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%.2f ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
