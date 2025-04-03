#include <iostream>

void bubbleSort(int array[], int size);
void showArray(int array[], int size);
int main() {
    int numbers[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers, size);
    std::cout << "\n";
    
    return 0;
}

void bubbleSort(int array[], int size){
    std::cout << "\nInitial Array: ";
    showArray(array, size);
    std::cout << "\n";
    int temp = 0;
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j <size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        std::cout << "\nArray on " << i+1 << "º pass: ";
        showArray(array, size);
        
    }
}

void showArray(int array[], int size){
    for(int k = 0; k < size; k++){
        std::cout << array[k] << ' ';
    }
}