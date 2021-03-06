#include <iostream>

#include "ball_sort.h"
#include "insert_sort.h"
#include "select_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"
#include "heap_sort.h"

void dump(int* data, const int len) {
  for (int i = 0; i < len; ++i) {
    std::cout << data[i] << " ";
  }

  std::cout << std::endl;
}

int main(int argc, char* argv[]) {
  int unsort_nums[] = {9, 1, 7, 3, 5, 2, 4, 8};
  int len = sizeof(unsort_nums) / sizeof(int);
  std::cout << "Before sortting.." << std::endl;
  dump(unsort_nums, len);

#if 0
  // 1.0@ 冒泡排序
  ball_sort(unsort_nums, len);
  dump(unsort_nums, len);

  // 2.0@ 直接插入排序
  insert_sort(unsort_nums, len);
  dump(unsort_nums, len);

  // 3.0@ 二分插入排序
  binary_insert_sort(unsort_nums, len);
  dump(unsort_nums, len);

  // 4.0@ 选择排序
  select_sort(unsort_nums, len);
  dump(unsort_nums, len);

  // 5.0@ 快速排序
  quick_sort(unsort_nums, len);
  dump(unsort_nums, len);

  // 6.0@ 归并排序
  merge_sort(unsort_nums, len);
  dump(unsort_nums, len);
#endif

  // 7.0@ 堆排序
  heap_sort(unsort_nums, len);
  dump(unsort_nums, len);

  return 0;
}
