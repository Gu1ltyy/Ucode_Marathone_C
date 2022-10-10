#include "minilibmx.h"

int main(int argc, char *argv[]) {
    int total_str = 0;
    int total_sum = 0;
    int total_len = argc - 1;
    if (argc <= 1) {
        mx_less_than_two(&total_str, &total_sum, &total_len);
    }
    for (int i = 1; i < argc; i++) {
        int temp_count_len = 1;
        int temp_count_str = 0;
        int temp_count_sum = 0; 

        int file = open(argv[i], O_RDONLY);
        char buffer;
        char temp;

        if (file < 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(". open: ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(0);
        }

        if (read(file, &buffer, 1) < 0 && errno == EISDIR) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(". read: ");
            mx_printerr(strerror(errno));
            mx_printerr("\n");
            exit(0);
        }
        if (close(file) < 0)
            exit(0);
        file = open(argv[i], O_RDONLY);
        while (read(file, &buffer, 1)) {
            if (buffer == '\n') {
                temp_count_len++;
                total_len++;
            }
            if (mx_isspace(buffer) && !mx_isspace(temp)) {
                temp_count_str++;
                total_str++;
            }
            temp_count_sum++;
            total_sum++;
            temp = buffer;
        }
        if (!mx_isspace(temp)) {
            temp_count_str++;
            total_str++;
        }
        if (mx_isspace(temp)) {
            temp_count_len--;
            total_len--;
        }

        if (close(file) < 0)
            exit(0);
        mx_printchar('\t');
        mx_printint(temp_count_len);
        mx_printchar('\t');
        mx_printint(temp_count_str);
        mx_printchar('\t');
        mx_printint(temp_count_sum);
        mx_printchar('\t');
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    if (argc > 2) {
        mx_more_than_two(&total_str, &total_sum, &total_len);
    }
    return 0;
}

