int check_ch(const char *ch)
{
    int i = 0;
    int str_len = strlen(ch);
    
    if(ch != NULL && str_len > 0)
    {
        return 1;
    }
    
    return 0;
}
int add(const char *ch)
{
    if(check_ch(ch))
    {
        return 0;
    }
   
    return -1;
}
