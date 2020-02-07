#include <stdio.h>
#include <stdint.h>

uint8_t comparacionDeComunes (int32_t*arr1, int32_t arr1Size, int32_t* arr2, int32_t arr2Size, int32_t arrRes[], int32_t arrResSize);



#define MAX 100

void printArray(int *pdata,int n){

    printf("\n The array is: \n");

    for(int i = 0; i< n ;i++) {
        printf("data[%d]: %d\n",i,  *(pdata+i) );
    }
}


int main(){

      // VLA  FLA
    printf("ingrese el tamaño de su primer arreglo\n");
    int asingLengthArr1;
    scanf("%d", &asingLengthArr1);
    scanf("%*c");

    int32_t arr1[asingLengthArr1];

    int32_t sizearr1= asingLengthArr1;

    for (int i = 0; i < sizearr1 ; ++i) {
        printf("ingrese el elemento %d del arreglo \n",i+1);
        scanf("%d", &arr1[i]);
    }
    scanf("%*c");




    printf("ingrese el tamaño de su segundo arreglo\n");
    int asingLengthArr2;
    scanf("%d", &asingLengthArr2);
    scanf("%*c");

    int32_t arr2[asingLengthArr2];

    int32_t sizearr2= asingLengthArr2;

    for (int i = 0; i < sizearr2 ; ++i) {
        printf("ingrese el elemento %d del arreglo \n",i+1);
        scanf("%d", &arr2[i]);
    }
    scanf("%*c");

    int32_t sizeArrRes = 0;
    if(sizearr1==sizearr2){
        sizeArrRes=sizearr1;
    }if(sizearr1>sizearr2){
        sizeArrRes=sizearr1;
    } else{
        sizeArrRes=sizearr2;
    }

    sizeArrRes;
    int32_t *arrRes[sizeArrRes];
    comparacionDeComunes(arr1, sizeof(arr1) / sizeof(int32_t), arr2, sizeof(arr2) / sizeof(int32_t), arrRes,sizeof(arrRes) / sizeof(int32_t));

}

uint8_t comparacionDeComunes(int32_t* arr1, int32_t arr1Size, int32_t* arr2, int32_t arr2Size, int32_t *arrRes, int32_t arrResSize){

    int32_t count=0;


    for (int i = 0; i <arr1Size ; ++i) {
        for (int j = 0; j < arr2Size; ++j) {

            if(arr1[i] == arr2[j]){
                count = count+1;
                arrRes[i] = arr1[i];

            }
        }

    }
    printf("el numero de elementos repetidos es: %d",count);
    printArray(arrRes,arrResSize);

}
