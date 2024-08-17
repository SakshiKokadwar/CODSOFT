#include <iostream>
#include <vector>
#include <string>

class TodoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string& task) {
        tasks.push_back(task);
        std::cout << "Task added: " << task << std::endl;
    }

    void viewTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks to show." << std::endl;
            return;
        }
        std::cout << "To-Do List:" << std::endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i] << std::endl;
        }
    }

    void removeTask(size_t index) {
        if (index < 1 || index > tasks.size()) {
            std::cout << "Invalid task number." << std::endl;
            return;
        }
        tasks.erase(tasks.begin() + index - 1);
        std::cout << "Task removed." << std::endl;
    }
};

int main() {
    TodoList todoList;
    int choice;
    std::string task;
    size_t taskNumber;

    do {
        std::cout << "\nTodo List Menu" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Remove Task" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();  // Ignore newline left in the input buffer

        switch (choice) {
            case 1:
                std::cout << "Enter task description: ";
                std::getline(std::cin, task);
                todoList.addTask(task);
                break;
            case 2:
                todoList.viewTasks();
                break;
            case 3:
                todoList.viewTasks();
                std::cout << "Enter task number to remove: ";
                std::cin >> taskNumber;
                std::cin.ignore();  // Ignore newline left in the input buffer
                todoList.removeTask(taskNumber);
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}