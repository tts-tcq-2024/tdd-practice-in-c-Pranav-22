
int add_arr(int *arr,int cnt)
{
    int i = 0;
    int total = 0;
    while(i < cnt)
    {
        if(arr[i] < 1000)
        {
          total += arr[i];
        }
        i++;
    }

    return total;
}
int check_ch(const char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return 1;
    }
    return 0;
}
int sum(const char *ch)
{
    int str_len = strlen(ch);
    int i =0,j=0,num = 0;
    int total = 0;
    int num_arr[100] = {0};
    while(ch[i] != '\0')
    {
        if(check_ch(ch[i]))
        {
            num = num * 10 + ch[i] - '0';
            if(check_ch(ch[i+1]))
            {
                i++;
            }
            else
            {
                  num_arr[i] = num;
                  num = 0;
                  i++;
            }
        }
        else
        {
            i++;
        }
    }

    total = add_arr(num_arr,i);

    return total;
}

int check_string(const char *ch)
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
    if(check_string(ch))
    {
        int total = sum(ch);

        if(total > 0)
        {
            return total;
        }
        return 0;
    }

    return -1;
}
