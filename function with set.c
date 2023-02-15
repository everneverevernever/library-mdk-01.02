//Напишите функцию int minmax(int arr[], int n, int fl), которая возвращает максимальный или минимальный элемент массива arr,
//в зависимости от значения флага fl. 0 — минимум, 1 — максимум.
#include <stdio.h>
#define SIZE 1000
int minmax(int arr[], int n, int fl){
    int min = arr[0];
    int max = arr[0];
    int e;
    if (fl ==0)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < min)
                min = arr[i];
        }
        e = min;
    }
    else if (fl == 1)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        e = max;
    }
    return e;
}

int main() {
int arr[SIZE];
int n,fl;
scanf("%d%d", &n, &fl);
for (int i = 0; i < n; ++i)
scanf("%d", &arr[i]);
printf("%d\n", minmax(arr, n, fl));

return 0;
}