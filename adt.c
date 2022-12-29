#include <stdio.h>
#include <stdlib.h>
//making array of user defined datatype
struct ar
{
    int tSize;
    int uSize;
    int *arr;
};
//function for creating an array
void cArray(struct ar *a, int total, int used)
{
    a->tSize = total;
    (*a).uSize = used;
    a->arr = (int *)malloc(total * sizeof(int));
}
//function for storing elements in the array
void setArr(struct ar *a)
{
    printf("Enter the values of the elements in your array below: \n");
    for (int i = 0; i < a->uSize; i++)
    {
        scanf("%d", &a->arr[i]);
    }
}
//function for displaying the elements of an array
void disp(struct ar *a)
{
    for (int i = 0; i < a->uSize; i++)
    {
        printf("%d  ", a->arr[i]);
    }
}
int main()
{
    struct ar abstract;
    cArray(&abstract, 10, 5);
    setArr(&abstract);
    disp(&abstract);
    return 0;
}
