/******************************************************************************
Задание 2. Напишите функцию int minmax(int arr[], int n, int fl), 
которая возвращает максимальный или минимальный элемент массива arr, 
в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум.
https://stepik.org/lesson/65373/step/10?unit=42143
*******************************************************************************/

#include <stdio.h>
#define SIZE 100

int minmax(int arr[], int n, int fl) {
    if(fl = 0) {
    int min = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] < min) {
        min = arr[i];    
        }
        return min;
        }
    }
    if(fl = 1) {
    int max = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] > max) {
        max = arr[i];    
        }
        return max;
        }
    }
}

int main()
{
    int arr[SIZE];
    int n;
    int fl;
    scanf("%d%d", &n, &fl);
    for (int i = 0; i < n; i++) {
        int d;
        scanf("%d", &d);
        arr[i] = d;
    }
    printf("%d", minmax(arr, n, fl));
    return 0;
}
