void remChar(char *s, char target, int t) //t 1 for delete all matches, t 0 for delete at position
{
    int i, j = 0;
    for (i = 0; s[i] != '\0' && i < 256; i++)
    {
        if (t)
        {
            if (s[i] != target)
                s[j++] = s[i];
        }
        else if (i != target-'0')

        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
