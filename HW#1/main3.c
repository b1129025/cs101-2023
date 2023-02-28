#include <stdio.h>

int main() {
    char a[] = "ABCabcABC";
    int shift = 4;
    printf("%s\n", a);
    printf("%d\n", shift);
    
    char temp[shift];
    int n = sizeof(a) / sizeof(char) - 1;
    for (int i = 0; i < shift; i++) { 
        temp[i] = a[i];
    }
    for (int i = 0; i < n - shift; i++) {  
        a[i] = a[i + shift];
    }
    for (int i = 0; i < shift; i++) {  
        a[n - shift + i] = temp[i];
    }
    printf("%s", a);
    return 0;
}
