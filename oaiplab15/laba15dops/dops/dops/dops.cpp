//4 вариант 
#include <iostream>


int findMinIndex(float* array, int size) {
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}

float findSumBetweenNegatives(float* array, int size) {
    int firstNegativeIndex = -1;
    float sum = 0;

    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            if (firstNegativeIndex == -1) {
                firstNegativeIndex = i;
            }
            else {
                // Вычисляем сумму элементов между первым и вторым отрицательными элементами 
                for (int j = firstNegativeIndex + 1; j < i; j++) {
                    sum += array[j];
                }
                break;
            }
        }
    }

    return sum;
}

int main() {
    int n;
    printf("Enter array dimension: ");
    scanf_s("%d", &n);

    float* array = (float*)malloc(n * sizeof(float));
    if (array == NULL) {
        printf("Memory allocation error.\n");
        return 1;
    }

    printf("Enter Array Elements:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%f", &array[i]);
    }

    int minIndex = findMinIndex(array, n);
    float sum = findSumBetweenNegatives(array, n);

    printf("Minimum element number: %d\n", minIndex);
    printf("Sum of elements between first and second negative elements: %.2f\n", sum);

    free(array);

    return 0;
}








//#include <iostream> 
// 
//int countNonZeroColumns(int** matrix, int rows, int cols) { 
//    int count = 0; 
// 
//    for (int j = 0; j < cols; j++) { 
//        bool containsZero = false; 
//        for (int i = 0; i < rows; i++) { 
//            if (matrix[i][j] == 0) { 
//                containsZero = true; 
//                break; 
//            } 
//        } 
//        if (!containsZero) { 
//            count++; 
//        } 
//    } 
// 
//    return count; 
//} 
// 
//int main() { 
//    int rows, cols; 
//    std::cout << "Enter the number of rows and columns of the matrix: "; 
//    std::cin >> rows >> cols; 
// 
//    int** matrix = new int* [rows]; 
//    for (int i = 0; i < rows; i++) { 
//        matrix[i] = new int[cols]; 
//        std::cout << "Enter items " << i + 1 << "-й lines: "; 
//        for (int j = 0; j < cols; j++) { 
//            std::cin >> matrix[i][j]; 
//        } 
//    } 
// 
//    int nonZeroColumns = countNonZeroColumns(matrix, rows, cols); 
// 
//    std::cout << "Number of columns that do not contain any null elements: " << nonZeroColumns << std::endl; 
// 
//    for (int i = 0; i < rows; i++) { 
//        delete[] matrix[i]; 
//    } 
//    delete[] matrix; 
// 
//    return 0; 
//}