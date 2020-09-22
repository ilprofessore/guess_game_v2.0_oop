#include "front.hpp"
#include "main_class.hpp"
#include "upper_to_lower.hpp"
#include "back.hpp"

int main()
{
    menu();

    Player lvl01("relativity", 1, "a word for change with surroundings: ", 'r', '_', '_', 'a', '_', '_', 'v', '_', '_', 'y');
    Player lvl02("electricity", 2, "the busiest man-made city of the whole world: ", '_', 'l', '_', '_', 't', '_', '_', 'C', '_', 't', 'y');
    Player lvl03("baby", 3, "something that is lovely and irritating at the same time: ", '_', 'a', '_', 'y');
    Player lvl04("magnet", 4, "something sexy: ", 'm', '_', '_', 'n', 'e', '_');
    Player lvl05("death", 5, "something that is going to happen soon: ", '_', '_', '_', 't', 'h');
    Player lvl06("kira", 6, "he loves to eat potato chips: ", 'k', '_', '_', '_');
    Player lvl07("oppenheimer", 7, "don't 'oppen' it, it's explosive: ", 'o', 'p', '_', '_', 'n', 'h', 'e', '_', '_', '_', 'r');
    Player lvl08("heisenberg", 8, "you have to say his name!: ", 'h', '_', 'i', 's', '_', '_', 'b', '_', '_', '_');
    Player lvl09("faraday", 9, "something that rhymes with friday but is shocking: ", '_', '_', 'r', '_', '_', 'd', '_', '_');
    Player lvl10("age", 10, "something that always depletes with time: ", 'a', '_', '_');
    
    byebye();
    return 0;
}