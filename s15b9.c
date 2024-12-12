#include <stdio.h>
#include<string.h> 
int main() {
    char text[50] = "Hello World"; 
    char kiTu;  
    printf("Nhap ky tu muon xoa: ");
    scanf("%c", &kiTu);
    int i = 0, j = 0;
    while (text[i]) {
        if (text[i] != kiTu) {
            text[j++] = text[i]; 
        }
        i++;
    }
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kiTu, text);
    return 0;
}
