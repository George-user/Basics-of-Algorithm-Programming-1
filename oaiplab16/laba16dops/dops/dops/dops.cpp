#include<iostream> 

void subtractPreviousRow(int** array, int n)
{
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] -= array[i - 1][j];
        }
    }


    for (int j = 0; j < n; j++) {
        array[0][j] -= array[n - 1][j];
    }
}

int findSumOfNumbers(const char* str)
{
    int sum = 0;
    int num = 0;

    while (*str) {
        if (*str >= '0' && *str <= '9') {
            num = num * 10 + (*str - '0');
        }
        else {
            sum += num;
            num = 0;
        }
        str++;
    }

    sum += num;

    return sum;
}

int main()
{
    int n;
    std::cout << "Enter array dimension: ";
    std::cin >> n;


    int** array = new int* [n];
    for (int i = 0; i < n; i++) {
        array[i] = new int[n];
    }

    std::cout << "Enter Array Elements:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> array[i][j];
        }
    }

    int choice;
    std::cout << "Select operation: " << std::endl;
    std::cout << "1. Subtract the previous one from each line." << std::endl;
    std::cout << "2. Find the sum of numbers in a string." << std::endl;
    std::cin >> choice;

    switch (choice) {
    case 1:
        subtractPreviousRow(array, n);


        std::cout << "The resulting array:" << std::endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }

        break;

    case 2:
        std::cin.ignore();

        char str[100];
        std::cout << "Enter the string: ";
        std::cin.getline(str, 100);

        int sum = findSumOfNumbers(str);
        std::cout << "Sum of numbers in a line: " << sum << std::endl;

        break;

    }


    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}