# sorting_algos_static_library
# description
[This project is a collection of sorting algorithms implemented in C. It includes various popular sorting algorithms such as bubble sort, insertion sort, and merge sort. The main objective of the project is to compare the performance of different sorting algorithms for different input sizes.

The project uses a static library to implement the sorting algorithms, making it easy to use and integrate into other projects. The user can run the project with different input sizes and observe the time taken by each sorting algorithm to perform.

This project is ideal for anyone who wants to learn about sorting algorithms and compare their performance for different input sizes. It can also be used as a reference implementation for integrating sorting algorithms into other projects.]

# Installation
To use this project, you will need to have a C compiler installed on your system. If you don't have one installed, you can download and install GCC for your operating system.

Once you have a C compiler installed, follow these steps to install and run the project:

1. Clone the repository to your local machine using the following command:

       => git clone https://github.com/[username]/[project-name].git
       
2. Navigate to the project directory using the following command:

      =>cd [project-name]
      
3. Compile the project using the following command:

       => gcc -c main.c

       => ar rcs mylib.a main.o

       => gcc -o main main.c -L. mylib.a
       
4. Run the project using the following command:

        =>  ./main
        
# Usage

# sorting algorithms

1. bubble sort
2. insertion sort
3. selection sort
4. merge sort
5. quick sort

# contributing

If you would like to contribute to this project, you can follow these guidelines:

1. Fork the repository to your own GitHub account.

2. Clone the forked repository to your local machine.

3. Create a new branch for your changes using the following command:

         => git checkout -b [branch-name]
   
5. Make your changes to the code.

5. Test your changes thoroughly to ensure that they work as expected.

6. Commit your changes using descriptive commit messages.

7. Push your changes to your forked repository.

8. Create a pull request from your forked repository to the original repository.

9. Wait for the maintainers to review your pull request.

Note: Please ensure that your contributions align with the project's goals and objectives. If you are unsure about whether a contribution is appropriate, please open an issue to discuss it with the maintainers before making any changes.

Thank you for considering contributing to this project!
