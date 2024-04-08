#include "core/cotigo.h"
#include <vector>
#include <string>

int main() {
    cogitokb_core();
    
    std::vector<std::string> vec;
    vec.push_back("test_package");

    cogitokb_core_print_vector(vec);
}
