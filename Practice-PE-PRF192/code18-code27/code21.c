#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    system("cls");
    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, i, j;
	scanf("%d", &n);
	
    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    
    //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++){
            printf(" ");
        }
        for (j = i; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
	
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return (0);
}

//int main() {
//    system("cls");
//    //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
//
//    int n;
//    scanf("%d", &n);
//
//    // Fixed Do not edit anything here.
//    printf("\nOUTPUT:\n");
//    //@STUDENT: WRITE YOUR OUTPUT HERE:
//    int i = 0;
//
//    //		          *
//    //               * *
//    //              *   *
//    //             *     *
//    //            *********
//    //	
//    // hang dau tien, luon co n - 1 space va 1 dau sao
//    for (i = 0; i < n - 1; i++) {
//        printf(" ");
//    }
//    
//    printf("*\n");
//    // hang thu 1 den hang thu n - 2????
//    for (i = 1; i < n - 1; i++) {
//        //??? khoang trang = n - 1 - i;
//        int j = 0;
//        for (j = 0; j < n - 1 - i; j++) {
//            printf(" ");
//        }
//        // 1 dau *
//        printf("*");
//        //??? khoang trang = 2 * i + 1;
//        for (j = 0; j < (2 * i - 1); j++) {
//            printf(" ");
//        }
//        // 1 dau *
//        printf("*");
//        printf("\n");
//    }
//    //	hang cuoi cung thi luon co 2n -1 dau sao
//    for (i = 0; i < (2 * n - 1); i++) {
//        printf("*");
//    }
//
//    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
//    printf("\n");
//    system("pause");
//    return (0);
//}
