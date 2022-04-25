#include <bits/stdc++.h>

using namespace std;

template<typename Item>
class MaxHeap {
private:
    Item *data;
    int count;
    int capaciy;

    void shiftUp(int k) {
        while (data[k / 2] < data[k]) {
            swap(data[k / 2], data[k]);
            k /= 2;
        }
    }

    void shiftDown(int k) {
        while (2 * k <= count) {
            int j = 2 * k;
            if (j + 1 <= count && data[j + 1] > data[j]) j++;
            if (data[k] >= data[j]) break;
            swap(data[k], data[j]);
            k = j;
        }
    }

public:
    MaxHeap(int _capacity) {
        data = new Item[_capacity + 1];
        count = 0;
        capaciy = _capacity;
    }

    ~MaxHeap() {
        delete[] data;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return count == 0;
    }

    void insert(Item item) {
        assert(count + 1 <= capaciy);
        data[count + 1] = item;
        count++;
        shiftUp(count);
    }

    Item extractMax() {
        assert(count > 0);
        Item ret = data[1];
        swap(data[1], data[count]);
        count--;
        shiftDown(1);
        return ret;
    }
};

int main() {
    MaxHeap<int> maxheap = MaxHeap<int>(100);
    //cout << maxheap.size() << endl;
    srand(time(NULL));
    for (int i = 0; i < 15; i++) maxheap.insert(rand() % 100);
    while (!maxheap.isEmpty())
        cout << maxheap.extractMax() << " ";
    cout << endl;
    return 0;
}
