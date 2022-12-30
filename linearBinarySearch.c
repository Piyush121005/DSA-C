#include <stdio.h>
#include <stdlib.h>

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d  ", arr[i]);
//     }
//     printf("\n");
// }
// int linear(int arr[], int n, int ele)
// {
//     int flag = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == ele)
//         {
//             flag = 1;
//             return i;
//         }
//     }
//     if (flag == 0)
//     {
//         return -1;
//     }
// }
// int binary(int arr[], int n, int ele)
// {
//     int i = 0;
//     int j = n - 1;
//     while (i <= j)
//     {
//         int mid = (i + j) / 2;
//         if (arr[mid] == ele)
//         {
//             return mid;
//         }
//         if (arr[mid] < ele)
//         {
//             i = mid + 1;
//         }
//         else
//         {
//             j = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int ch, n, ele, index1, index2;
//     printf("Enter the size of array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter the elements of array at index %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     display(arr, n);
//     printf("Enter the element you want to search: ");
//     scanf("%d", &ele);
//     printf("Enter the method of searching(1 for linear and 2 for binary): ");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//         index1 = linear(arr, n, ele);
//         if (index1 != -1)
//         {
//             printf("Your element is present at index: %d", index1 + 1);
//         }
//         else
//         {
//             printf("Element not found! ");
//         }
//         break;
//     case 2:
//         index2 = binary(arr, n, ele);
//         if (index2 != -1)
//         {
//             printf("Your element is present at index:%d", index2 + 1);
//         }
//         else
//         {
//             printf("Element not found!");
//         }
//         break;
//     }

//     return 0;
// }

struct array
{
    int tSize;
    int uSize;
    int *arr;
};
void create(struct array *a, int total, int used)
{
    a->tSize = total;
    a->uSize = used;
    a->arr = (int *)malloc(total * sizeof(int));
}
void fill(struct array *a)
{
    printf("Enter the values of the element in the array below: \n");
    for (int i = 0; i < a->uSize; i++)
    {
        printf("Enter the value at index %d: ", i + 1);
        scanf("%d", &a->arr[i]);
    }
}
int linear(struct array *a, int element)
{
    for (int i = 0; i < a->uSize; i++)
    {
        if (a->arr[i] == element)
        {
            printf("Value found at index: %d", i + 1);
            return i;
        }
    }
    return -1;
}
int binary(struct array *a, int element)
{
    int i = 0;
    int j = a->uSize;
    int mid;
    while (i <= j)
    {
        mid = (i + j) / 2;
        if (a->arr[mid] == element)
        {
            printf("Value found at index: %d", mid + 1);
            return mid;
        }
        else if (a->arr[mid] < element)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
}

int main()
{
    struct array *a = (struct array *)malloc(sizeof(struct array));
    create(a, 10, 5);
    fill(a);
    // linear(a, 7);
    binary(a, 18);
}