int ft_isalpha(int c) {
    unsigned char un_c = (unsigned char)c;
    if ((un_c >= 97 && un_c <= 122) || (un_c >= 65 && un_c <= 90)) {
        return 1;
    }
    return 0;
}