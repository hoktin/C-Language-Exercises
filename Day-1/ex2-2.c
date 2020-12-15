// Write a C program to get the OS system you are using.


#include <stdio.h>

int main(){
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
   #ifdef _WIN64
    printf("Windows (62-bit)");
   #else
    printf("Windows (32-bit)");
   #endif
#elif __APPLE__
    printf("Apple\n");
#elif __linux__
    printf("Linux");
#elif __unix__
    printf("unix");
#elif defined(_POSIX_VERSION)
    printf("POSIX");
#else
    printf("Unknown compiler");
#endif
    return 0;
}
