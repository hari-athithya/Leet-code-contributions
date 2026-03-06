int titleToNumber(char* columnTitle) {
    int result = 0;
    for (int i = 0; columnTitle[i] != '\0'; i++) {
        result = result * 26 + (columnTitle[i] - 64);
    }
    return result;
}
