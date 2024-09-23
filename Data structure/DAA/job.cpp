#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

int findSlot(int slot, vector<int>& parent) {
    if (parent[slot] == slot) return slot;
    return parent[slot] = findSlot(parent[slot], parent);
}

void unionSlot(int u, int v, vector<int>& parent) {
    parent[u] = v;
}

void jobSequencing(vector<Job> jobs, int n) {
    sort(jobs.begin(), jobs.end(), compare);

    vector<int> parent(n+1);
    for (int i = 0; i <= n; i++) parent[i] = i;

    int totalProfit = 0;
    vector<int> jobSequence;

    for (int i = 0; i < jobs.size(); i++) {
        int availableSlot = findSlot(min(jobs[i].deadline, n), parent);
        
        if (availableSlot > 0) {
            jobSequence.push_back(jobs[i].id);
            totalProfit += jobs[i].profit;
            unionSlot(availableSlot, availableSlot - 1, parent);
        }
    }

    if (!jobSequence.empty()) {
        cout << "Job sequence: ";
        for (int i = 0; i < jobSequence.size(); i++) {
            cout << jobSequence[i] << " ";
        }
        cout << "\nTotal Profit: " << totalProfit << endl;
    } else {
        cout << "No jobs could be scheduled." << endl;
    }
}

int main() {
    int numJobs, n;

    cout << "Enter the number of jobs: ";
    cin >> numJobs;
    if (numJobs <= 0) {
        cout << "Invalid number of jobs." << endl;
        return 0;
    }

    cout << "Enter the number of available slots: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid number of available slots." << endl;
        return 0;
    }

    vector<Job> jobs(numJobs);

    for (int i = 0; i < numJobs; i++) {
        cout << "Enter job ID, deadline, and profit for job " << i + 1 << ": ";
        cin >> jobs[i].id >> jobs[i].deadline >> jobs[i].profit;

        if (jobs[i].id <= 0 || jobs[i].deadline <= 0 || jobs[i].profit < 0) {
            cout << "Invalid input for job " << i + 1 << ". Please enter positive values." << endl;
            return 0;
        }
    }

    jobSequencing(jobs, n);

    return 0;
}
