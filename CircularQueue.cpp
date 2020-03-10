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
    int* p;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        p = new int[k];
        tail = head = -1;
        capacity = 0;
        fullCapacity = k ;// based on Index.
    }

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (capacity < fullCapacity ) {
            capacity++;
            if (tail == -1) {
                head++;
            }
            if (tail == fullCapacity - 1)
                tail = 0;
            else
                tail++;
            
                p[tail] = value;
            return true;
        }
        else
            return false;
    }

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (capacity > 0) {
            capacity--;
            if(head != -1 )p[head] = -1;
            if (head == fullCapacity - 1) {
                head = 0;
            }
            else if (head >= 0 && head < fullCapacity - 1 && capacity > 0) {
                head++;
            }
            if (capacity == 0) {
                head = tail = -1;
            }

            // Update the tail and head here.
            return true;
        }
        else
            return false;
    }

    /** Get the front item from the queue. */
    int Front() {
        if (head == -1) {
            return -1;
        }
        return p[head];
    }

    /** Get the last item from the queue. */
    int Rear() {
        if (tail == -1) {
            return -1;
        }
        return p[tail];
    }

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        if (capacity == 0)return true;
        else return false;
    }

    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        if (capacity == fullCapacity)return true;
        else return false;
    }
};

int main() {
  //Your MyCircularQueue object will be instantiated and called as such:
  MyCircularQueue* obj = new MyCircularQueue(2);
  bool param_1 = obj->enQueue(12);
  bool param_2 = obj->enQueue(1);
  bool param_3 = obj->deQueue();
  bool param_8 = obj->deQueue();
  int param_4 = obj->Front();
  int param_5 = obj->Rear();
  bool param_6 = obj->isEmpty();
  bool param_7 = obj->isFull();
  cout << "Front\t" << param_4 << "\tBack\t" << param_5 << "\tFull\t" << param_7 << "\tEmpty\t" << param_6;
}
