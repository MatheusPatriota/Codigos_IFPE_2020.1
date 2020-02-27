#include <stdio.h>x

int length(int* array){
    int i =0;
    while (array[i] != '\0')
    {
        i++;
    }
    return i;
    
}

void sort(int* array, int leftindex, int rightindex){
    for (int i = 0; i < rightindex; i++)
    {
         for (int j = i+1; j < rightindex; j++)
         {
             if(array[j] < array[i]){
                 int temp = array[i];
                 array[i] = array[j];
                 array[j] = temp;
             }
         }
         
    }
    
}

int main(){
    int a[6] = {6,4,2,1,3};
    sort(a,0,length(a));
    printf("%i, %i, %i, %i, %i",a[0],a[1],a[2],a[3],a[4]);
}