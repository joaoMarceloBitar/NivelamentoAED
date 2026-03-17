#include <stdio.h>
#include <stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize);

int main(){

    int nums1[] = {1,5,6,7,8};
    int nums2[] = {3,6,7,9};

    int nums1Size=5;
    int nums2Size=4;

    int *retornoTam;

    int *arrIntersec = intersection(nums1,nums1Size,nums2,nums2Size,retornoTam);

    free(arrIntersec);
    return 0;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    
    int *arr = (int *)malloc(100*sizeof(int));
    int count=0;

    for(int i=0;i<nums1Size;i++){
        for(int j=0; j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                arr[count]=nums1[i];
                count++;
            }
        }
    }

    return arr;

}