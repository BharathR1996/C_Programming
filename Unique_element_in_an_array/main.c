#include<stdio.h>
#include<stdint.h>

int main(){
    int arr[5] = {1,2,1,2,5};
    int i,result = 0;
    for(i=0;i<5;i++){
        result ^= arr[i];
    }
    printf("unique element in the array is :%d\n",result);
    return 0;
}
