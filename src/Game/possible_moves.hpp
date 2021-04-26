int *Game::possible_moves()
{
    int diagonal_one[] = {0, 4, 8};
    int diagonal_two[] = {2, 4, 6};
    int *movement;
    movement = new int[9];
    for (int i = 0; i < 9; i++)
    {
        if (container[i] == 'X' || container[i] == 'O')
            movement[i] = -1;
        else
            movement[i] = 0;
    }
    for (int i = 0; i < 9; i++)
    {
        if (i < 6)
        {
            if (container[0] == 'X' && container[6] == 'X')
            {
                if (container[3] == (char)NULL)
                    movement[3] += 1;
            }
            if (container[i] == 'X' && container[i + 3] == 'X')
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
            if (container[i] == 'X' && container[i + 1] == 'X')
            {
                if (i % 3 == 0)
                {
                    if (container[i + 2] == (char)NULL)
                        movement[i + 2] += 1;
                }
                else if (i % 3 == 1)
                    if (i > 0)
                        if (container[i - 1] != 'O')
                            movement[i - 1] += 1;
            }
        }
        if (i % 3 == 2)
        {
            if (container[i] == 'X' && container[i - 2] == 'X')
            {
                if (container[i - 1] != 'O')
                    movement[i - 1] += 1;
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (j != 2)
        {
            if (container[diagonal_one[j]] == 'X' && container[diagonal_one[j + 1]] == 'X')
            {
                if (j == 0)
                {
                    if (container[8] != 'O')
                        movement[8] += 1;
                }
                else if (j == 1)
                {
                    if (container[0] != 'O')
                        movement[0] += 1;
                }
            }
        }
        if (j == 0)
        {
            if (container[0] == 'X' && container[8] == 'X')
            {
                if (container[4] != 'O')
                    movement[4] += 1;
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (j != 2)
        {
            if (container[diagonal_two[j]] == 'X' && container[diagonal_two[j + 1]] == 'X')
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
            if (container[2] == 'X' && container[6] == 'X')
            {
                if (container[4] == (char)NULL)
                    movement[4] += 1;
            }
        }
    }
    return movement;
}