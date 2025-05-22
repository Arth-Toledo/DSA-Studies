#include <stdio.h>

#define VEC_LEN 10

int linear_search(int vec[], int vec_len, int target){
    for(unsigned int i = 0; i < vec_len; i++){
        if (vec[i] == target){
            return i;
        }else{
            continue;
        }
    }
    return -1;
}

int main(){
    int vec[] = {1,2,3,4,5,6,7,8,9,10};
    int three_location = linear_search(vec,VEC_LEN, 9);
    printf("three location is: %d", three_location);
}