public static void insertion_sort_asc(int[] arr, int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  printArray(arr);
}

public static void insertion_sort_dsc(int[] arr, int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key > arr[j]) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
  printArray(arr);
}

public static void printArray(int[] arr) {
  for (int x : arr) {
    System.out.print(x + " ");
  }
  System.out.println();
}

public static void main() {
  System.out.println("Hello World!!");
  int[] arr = { 5, 2, 4, 6, 1, 3 };
  insertion_sort_asc(arr, 6);
  insertion_sort_dsc(arr, 6);
}
