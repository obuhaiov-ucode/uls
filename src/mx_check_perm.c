#include "uls.h"

void mx_check_perm(t_elem **arr, int i, e_flg *flag, t_data *data) {
    write(1, "\n", 1);
    if (data->cur_dir == -2)
        data->cur_dir = 0;
    if (data->cur_dir == -3)
        data->cur_dir = -1;
    if (arr[i]->mode[1] == 'r')
        mx_dir_parse(flag, arr[i]->path, data);
}
