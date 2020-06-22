#include "uls.h"

char *mx_del_car_ret(const char *name) {
    int len = mx_strlen(name);
    char *res = mx_strnew(len);
    int j = 0;

    for (int i = 0; i < len; i++) {
        if (name[i] != '\r')
            res[j++] = name[i];
    }
    return res;
}
