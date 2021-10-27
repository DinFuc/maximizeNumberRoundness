int maximizeNumberRoundness(int n)
{
    int count = 0;
    string str = to_string(n);
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0') {
            for (int j = str.size() - 1; j > i; j--) {
                if(str[j] != '0') {
                    char swap = str[i];
                    str[i] = str[j];
                    str[j] = swap;
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}
