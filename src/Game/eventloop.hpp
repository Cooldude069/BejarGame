Game &Game::event_loop()
{
    clear_console();
    char temp;
    int move_index;
    while (running)
    {
        for (int i = 0; i < 9; i++)
        {
            temp = (container[i]) ? container[i] : int_to_char(i);
            if (i % 3 == 2)
                std::cout << "|" << temp << "|\n";
            else
                std::cout << NC << "|" << temp;
            cout << NC;
        }
        process_input();
        move_index = best_move();
        container[move_index] = 'O';
        clear_console();
    }
    return *this;
}