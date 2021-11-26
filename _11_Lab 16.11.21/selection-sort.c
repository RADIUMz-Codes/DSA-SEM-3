#include <stdio.h>
int main() {
    float arr[5];
    printf("Enter 5 numbers\n");

    for(int i=0;i<5;i++) scanf("%f",&arr[i]);
    for(int i=0;i<5;i++){
        int idx =i;
        for(int j=i+1;j<5;j++){
            idx = (arr[j]<arr[idx])?j:idx;
        }
        float temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }

    for(int i=0;i<5;i++) printf("%f ",arr[i]);
    return 0;
}