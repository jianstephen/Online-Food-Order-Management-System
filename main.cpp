#include <iostream>
#include <queue>
#include <stack>
using namespace std;

struct Order {
    int id;
    string name;
    int priority;
};

queue<Order> normalQueue;
priority_queue<pair<int, Order>> priorityQueue;
stack<Order> History;

int orderID = 1;

void addNormal_order(){
    Order o;
    o.id = orderID++;
    cout << "Enter order name: ";
    cin >> o.name;
    o.priority = 0;

    normalQueue.push(o);
    cout << "Normal order added.\n";
}

void addPriority_order(){
    Order o;
    o.id = orderID++;
    cout << "Enter order name: ";
    cin >> o.name;
    cout << "Enter priority (higher number = more priority): ";
    cin >> o.priority;

    priorityQueue.push({o.priority, o});
    cout << "Priority order added.\n";
}

void process_order(){

}