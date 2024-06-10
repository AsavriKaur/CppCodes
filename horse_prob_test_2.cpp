#include <iostream>
#include <algorithm>
using namespace std;

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        int pivotIndex = i + 1;

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    int horses[25] = {5, 3, 10, 1, 7, 9, 2, 4, 6, 8, 11, 13, 15, 12, 14, 16, 18, 20, 17, 19, 22, 24, 23, 21, 25};
    int numOfRaces = 0;
    int numOfGroups = 5;
    int groupSize = 5;

    while (numOfGroups > 1) {
        int remainingHorses = numOfGroups * groupSize;
        int races = remainingHorses / groupSize;
        numOfRaces += races;

        for (int i = 0; i < remainingHorses; i += groupSize) {
            quickSort(horses, i, i + groupSize - 1);
        }

        int newGroupSize = groupSize - 1;
        int newNumOfGroups = remainingHorses / newGroupSize;
        numOfGroups = newNumOfGroups;
        groupSize = newGroupSize;
    }

    cout << "Minimum number of races needed: " << numOfRaces << endl;

    return 0;
}
