int Game::best_move()
{
    int single_threat[3],double_threat[3],j=0,k=0;
    bool flag=false;
    auto pm=possible_moves();
    for (int i = 0; i < 9; i++)
    {
        if (pm[i]=1)
        {
            single_threat[j++]=i;
            flag=true;
        }
        else if (pm[i]>1)
        {
            double_threat[k++]=i;
            flag=true;
        }
    }
    if (flag==false)
    {        
        for (int i = 0; i < 8; i++)
        {
            char str[9];
            memmove(str,container,sizeof(container));
            if (pm[i]==0)
            {
                
            }            
        }
        
    }
    else return (k!=0)?double_threat[0]:single_threat[0];        
}