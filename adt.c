#include <stdio.h>
#include <stdlib.h>

// // struct myArray
// // {
// //     int total_size;
// //     int used_size;
// //     int *ptr;
// // };

// // void createArray(struct myArray *a, int tSize, int uSize)
// // {
// //     (*a).total_size = tSize;
// //     a->used_size = uSize;
// //     (*a).ptr = (int *)malloc(tSize * sizeof(int));
// // }
// // void show(struct myArray *a){
// //     for(int i=0;i<=a->used_size;i++){
// //         printf("%d \n",a->ptr[i]);
// //     }
// // }
// // void setval(struct myArray *a){
// //     int n;
// //     for(int i=0;i<=a->used_size;i++){
// //         printf("Enter element %d \n", i);
// //         scanf("%d",&n);
// //         (a->ptr)[i] = n;
// //     }
// // }

// struct arr{
//     int t_size;
//     int u_size;
//     int* ptr;
// };

// void createArr(int T,int U,struct arr* a){
//     (*a).u_size = U;
//     a->t_size = T;
//     a->ptr = (int *)malloc(T * sizeof(int));
// }
// void setto(struct arr* a){
//     printf("Enter the values: \t");
//     for(int i = 0;i<(a->u_size);i++){
//     scanf("%d",&(a->ptr)[i]);
//     }
// }
// void Dis(struct arr* a){
//     for(int i = 0;i<(a->u_size);i++){
//         printf("%d ",(a->ptr)[i]);
//     }
// }

// int main()
// {
//     struct arr mo;
//     createArr(10,4,&mo);
//     setto(&mo);
//     Dis(&mo);
//     // struct myArray marks;
//     // createArray(&marks,10,8);
//     // printf("We are running setVal function now ");
//     // setval(&marks);
//     // printf("We are running show function now");
//     // show(&marks);
//     //pointers basic concept
//     // int x = 5;
//     // int *y = &x;
//     // printf("%d \n", x); //getting the value of x variable
//     // printf("%d \n", &x); //getting the address of x variable
//     // printf("%d \n", y); //getting the address of x variable
//     // printf("%d \n", &y); //getting the address of y pointer
//     // printf("%d \n", *y); //getting the value of x variable
//     // printf("%d \n", *(&y)); //getting the address of x variable

//     return 0;
// }
struct ar
{
    int tSize;
    int uSize;
    int *arr;
};
void cArray(struct ar *a, int total, int used)
{
    a->tSize = total;
    (*a).uSize = used;
    a->arr = (int *)malloc(total * sizeof(int));
}
void setArr(struct ar *a)
{
    printf("Enter the values of the elements in your array below: \n");
    for (int i = 0; i < a->uSize; i++)
    {
        scanf("%d", &a->arr[i]);
    }
}
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