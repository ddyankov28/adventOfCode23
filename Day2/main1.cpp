# include <iostream>
# include <fstream>
# include <string>

# define MAX_RED 12
# define MAX_GREEN 13
# define MAX_BLUE 14

void    removeSpaces(std::string& line)
{
    std::string::iterator it = line.begin();
    while (it != line.end())
    {
        if (isspace(*it))
            line.erase(it);
        else
            ++it;
    }
}


int main(int ac, char **av)
{
    std::ifstream   file(av[1]);
    std::string     line;

    while (getline(file, line))
    {
        int gameID = 1;
        removeSpaces(line);
        std::string newLine = substr(line.find(':', 0));
        std::cout << line << std::endl;
    }

    return 0;
}