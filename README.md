# Practical_2


# C++ Constructors and Member Functions

## 📌 Assignment Title

**Implementation of Various Types of Constructors and Member Functions in C++ Using Employee Details**

## 📖 Aim

To implement and demonstrate different types of constructors and member functions using C++ by managing employee information.

## 🎯 Objectives

* To understand the concept of constructors in C++.
* To implement a **Default Constructor**.
* To implement a **Parameterized Constructor**.
* To implement a **Copy Constructor**.
* To understand and implement **Member Functions**.
* To display and process employee information using a C++ class.
* To determine employee bonus eligibility based on salary.

## 🛠️ Software Used

* **Programming Language:** C++
* **IDE:** Dev-C++
* **Compiler:** GNU C++ Compiler (g++)

## 📚 Concepts Used

### 1. Default Constructor

A default constructor is a constructor that does not take any arguments. It initializes the employee details with default values.

```cpp
Employee()
{
    name = "Unknown";
    empId = 0;
    salary = 0;
}
```

### 2. Parameterized Constructor

A parameterized constructor accepts arguments to initialize the data members of a class.

```cpp
Employee(string n, int id, float s)
{
    name = n;
    empId = id;
    salary = s;
}
```

### 3. Copy Constructor

A copy constructor creates a new object by copying the values of an existing object.

```cpp
Employee(const Employee &e)
{
    name = e.name;
    empId = e.empId;
    salary = e.salary;
}
```

### 4. Member Functions

Member functions are functions defined inside a class that operate on the class data members.

The program uses:

* `accept()` – Accepts employee details from the user.
* `display()` – Displays employee information.
* `result()` – Checks whether the employee is eligible for a bonus based on salary.

## 💻 Program Description

The program creates an `Employee` class containing the following private data members:

* `name` – Stores the employee's name.
* `empId` – Stores the employee's identification number.
* `salary` – Stores the employee's salary.

It demonstrates three types of constructors:

1. Default Constructor
2. Parameterized Constructor
3. Copy Constructor

It also demonstrates member functions for accepting employee details, displaying information, and checking bonus eligibility.

**Bonus Eligibility Condition:**

* If salary is greater than or equal to ₹30,000, the employee is eligible for a bonus.
* If salary is less than ₹30,000, the employee is not eligible for a bonus.

## 📂 Files

| File | Description |
|---|---|
| `threads.cpp` | C++ source code |
| `README.md` | Project documentation |
| `output.png` | Screenshot of program output |

## ▶️ How to Run

### Using Dev-C++

1. Open **Dev-C++**.
2. Create a new C++ source file.
3. Copy the program into the file.
4. Save the file as `threads.cpp`.
5. Click **Compile & Run** or press `F11`.
6. The output will be displayed in the console.

### Using Terminal

Compile the program using:

```bash
g++ threads.cpp -o threads
```

Run the program using:

**Windows (PowerShell or CMD):**

```powershell
.\threads.exe
```

**Linux:**

```bash
./threads
```

## 🖥️ Sample Output

```text
-- DEFAULT CONSTRUCTOR --

Name   : Unknown
ID     : 0
Salary : 0
Status : Not Eligible for Bonus

-- PARAMETERIZED CONSTRUCTOR --

Name   : Rahul
ID     : 201
Salary : 45000
Status : Eligible for Bonus

-- COPY CONSTRUCTOR --

Name   : Rahul
ID     : 201
Salary : 45000
Status : Eligible for Bonus

-- MEMBER FUNCTION --
Enter Employee Name: Amit
Enter Employee ID: 202
Enter Salary: 25000

Name   : Amit
ID     : 202
Salary : 25000
Status : Not Eligible for Bonus
```

**Note:** The member function output shown above uses sample input. Your actual output will depend on the employee details entered during program execution.

## ✅ Result

The program successfully demonstrates various types of constructors and member functions in C++. The concepts of **Default Constructor, Parameterized Constructor, Copy Constructor, and Member Functions** are implemented successfully using an employee management example.

## 👨‍🎓 Student Details

**Name:** Rushabh Somase  
**Subject:** Object-Oriented Programming  
**Programming Language:** C++  
**IDE:** Dev-C++

## 📝 Conclusion

This assignment helped in understanding how constructors are used to initialize objects in C++. It also demonstrated how member functions can accept employee details, display information, and determine bonus eligibility based on salary. The program illustrates the practical application of object-oriented programming concepts through an employee management example.
