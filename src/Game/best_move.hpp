int Game::best_move()
{
    int single_threat[3],double_threat[3],j=0,k=0;
    bool flag=false;
    auto pm=possible_moves();
    for (int i = 0; i < 9; i++)
    {
        if (pm[i]==1)
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
        int sum=0;
        for (int i = 0; i < 9; i++)
        {
            sum+=pm[i];
        }
        if(sum==-1 && container[4]==(char)NULL)
            return 4;
        else if(sum==-1 && container[4]=='X')
            return 6;
        else if((container[0]=='X'&&container[8]=='X'&&sum==-3)||(container[2]=='X'&&container[6]=='X'&&sum==-3))
            return 1;
        else 
        for (int i = 0; i < 9; i++)
        {
            if(container[i]==(char)NULL)
                return i;
        }      
    }
    else return (k!=0)?double_threat[0]:single_threat[0];        
}