#include "Interface.h"
#include <iostream>

int main() {
    system("chcp 1251");
    Interface app;
    app.seed();
    app.run();
    return 0;
}
