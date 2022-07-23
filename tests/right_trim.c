char *rtrim(char *str) {
    char *end = NULL;

    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';
    return str;
}