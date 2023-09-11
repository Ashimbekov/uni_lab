#include <iostream>
#include <cmath>
#include <math.h>

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

void case_task3(int month) {
    switch (month) {
    case 1:
        std::cout << "Jan" << std::endl;
        break;
    case 2:
        std::cout << "Feb" << std::endl;
        break;
    case 3:
        std::cout << "Mart" << std::endl;
        break;
    case 4:
        std::cout << "April" << std::endl;
        break;
    case 5:
        std::cout << "May" << std::endl;
        break;
    case 6:
        std::cout << "June" << std::endl;
        break;
    case 7:
        std::cout << "Jule" << std::endl;
        break;
    case 8:
        std::cout << "August" << std::endl;
        break;
    case 9:
        std::cout << "September" << std::endl;
        break;
    case 10:
        std::cout << "Oct" << std::endl;
        break;
    case 11:
        std::cout << "November" << std::endl;
        break;
    case 12:
        std::cout << "December" << std::endl;
        break;
    default:
        std::cout << "No input month days" << std::endl;
        break;
    }
}

void case_task18(int num) {
    switch (num / 100) {
    case 1:
        std::cout << "Sto ";
        break;
    case 2:
        std::cout << "Dvesti ";
        break;
    case 3:
        std::cout << "Trista ";
        break;
    case 4: 
        std::cout << "Chetiresta ";
        break;
    case 5:
        std::cout << "Pyatsot ";
        break;
    case 6:
        std::cout << "Chesot ";
        break;
    case 7: 
        std::cout << "Semisot ";
        break;
    case 8:
        std::cout << "Vosemsot ";
        break;
    case 9:
        std::cout << "Devyatsot ";
        break;
    }

    if ((num % 100) / 10 == 1) {
        switch (num % 100) {
        case 10:
            std::cout << "desyt ";
            break;
        case 11:
            std::cout << "odinatzat ";
            break;
        case 12:
            std::cout << "dvenatzat ";
            break;
        case 13:
            std::cout << "trinadzat ";
            break;
        case 14:
            std::cout << "chetirnadzat ";
            break;
        case 15:
            std::cout << "pytnadzat ";
            break;
        case 16:
            std::cout << "chestandzat ";
            break;
        case 17:
            std::cout << "semnadzat ";
            break;
        case 18:
            std::cout << "vosemnadzat ";
            break;
        case 19:
            std::cout << "devaytnadzat ";
            break;
        }
    }
    else {
        switch ((num % 100) / 10)
        {
        case 2:
            std::cout << "Dvadzat ";
            break;
        case 3:
            std::cout << "Tridzat ";
            break;
        case 4:
            std::cout << "Sorok ";
            break;
        case 5:
            std::cout << "Pytdesyat ";
            break;
        case 6:
            std::cout << "Chestedyat ";
            break;
        case 7:
            std::cout << "Semdesyat ";
            break;
        case 8:
            std::cout << "Vosemdesyat ";
            break;
        case 9:
            std::cout << "Devynosto ";
            break;

        }
        switch (num % 10) {
        case 1:
            std::cout << "odin";
            break;
        case 2:
            std::cout << "dva";
            break;
        case 3:
            std::cout << "tree";
            break;
        case 4:
            std::cout << "chetire";
            break;
        case 5:
            std::cout << "pyt";
            break;
        case 6:
            std::cout << "chest";
            break;
        case 7:
            std::cout << "sem";
            break;
        case 8:
            std::cout << "vosem";
            break;
        case 9:
            std::cout << "devyat";
            break;
        }
    }
}

void for_task3(int a, int b) {
    int count = 0;
    for (int i = 0; a < b; i++) {
        a += 1;
        count += 1;
        std::cout << a << " ";
    }
    std::cout << "Count: " << count << std::endl;
}


void for_task18(double A, int N) {
    // res = 1 - A + A^2 - A^3 ... A^N 
    double res = 1;
    for (int i = 1; i <= N; i++) {
        res += pow(-A, i);

    }

    std::cout << "Result " << res << std::endl;
}

void while_task3(int N, int K) {
    int num = 0;
    while (N >= K) {
        N -= K;
        num++;
    }

    std::cout << "Chastnoe " << num << std::endl;
    std::cout << "Ostatok " << N << std::endl;
}


void while_task18(int N) {
    int sum = 0;
    int count = 0;
    while (N > 0) {
        sum += N % 10;
        N /= 10;
        count++;
    }   

    std::cout << "sum " << sum << std::endl;
    std::cout << "count " << count << std::endl;
    std::cout << "N " << N << std::endl;
}

void math_form(double x, double y) {

    double res = (pow(pow(sin(x+y),2), 1 / 3))/(pow((pow(x, 2) + pow(y, 2)), 3));

    //std::cout << pow(pow(sin(x + y), 2), 0.33) << std::endl;
    std::cout << pow((pow(sin(x + y), 2)), (1.0/3)) << std::endl;
    std::cout << res << std::endl;
}

int main()
{
    // if_task4(12, -15, 11);
    //if_task3(10);
    //if_task3(-9);
    //if_task3(0);
    //if_task18(1, 0, 1);

    //case_task3(4);
    //case_task18(234);
    //
    //for_task3(5, 9);
    //for_task18(2, 3);
    //while_task3(13,2);
    //while_task3(20,2);
    //while_task3(23,2);
    //while_task18(10);
    math_form(3, 4);

}

