# include <iostream>
# include <vector>
# include <fstream>

int main(int ac, char **av)
{
    std::ifstream   ifs(av[1]);
    int result = 0;
    std::string line;

    while (getline(ifs, line))
    {
        std::string numbers = "00";
        for (size_t i = 0; i < line.size(); i++)
        {
            if (isdigit(line[i]))
            {
                numbers[0] = line[i];
                break;
            }
        }
        for (size_t i = line.size(); i >= 0; i--)
        {
            if (isdigit(line[i]))
            {
                numbers[1] = line[i];
                break ;
            }
        }
        result += std::stoi(numbers);
    }
    std::cout << result << std::endl;
}