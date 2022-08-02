// GitHub: EntityPlantt/Kattis
#include <iostream>
#include <algorithm>
main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << std::min(a, b) << ' ' << std::max(a, b);
}