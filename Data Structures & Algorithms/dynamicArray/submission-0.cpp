#include <vector>


class DynamicArray {
public:
    std::vector<int> arr;
    int capacity;
    DynamicArray(int capacity) {
        this->capacity = capacity;

        std::cout << this->capacity;
    }

    int get(int i) {
        return arr[i];
    }

    void set(int i, int n) {
        arr[i] = n;
    }

    void pushback(int n) {
        if (arr.size() == capacity) {
            resize();
        }
        arr.push_back(n);
    }

    int popback() {
        //need to check if we have to resize it first
        int ret = arr[arr.size() - 1];
        arr.pop_back();
        return ret;
    }

    void resize() {
        arr.resize(arr.size(), 0);
        capacity *= 2;
    }

    int getSize() {
        return arr.size();
    }

    int getCapacity() {
        return this->capacity;
    }
};
