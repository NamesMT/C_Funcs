int stoint(char *s)
{
    int i = 0, r = 0;

    while (s[i] != '\0' && i < 256)
    {
        r = r * 10 + (s[i] - 48);
        i++;
    }

    return r;
}
