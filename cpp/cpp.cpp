#include <iostream>


void if_task4(int a, int b, int c) {
    int count = 0;

    if (a > 0) {
        count += 1;
    }

    if (b > 0) {
        count += 1;
    }

    if (c > 0) {
        count += 1;
    }

    std::cout  << count << std::endl;

}


void if_task3(int num) {
    if (num > 0) {
        num += 1;
    }
    else if (num < 0) {
        num -= 2;
    }
    else if (num == 0) {
        num = 10;
    }

    std::cout << num << std::endl;

}

void if_task18(int a, int b, int c) {
    if (a == b) {
        std::cout << c << std::endl;
    }
    else if (a == c) {
        std::cout << b << std::endl;
    }
    else if ( b == c) {
        std::cout << a << std::endl;
    }
}

int main()
{
    // if_task4(12, -15, 11);
    if_task3(10);
    if_task3(-10);
    if_task3(0);
    if_task18(2, 3, 2);
}

