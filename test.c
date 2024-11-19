#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Print ranges from standard headers
    printf("Ranges from standard headers:\n");
    printf("CHAR_MIN: %d, CHAR_MAX: %d\n", CHAR_MIN, CHAR_MAX);
    printf("SHRT_MIN: %d, SHRT_MAX: %d\n", SHRT_MIN, SHRT_MAX);
    printf("INT_MIN: %d, INT_MAX: %d\n", INT_MIN, INT_MAX);
    printf("LONG_MIN: %ld, LONG_MAX: %ld\n", LONG_MIN, LONG_MAX);
    printf("UCHAR_MAX: %u\n", UCHAR_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    printf("FLT_MIN: %e, FLT_MAX: %e\n", FLT_MIN, FLT_MAX);
    printf("DBL_MIN: %e, DBL_MAX: %e\n", DBL_MIN, DBL_MAX);
    printf("LDBL_MIN: %Le, LDBL_MAX: %Le\n", LDBL_MIN, LDBL_MAX);

    // Compute ranges directly
    printf("\nRanges from direct computation:\n");
    printf("Signed char: %d to %d\n", -(char)((unsigned char)~0 >> 1) - 1, (char)((unsigned char)~0 >> 1));
    printf("Signed short: %d to %d\n", -(short)((unsigned short)~0 >> 1) - 1, (short)((unsigned short)~0 >> 1));
    printf("Signed int: %d to %d\n", -(int)((unsigned int)~0 >> 1) - 1, (int)((unsigned int)~0 >> 1));
    printf("Signed long: %ld to %ld\n", -(long)((unsigned long)~0 >> 1) - 1, (long)((unsigned long)~0 >> 1));
    printf("Unsigned char: 0 to %u\n", (unsigned char)~0);
    printf("Unsigned short: 0 to %u\n", (unsigned short)~0);
    printf("Unsigned int: 0 to %u\n", (unsigned int)~0);
    printf("Unsigned long: 0 to %lu\n", (unsigned long)~0);

    return 0;
}
