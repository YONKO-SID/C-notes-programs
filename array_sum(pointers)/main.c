#include <stdio.h>

int sumArrayElements(int* array,int size);

int main(void){
    // initializing the array
    int elements[] = {1,2,3,4,5};
    // getting the size of array
    int size = sizeof(elements)/sizeof(elements[0]);
    int result;
    result = sumArrayElements(elements,size);
    // printing the final values 
    printf("The sum of all elements is %d\n",result);

return 0 ;
}
// here it's *array instead of *array[0] because i want a pointer to int
// not an arrray of pointers
int sumArrayElements(int* array,int size){
    int sum ;
for (int i = 0 ; i < size; i++){
    // pointer arthmetic 
    sum += *(array + 1);
};

return sum;
}