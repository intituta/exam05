#include "Warlock.hpp"

int main() {

    Warlock const richard("Richard", "Mistress of Magma");
    std::cout << richard.getName() << " - " << richard.getTitle() << std::endl;
    richard.introduce();

    Warlock* jack = new Warlock("Jack", "the Long");
    jack->introduce();
    jack->setTitle("the Mighty");
    jack->introduce();

    delete jack;

    return 0;
}
