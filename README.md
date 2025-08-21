# Programming Portfolio

## Corner Grocer Item Tracking Program

### Project Summary
This project involved developing a C++ console application for the Corner Grocer to analyze their daily purchasing records and optimize their produce section layout. The program reads item purchase data from a text file, tracks frequency of each item purchased, and presents this information through multiple user-friendly formats including searchable queries, formatted lists, and visual histograms. The solution addresses the business need to understand customer purchasing patterns to create the most effective store layout.

### What I Did Particularly Well
I successfully implemented a clean object-oriented design using a single GroceryTracker class that encapsulates all functionality while maintaining clear separation between interface and implementation. My use of the STL map container was particularly effective, providing both efficient O(log n) lookups and automatic alphabetical sorting of items. I also demonstrated strong attention to user experience by implementing input validation, error handling for file operations, and multiple output formats to meet different user needs. The code follows consistent naming conventions and includes comprehensive inline documentation that makes it easily maintainable.

### Areas for Enhancement
Several improvements could make this code more robust and efficient. First, I could implement case-insensitive searching to handle user input variations (e.g., "cranberries" vs "Cranberries"). Second, adding configuration file support would make the program more flexible by allowing different input file names without code changes. Third, implementing exception handling rather than simple error messages would provide more sophisticated error recovery. For security, I could add input sanitization to prevent potential buffer overflow issues with very long item names. Performance could be enhanced by implementing file caching for very large datasets, and the user interface could be improved with colored output or a simple menu system with arrow key navigation.

### Most Challenging Code Sections
The most challenging aspect was implementing the histogram display with proper formatting and alignment. Initially, I struggled with getting the asterisks to align properly while maintaining readable item names of varying lengths. I overcame this by using the iomanip library's setw() function for consistent column widths and learning about left-justified formatting. The file I/O error handling was also challenging initially, particularly ensuring the program gracefully handled missing files or permission issues. I used online C++ documentation, zyBooks examples, and experimentation in Visual Studio to master these concepts. These resources have become valuable parts of my support network for future programming challenges.

### Transferable Skills
This project developed several skills that will be valuable throughout my computer science journey. The object-oriented design principles I applied here will transfer directly to larger software projects and other programming languages. My experience with STL containers like map will be foundational for data structures and algorithms coursework. The file I/O and data parsing skills are directly applicable to data science work, which aligns with my career goals. The debugging and testing methodologies I developed will be essential in any programming context. Additionally, the focus on clean, documented code and user-centered design represents professional development practices I'll use throughout my career.

### Maintainability, Readability, and Adaptability
I designed this program with long-term maintenance in mind through several key practices. The separation of the GroceryTracker class into header and implementation files creates clear modularity that makes the code easy to understand and modify. Consistent naming conventions for variables, functions, and files make the codebase intuitive to navigate. Comprehensive inline comments explain the logic behind complex operations, making it easy for other developers (or future me) to understand the code's functionality. The class-based design makes the program highly adaptable - new features like additional output formats or different data sources could be added without modifying existing code. Error handling and input validation make the program robust enough for real-world use, while the clear separation between data processing and user interface makes it easy to extend or modify either component independently.

## Technical Implementation Details
- **Language**: C++
- **Key Concepts**: Object-oriented programming, STL containers, file I/O, data structures
- **Development Environment**: Visual Studio 2022
- **Files Included**: 
  1. `GroceryTracker.h` - Class declaration
  2. `GroceryTracker.cpp` - Class implementation
  3. `main.cpp` - Main program and user interface
  4. `CS210_Project_Three_Input_File.txt` - Sample data file

## How to Run

1. Compile all .cpp files together in Visual Studio or compatible C++ compiler
2. Ensure input data file is in the same directory as the executable
3. Run the program and follow the menu prompts
