# To-Do List Manager

todo_list = []

# 1. Function without arguments
def display_menu():
    print("\n==== To-Do List Manager ====")
    print("1. Add a task")
    print("2. View tasks")
    print("3. Mark task as complete")
    print("4. Exit")

# 2. Function with arguments (Positional arguments)
def add_task(task):
    todo_list.append({"task": task, "completed": False})
    print(f"Task '{task}' added successfully!")

# 3. Function with default arguments
def view_tasks(show_completed=True):
    if not todo_list:
        print("Your to-do list is empty!")
    else:
        for index, item in enumerate(todo_list, start=1):
            status = "✓" if item["completed"] else " "
            if show_completed or not item["completed"]:
                print(f"{index}. [{status}] {item['task']}")

def mark_complete(task_index):
    if 1 <= task_index <= len(todo_list):
        todo_list[task_index - 1]["completed"] = True
        print(f"Task '{todo_list[task_index - 1]['task']}' marked as complete!")
    else:
        print("Invalid task index!")

def main():
    while True:
        display_menu()
        choice = input("Enter your choice (1-4): ")

        if choice == '1':
            task = input("Enter the task: ")
            add_task(task)
        elif choice == '2':
            show_completed = input("Show completed tasks? (y/n): ").lower() == 'y'
            view_tasks(show_completed)
        elif choice == '3':
            view_tasks()
            task_index = int(input("Enter the task number to mark as complete: "))
            mark_complete(task_index)
        elif choice == '4':
            print("Thank you for using the To-Do List Manager. Goodbye!")
            break
        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main() 
    