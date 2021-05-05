int *Game::possible_moves()
{
    int diagonal_one[] = {0, 4, 8};
    int diagonal_two[] = {2, 4, 6};
    int *movement;
    movement = new int[9];
    for (int i = 0; i < 9; i++)
    {
        movement[i] = (container[i] == 'X' || container[i] == 'O') ? -1 : 0;
    }
    for (int i = 0; i < 9; i++)
    {
    	if (i <= 2)
    	{
    	    if ((container[i] == 'X' && container[i+6] == 'X')||(container[i] == 'O' && container[i+6] == 'O'))
    	    {
    	    	if(container[i+3] == (char)NULL)
    	    	    movement[i+3] += 1;
    	    }
    	}
        if (i < 6)
        {
            if ((container[i] == 'X' && container[i + 3] == 'X')||(container[i] == 'O' && container[i + 3] == 'O'))
            {
                if (i <= 2)
                {
                    if (container[i + 6] == (char)NULL)
                        movement[i + 6] += 1;
                }
                else
                {
                    if (container[i - 3] == (char)NULL)
                        movement[i - 3] += 1;
                }
            }
        }
        if (i < 8)
        {
            if ((container[i] == 'X' && container[i + 1] == 'X')||(container[i] == 'X' && container[i + 1] == 'X'))
            {
                if (i % 3 == 0)
                {
                    if (container[i + 2] == (char)NULL)
                        movement[i + 2] += 1;
                }
                else if (i % 3 == 1)
                    if (i > 0)
                        if (container[i - 1] == (char)NULL)
                            movement[i - 1] += 1;
            }
        }
        if (i % 3 == 2)
        {
            if ((container[i] == 'X' && container[i - 2] == 'X')||(container[i] == 'O' && container[i - 2] == 'O'))
            {
                if (container[i - 1] == (char)NULL)
                    movement[i - 1] += 1;
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (j != 2)
        {
            if ((container[diagonal_one[j]] == 'X' && container[diagonal_one[j + 1]] == 'X')||(container[diagonal_one[j]] == 'O' && container[diagonal_one[j + 1]] == 'O'))
            {
                if (j == 0)
                {
                    if (container[8] == (char)NULL)
                        movement[8] += 1;
                }
                else if (j == 1)
                {
                    if (container[0] == (char)NULL)
                        movement[0] += 1;
                }
            }
        }
        if (j == 0)
        {
            if ((container[0] == 'X' && container[8] == 'X')||(container[0] == 'O' && container[8] == 'O'))
            {
                if (container[4] == (char)NULL)
                    movement[4] += 1;
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (j != 2)
        {
            if ((container[diagonal_two[j]] == 'X' && container[diagonal_two[j + 1]] == 'X')||(container[diagonal_two[j]] == 'O' && container[diagonal_two[j + 1]] == 'O'))
            {
                if (j == 0)
                {
                    if (container[6] == (char)NULL)
                        movement[6] += 1;
                }
                else if (j == 1)
                {
                    if (container[2] == (char)NULL)
                        movement[2] += 1;
                }
            }
        }

        if (j == 0)
        {
            if ((container[2] == 'X' && container[6] == 'X')||(container[2] == 'O' && container[6] == 'O'))
            {
                if (container[4] == (char)NULL)
                    movement[4] += 1;
            }
        }
    }
    return movement;
}
