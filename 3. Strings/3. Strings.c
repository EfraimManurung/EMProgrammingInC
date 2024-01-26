#include<stdio.h>

int get_string_length(char *str) {
    int count = 0;

    while(str[count] != 0) {
        count++;
    }

    return count;
}

void copy_string(char *from, char *to) {
    int count = 0;

    while(from[count] != 0) {
        to[count] = from[count];
        count++;
    }

    to[count] = 0;  // Make sure it's NULL terminated.
}

void reverse_string(char *from, char *to) {
    int count_char = 0;
    int len_from = strlen(from);

    while(from[count_char] != 0) {
        to[count_char] = from[len_from - count_char];
        count_char++;
    }

    to[count_char] = 0; // Make sure it's NULL terminated.
}

/*
    str = "Hello World!" 
    12 characters
*/
void reverse0(char *str) {
    int length = strlen(str);

    // length = 12
    // i < 12 / 2
    // i < 6
    for (int i=0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char *str1 = "Hello World!";
    char str2[] = "Hello World!";

    // char str = "Hello World!";
    // char *str3 = &str;

    // Pointer
    int p = 5;
    int *vp = &p;

    printf("Pointer str1 %s\n", str1);
    printf("Array str2 %s\n", str2);

    printf("Pointer int %d\n", vp);
    printf("Pointer int i %i\n", vp);
    printf("Pointer value %d\n", *vp);
    //printf("Addres and pointer str3 %s\n", str3);

    printf("%s\12", str1);

    printf("%s has lenght of %d bytes \n", str1, get_string_length(str1));

    char newString[500];
    char duplicateString[500];

    // Call duplicate function
    copy_string(str1, newString);

    printf("copy_string %s \n", newString);

    // reverse_string(str1, duplicateString);
    printf("reverse string %s \n", duplicateString);

    reverse0(newString);
    printf("reverse string %s \n", newString);

    return 0;
}