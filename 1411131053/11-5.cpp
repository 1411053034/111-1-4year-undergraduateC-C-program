﻿// 11-5.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 10
int linearsearch(int id[], int sc[], int stu);
//void sort(int a[], int c[]);
int main(void)
{
    int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
    int c[SIZE] = { 66,67,66,70,73,74,75,75,62,32 };
    puts("Data iteam in original order");
    int i,temp;
    for (i = 0; i < SIZE; ++i) {
        printf("\n");
        printf("%4d", a[i]);
        printf("%4d", c[i]);
    }
        
    

    //sort(a, c);
    puts("\nData iteams in ascending order");
    printf("Enter id:");
    scanf_s("%d",&temp);
    if (temp >= 90) {
        puts("not found");
        return 0;
    }
    printf("id=%d and score=%d",temp,c[linearsearch(a,  c,  temp)]);
    /*for (size_t i = 0; i < SIZE; ++i) {
        printf("\n");
        printf("%4d", a[i]);
        printf("%4d", c[i]);
    }
    */

    puts("");
}

int linearsearch(int id[], int sc[], int stu)
{
    int i;
    for(i=0;i<SIZE;i++)
        if(id[i]==stu) return i;

    return -1;
}


#include <stdio.h>
#define SIZE 10
//void sort(int a[], int c[]);
int linearsearch(int id[], int sc[], int stu);
int main(void)
{
    int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
    int c[SIZE] = { 66,67,66,70,73,74,75,75,62,32 };
    puts("Data iteam in original order");
    int i, temp;
    for (i = 0; i < SIZE; ++i) {
        printf("\n");
        printf("%4d", a[i]);
        printf("%4d", c[i]);
    }



    //sort(a, c);
    puts("\nData iteams in ascending order");
    printf("Enter id:");
    scanf_s("%d", &temp);
    if (linearsearch(a, c, temp) <0) 
        puts("not found");
    else
        printf("id=%d and score=%d", temp, c[linearsearch(a, c, temp)]);

    
   
    
    /*for (size_t i = 0; i < SIZE; ++i) {
        printf("\n");
        printf("%4d", a[i]);
        printf("%4d", c[i]);
    }
    */

    puts("");
}

int linearsearch(int id[], int sc[], int stu)
{
    
    for (int i = 0; i < SIZE; i++)
        if (stu == id[i]) return i;

    return -1;
}
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
