#include <iostream>
#include<vector>
using namespace std;
// fixed size array.
class MyCircularQueue {
private: 
    int capacity;
    int head;
    int tail;
    int fullCapacity;
    vector<int> vec;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        vec.resize(k);
        tail = head = -1;
        capacity = vec.capacity();
        fullCapacity = vec.max_size() ;// based on Index.
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        if (isEmpty()) {
            head = 0;
        }

        //if (tail < fullCapacity)
        //    tail++;
        //else
        //    tail = 0;
        //the above code can be replaced by using MOD.
        tail = (tail + 1) % vec.size();

            vec[tail] = value;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        if (head == tail) {
            head = -1;
            tail = -1;
            return true;
        }
        head = (head + 1) / vec.size();
    }

    /** Get the front item from the queue. */
    int Front() {
        if (isEmpty()) {
            return -1;
        }
        return vec[head];
    }

    /** Get the last item from the queue. */
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return vec[tail];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return vec.empty();
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return fullCapacity / vec.size() == 1 ? true: false;
    }
};

int main() {
  //Your MyCircularQueue object will be instantiated and called as such:
  MyCircularQueue obj(2);
  bool param_1 = obj.enQueue(12);
  bool param_2 = obj.enQueue(1);
  //bool param_3 = obj->deQueue();
  //bool param_8 = obj->deQueue();
  //int param_4 = obj.Front();
  //int param_5 = obj.Rear();
  //bool param_6 = obj.isEmpty();
  //bool param_7 = obj.isFull();
  //cout << "Front\t" << param_4 << "\tBack\t" << param_5 << "\tFull\t" << param_7 << "\tEmpty\t" << param_6;
  //cout << "Front\t" << param_4 << "\tBack\t" << param_5 << "\tFull\t" << param_7 << "\tEmpty\t" << param_6;
}
