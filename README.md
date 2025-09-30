# Data Structures Toolkit 🚀

A robust C++ implementation of essential data structures, algorithms, and utility classes designed for educational purposes and practical applications.

## 🎯 Three Standout Features

### 1. Comprehensive Data Structure Ecosystem
- **Multiple Queue Implementations**: Linked-list based (`clsMyQueue`) and array-based (`clsMyQueueArr`) 
- **Dual Stack Variants**: Both linked-list (`clsMyStack`) and array-based (`clsMyStackArr`) implementations
- **Complete Date Handling**: Advanced `clsDate` class with calendar operations and business logic
- **Template-Based Design**: Generic implementations work with any data type

### 2. Production-Ready Utility Classes
- **Undo/Redo System**: `clsMyString` implements text editing history using stacks
- **Queue Management**: `clsQueueLine` simulates real ticket systems with timing estimates
- **Date Calculations**: Age calculation, business days, vacation planning, and calendar generation
- **Dynamic Memory Management**: Automatic resizing and cleanup throughout

### 3. **Advanced Algorithm Implementations**
- **Date Arithmetic**: Add/subtract days, weeks, months, years, decades, centuries
- **Calendar Operations**: Print monthly/yearly calendars, day calculations, leap year handling
- **Business Logic**: Vacation day calculations, business day detection, weekend handling
- **Efficient Operations**: O(1) operations where possible with robust error checking

## 📦 Data Structures Included

### Core Structures
- **Doubly Linked List** (`clsDblLinkedList`) - Complete with reverse traversal
- **Dynamic Array** (`clsDynamicArray`) - Automatic resizing and memory management
- **Queue** (`clsMyQueue` & `clsMyQueueArr`) - Both linked list and array versions
- **Stack** (`clsMyStack` & `clsMyStackArr`) - Both linked list and array versions

### Advanced Utility Classes
- **Date Management** (`clsDate`) - Comprehensive date operations and calendar generation
- **String with History** (`clsMyString`) - Undo/redo functionality
- **Ticket Queue System** (`clsQueueLine`) - Real-world queue simulation

## 🗓️ clsDate Class Highlights

The `clsDate` class is particularly feature-rich with:

**Calendar Operations:**
- Print monthly and yearly calendars
- Day of week calculations
- Leap year detection
- Date validation

**Date Arithmetic:**
- Add/Subtract: days, weeks, months, years, decades, centuries, millennia
- Date difference calculations
- Business day calculations
- Vacation planning utilities

**Real-World Applications:**
- Age calculation in days
- Business day counting
- Vacation return date calculation
- Date comparisons and sorting

## 🛠 Key Technical Highlights

- **Template-Based Generics** - Type-safe for any data type
- **Memory Safe** - Proper cleanup in destructors
- **Efficient Algorithms** - O(1) operations where possible
- **Comprehensive Testing** - Edge case handling throughout
- **Multiple Implementation Strategies** - Choose the right tool for each job

## 💡 Perfect For
- Learning data structures and algorithms
- Interview preparation
- Foundation for larger projects
- Understanding memory management and templates
- Real-world application development

## 🚀 Quick Start

cpp
#include "clsDblLinkedList.h"
#include "clsMyQueue.h"
#include "clsDate.h"

// Linked List Example
clsDblLinkedList<int> list;

list.InsertAtBeginning(10);

list.PrintList();

// Queue Example  
clsMyQueue<string> queue;

queue.push("Hello");

queue.Print();

// Date Example
clsDate today;

today.Print();

clsDate birthday(15, 8, 1990);

cout << "Age in days: " << clsDate::CalculateMyAgeInDays(birthday);
