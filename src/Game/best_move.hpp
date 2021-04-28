int Game::best_move()
{
    int single_threat[3],double_threat[3],j=0,k=0;
    auto pm=possible_moves();
    for (int i = 0; i < 9; i++)
    {
        if (pm[i]=1)
        {
            single_threat[j++]=pm[i];
        }
        else if (pm[i]>1)
        {
            double_threat[k++]=pm[i];
        }
    }    
}