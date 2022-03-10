// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int count = 0;
  for (int z = 0; z <= size; z++) {
    if (arr[z] == value) {
      count+=1;
    }
  }
  if (count > 0)
    return count;
  else
    return 0; // если ничего не найдено
}
