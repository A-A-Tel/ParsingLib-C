#ifndef CHAR_PARSE_H
#define CHAR_PARSE_H

#define CHAR_MIN_RADIX 2
#define CHAR_MAX_RADIX 36

short char_parse(char c, int radix);

short short_parse(const char *str, int radix);

int int_parse(const char *str, int radix);

long long_parse(const char *str, int radix);

long long long_long_parse(const char *str, int radix);

float float_parse(const char *str, int radix);

double double_parse(const char *str, int radix);

long double long_double_parse(const char *str, int radix);

#endif //CHAR_PARSE_H
