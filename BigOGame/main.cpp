#include <string>
#include <iostream>
class Test {
public:
    Test(std::string me) {
        std::cout << me << "\n";
    }
};
int main() {

    Test t("Hello");


    return 0;
}