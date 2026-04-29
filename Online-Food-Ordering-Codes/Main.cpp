#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;

struct Order {
    int id;
    string customerName;
    string foodItem;
    int priority;
};

struct CompareOrder {
    bool operator()(const Order &a, const Order &b) const {
        return a.priority < b.priority;
    }
};

queue<Order> normalQueue;
priority_queue<Order, vector<Order>, CompareOrder> priorityQueue;
stack<Order> history;

int orderID = 1;

// Add normal order
void addNormal() {
    Order o;
    o.id = orderID++;
    cout << "Enter customer name: ";
    cin >> o.customerName;
    cout << "Enter food item: ";
    cin >> o.foodItem;
    o.priority = 0;

    normalQueue.push(o);
    cout << "Normal order added.\n";
}
