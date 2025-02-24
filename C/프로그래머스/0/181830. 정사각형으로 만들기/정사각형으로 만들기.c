#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_rows는 2차원 배열 arr의 행 길이, arr_cols는 2차원 배열 arr의 열 길이입니다.
int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int **answer;
    
    if(arr_rows > arr_cols)
    {
        answer = (int**)malloc(sizeof(int*) * arr_rows);
        for(int i = 0 ; i < arr_rows ; i++)
            answer[i] = (int*)calloc(arr_rows, sizeof(int));
        for(int i = 0 ; i < arr_rows ; i++)
        {
            for(int j = 0 ; j < arr_cols ; j++)
            {
                answer[i][j] = arr[i][j];
            }
        }
    }
    else
    {
        answer = (int**)malloc(sizeof(int*) * arr_cols);
        for(int i = 0 ; i < arr_cols ; i++)
            answer[i] = (int*)calloc(arr_cols, sizeof(int));
        for(int i = 0 ; i < arr_rows ; i++)
        {
            for(int j = 0 ; j < arr_cols ; j++)
            {
                answer[i][j] = arr[i][j];
            }
        }
    }
    
    return answer;
}