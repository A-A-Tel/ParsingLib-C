#include "numparse.h"

short char_parse(const char c, const int radix) {
    if (radix < CHAR_MIN_RADIX || radix > CHAR_MAX_RADIX) return 0;

    if (c >= '0' && c <= '9') {
        const int value = c - '0';
        return value < radix ? value : -1;
    }

    if (c >= 'a' && c <= 'z') {
        const int value = c - 'a' + 10;
        return value < radix ? value : -1;
    }

    if (c >= 'A' && c <= 'Z') {
        const int value = c - 'A' + 10;
        return value < radix ? value : -1;
    }

    return -1;
}

short short_parse(const char *str, const int radix) {
    short negative = 0;
    short value = 0;
    int i = 0;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        value *= 10;
        const short num = char_parse(str[i], radix);
        if (num == -1) return 0;
        value += num;
    }

    return negative ? -value : value;
}

int int_parse(const char *str, const int radix) {
    short negative = 0;
    int value = 0;
    int i = 0;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        value *= 10;
        const int num = char_parse(str[i], radix);
        if (num == -1) return 0;
        value += num;
    }

    return negative ? -value : value;
}

long long_parse(const char *str, const int radix) {
    short negative = 0;
    long value = 0;
    int i = 0;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        value *= 10;
        const int num = char_parse(str[i], radix);
        if (num == -1) return 0;
        value += num;
    }

    return negative ? -value : value;
}

long long long_long_parse(const char *str, const int radix) {
    short negative = 0;
    long long value = 0;
    int i = 0;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        value *= 10;
        const int num = char_parse(str[i], radix);
        if (num == -1) return 0;
        value += num;
    }

    return negative ? -value : value;
}

float float_parse(const char *str, const int radix) {
    short negative = 0;
    float value = 0;
    int i = 0;
    int divide = 0;
    int divide_factor = 1;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {

        if (str[i] == '.') {
            if (divide) return 0;
            divide = 1;
        } else {

            if (divide) divide_factor *= 10;
            value *= 10;
            const int num = char_parse(str[i], radix);
            if (num == -1) return 0;
            value += num;
        }
    }

    value /= (float) divide_factor;
    return negative ? -value : value;
}

double double_parse(const char *str, const int radix) {
    short negative = 0;
    double value = 0;
    int i = 0;
    int divide = 0;
    int divide_factor = 1;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {

        if (str[i] == '.') {
            if (divide) return 0;
            divide = 1;
        } else {

            if (divide) divide_factor *= 10;
            value *= 10;
            const int num = char_parse(str[i], radix);
            if (num == -1) return 0;
            value += num;
        }
    }

    value /= (float) divide_factor;
    return negative ? -value : value;
}

long double long_double_parse(const char *str, const int radix) {
    short negative = 0;
    long double value = 0;
    int i = 0;
    int divide = 0;
    int divide_factor = 1;

    if (str[i] == '-') {
        negative = 1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    for (; str[i] != '\0'; i++) {

        if (str[i] == '.') {
            if (divide) return 0;
            divide = 1;
        } else {

            if (divide) divide_factor *= 10;
            value *= 10;
            const int num = char_parse(str[i], radix);
            if (num == -1) return 0;
            value += num;
        }
    }

    value /= (float) divide_factor;
    return negative ? -value : value;
}