#include <iostream>
#include <queue>

using namespace std;

class Process{
friend bool operator<(const Process &p1, const Process &p2);
private:
    int id;
    int priority;
public:
    Process(){}
    Process(int id, int priority) {
        this->id=id;
        this->priority=priority;
    }
    int getId() { return id; }
};

bool operator<(const Process &p1, const Process &p2) {
    return p1.priority < p2.priority;
}

int main()
{
    priority_queue<Process> queue;
    queue.push(Process(1, 3));
    queue.push(Process(2, 6));
    queue.push(Process(3, 4));
    queue.push(Process(4, 10));
    queue.push(Process(5, 8));

    while(!queue.empty()) {
        Process p = queue.top();
        cout<<p.getId()<<" ";
        queue.pop();
    }
    return 0;
}
