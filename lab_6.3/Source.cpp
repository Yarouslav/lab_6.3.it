    #include <iostream>
    #include <locale>

    using namespace std;

    void createArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    void printArray(int arr[], int size) {
        cout << "Масив: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    template <typename T>
    T sumOfSquares(T arr[], int size) {
        T sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i] * arr[i];
        }
        return sum;
    }

    int main() {
        setlocale(LC_CTYPE, "ukr");
        const int size = 5;
        int arr[size];

        createArray(arr, size);
        printArray(arr, size);

        int sum = sumOfSquares(arr, size);
        cout << "Сума квадратiв елементiв масиву: " << sum << endl;

        cout << "Модифiкований масив: ";
        printArray(arr, size);

        return 0;
    }
