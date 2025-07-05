# 📘 DataStructure

A beginner-friendly C++ repository demonstrating basic data structure and programming concepts. This particular snippet highlights the use of **inline functions** in C++ for fast and efficient execution of simple mathematical operations — in this case, computing the **cube of a number**.

---

## 📌 Features

- 🔹 Demonstrates usage of **inline functions** in C++
- 🔹 Uses `clrscr()` and `getch()` from `<conio.h>` for screen handling (Turbo C++ / DOS)
- 🔹 Simple, interactive CLI-based user input/output
- 🔹 Clean and minimal logic to showcase function inlining

---

## 🧠 Code Explanation

```cpp
#include<iostream.h>
#include<conio.h>

// Inline function to calculate cube
inline int cube(int a) {
    return a * a * a;
}

void main() {
    int n;
    clrscr(); // Clear the console screen
    cout << "Enter the input number" << endl;
    cin >> n;
    cout << "Cube of" << " = " << cube(n); // Call to inline function
    getch(); // Wait for a key press
}
````

> 💡 **Note**: This code is written for old-school Turbo C++ (16-bit) environments. For modern compilers like GCC or MSVC, consider replacing `#include<iostream.h>` with `#include <iostream>` and removing `<conio.h>` dependencies.

---

## 🧪 Sample Output

```
Enter the input number
3
Cube of = 27
```

---

## 🛠️ Requirements

* Turbo C++ / DOSBox (for original version)
* OR
* Modern C++ Compiler (after updating code for C++ standards)

---

## 🚀 How to Run (Turbo C++ Style)

1. Open the Turbo C++ IDE
2. Create a new `.cpp` file and paste the code
3. Compile (`Alt + F9`) and Run (`Ctrl + F9`)
4. Input a number to get its cube using an inline function

---

## 📂 Project Structure

```
datastructure/
│
├── datastructure.cpp        # Main source file with inline function demo
├── README.md              # This file

```

---

## 🤝 Contributing

Pull requests are welcome! If you'd like to contribute additional examples or convert this to a modern C++ project — feel free to fork and PR.

---

## 📄 License

This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).

---

## 🙌 Acknowledgments

* 📚 C++ Basics and Data Structures
* 🧑‍💻 Turbo C++ and legacy educational environments

---

