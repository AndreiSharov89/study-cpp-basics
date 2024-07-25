#include <iostream>
#include <limits.h>

using namespace std;

int Sum(int n, int* arr) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

double Avg(int n, int* arr) {
    int sum = Sum(n, arr);
    return (1.0 * sum) / n;
}

int SumNeg(int n, int* arr) {
    int sumNegative = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0)
            sumNegative += arr[i];
    }
    return sumNegative;

}

int SumPos(int n, int* arr) {
    int sumPositive = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            sumPositive += arr[i];
    }
    return sumPositive;
}

int SumEven(int n, int* arr) {
    int sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sumEven += arr[i];
    }
    return sumEven;
}

int SumNEven(int n, int* arr) {
    int sumNEven = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0)
            sumNEven += arr[i];
    }
    return sumNEven;
}

int MinVal(int n, int* arr) {
    int minValue = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    cout << minValue;
    return minValue; 
}

int MinInd(int n, int* arr) {
    int minValue = arr[0];
    int minIndex{ 0 };
    for (int i = 0; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    cout << minIndex;
    return minIndex;
}

int MaxVal(int n, int* arr) {
    int maxValue = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    cout << maxValue;
    return maxValue;
}

int MaxInd(int n, int* arr) {
    int maxValue = arr[0];
    int maxIndex{ 0 };
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    cout << maxIndex;
    return maxIndex;
}

long MulMinMax(int n, int* arr) {
    int minValue = arr[0];
    int minIndex{ 0 };
    for (int i = 0; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
    }

    int maxValue = arr[0];
    int maxIndex{ 0 };
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    int start = minIndex < maxIndex ? minIndex : maxIndex;
    int end = minIndex < maxIndex ? maxIndex : minIndex;
    long mult = 1;
    for (int i = start + 1; i < end; i++) {
        mult *= arr[i];
    }
    return mult;
}

int main() {
    system("chcp 1251");

    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int sum = Sum(n, mas);
    cout << "Сумма всех элементов массива: " << sum << endl;

    double average = Avg(n, mas);
    cout << "Среднее значение элементов массива: " << average << endl;

    int sumNegative = SumNeg(n, mas);
    int sumPositive = SumPos(n, mas);
    cout << "Сумма отрицательных элементов: " << sumNegative << endl;
    cout << "Сумма положительных элементов: " << sumPositive << endl;

    int sumEven = SumEven(n, mas);
    int sumNEven = SumNEven(n, mas);
    cout << "Сумма элементов с нечетными индексами: " << sumNEven << endl;
    cout << "Сумма элементов с четными индексами: " << sumEven << endl;

    int minValue = MinVal(n, mas);
    int maxValue = MaxVal(n, mas);
    cout << "Минимальный элемент: " << minValue << endl;
    cout << "Максимальный элемент: " << maxValue << endl;
    
    int minIndex = MinInd(n, mas);
    int maxIndex = MaxInd(n, mas);
    cout << "Индекс минимального элемента: " << minIndex << endl;
    cout << "Индекс максимального элемента: " << maxIndex << endl;

    int mult = MulMinMax(n, mas);
    cout << "Произведение элементов между минимальным и максимальным: " << mult << endl;

    return 0;
}
