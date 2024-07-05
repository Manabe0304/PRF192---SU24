#include <stdio.h>
#include <string.h>

int main() {
    char st1[200], st2[100], st3[100];
    
    // Input the strings
    printf("Nhap xau goc: ");
    gets(st1);
    
    printf("Nhap xau con cu: ");
    gets(st2);
    
    printf("Nhap xau con moi: ");
    gets(st3);
    
    // Find the first occurrence of st2 in st1
    char *pos = strstr(st1, st2);
    
    if (pos != NULL) {
        // If found, replace st2 with st3
        char result[300]; // Result string
        
        // Calculate the positions
        int len1 = pos - st1;
        int len2 = strlen(st2);
        int len3 = strlen(st3);
        
        // Copy the part before st2
        strncpy(result, st1, len1);
        result[len1] = '\0';
        
        // Append st3
        strcat(result, st3);
        
        // Append the part after st2
        strcat(result, pos + len2);
        
        printf("Xau goc sau khi duoc thay the: '%s'\n", result);
    } else {
        // If not found, print message
        printf("Xau '%s' khong co trong xau '%s'\n", st2, st1);
    }

    return 0;
}
