#include <stdio.h>

#include "numparse.h"

int main() {

    const float num = float_parse("12.3123245", 10);

    printf("%f\n", num);
    return 0;
}