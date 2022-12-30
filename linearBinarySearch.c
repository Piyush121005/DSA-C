#include <stdio.h>
#include <stdlib.h>

//creating user defined datatype
struct array
{
    int tSize;
    int uSize;
    int *arr;
};

//function for creating an array
void create(struct array *a, int total, int used)
{
    a->tSize = total;
    a->uSize = used;
    a->arr = (int *)malloc(total * sizeof(int));
}

//function for filling elements in the array
void fill(struct array *a)
{
    printf("Enter the values of the element in the array below: \n");
    for (int i = 0; i < a->uSize; i++)
    {
        printf("Enter the value at index %d: ", i + 1);
        scanf("%d", &a->arr[i]);
    }
}

//function for linear searching in an array.
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
//Time complexity of linear search in an array is O(n)

//function for binary searching in an array
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
//time complexity of binary searching in an array is O(log(n))


int main()
{
    struct array *a = (struct array *)malloc(sizeof(struct array));
    create(a, 10, 5);
    fill(a);
    // linear(a, 7);
    binary(a, 18);
    return 0;
}
