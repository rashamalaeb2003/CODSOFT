#include <iostream>
#include <vector>
#include <limits>
using namespace std;

// Function to read a line without using getline
void readLine(string& input) {
    char buffer[1024];
    cin.getline(buffer, sizeof(buffer));
    input = buffer;
}

class ToDoListManager {
private:
    vector<string> tasks;

public:
    void addTask(const string& task) {
        tasks.push_back(task);
        cout << "Task added successfully." << endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            cout << "No tasks to display." << endl;
        }
        else {
            cout << "Tasks:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ". " << tasks[i] << endl;
            }
        }
    }

    void deleteTask(size_t taskIndex) {
        if (taskIndex >= 1 && taskIndex <= tasks.size()) {
            cout << "Task '" << tasks[taskIndex - 1] << "' deleted successfully." << endl;
            tasks.erase(tasks.begin() + taskIndex - 1);
        }
        else {
            cout << "Invalid task index." << endl;
        }
    }
};

int main() {
    ToDoListManager todoListManager;

    while (true) {
        cout << "\n===== To-Do List Manager =====" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. View Tasks" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. Exit" << endl;

        char choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Check for valid input
        while (cin.fail() || (choice < '1' || choice > '4')) {
            cout << "Invalid input. Please enter a valid option (1-4): ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> choice;
        }

        switch (choice) {
        case '1': {
            string task;
            cout << "Enter the task: ";
            cin.ignore(); // Ignore newline from previous input
            readLine(task); // Call the readLine function
            todoListManager.addTask(task);
            break;
        }
        case '2':
            todoListManager.viewTasks();
            break;
        case '3': {
            size_t taskIndex;
            cout << "Enter the task index to delete: ";
            cin >> taskIndex;
            todoListManager.deleteTask(taskIndex);
            break;
        }
        case '4':
            cout << "Exiting the To-Do List Manager. Goodbye!" << endl;
            return 0;
        default:
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
        }
    } 

    return 0;
}
