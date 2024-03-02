#include <iostream>

void Swap(int& a, int& b);
void Func(const int& a);

void ReferencePointers();
void PointersArraysExample();

void ArrayPrint(int* array, int size);

int main()
{
    int n{ 123 };
    float x{ 123.0 };

    void* vptr;

    int* iptr{ &n };
    vptr = &n;

    float* fptr = (float*)vptr;
    std::cout << *fptr << "\n";
    
    vptr = &x;
    iptr = (int*)vptr;
    std::cout << *iptr << "\n";

}

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Func(const int& a)
{
    std::cout << a << "\n";
}

void ReferencePointers()
{
    /*int number{ 123 };
    int& ref_number = number;

    std::cout << number << " " << &number << "\n";

    Func(number);

    std::cout << number << " " << &number << "\n";*/

    int number1{ 30 };
    int number2{ 40 };
    std::cout << number1 << " " << number2 << "\n";

    Swap(number1, number2);

    std::cout << number1 << " " << number2 << "\n";

    int* iptr = &number1;

    std::cout << &number1 << " " << iptr << "\n";

    *iptr = 500;

    std::cout << number1 << "\n";

    iptr = &number2;

    *iptr = 600;

    std::cout << number1 << " " << number2 << "\n";
}

void PointersArraysExample()
{
    int size;

    std::cout << "Input size of array: ";
    std::cin >> size;

    int* array = new int[size];
    std::cout << array << "\n";


    for (int i{}; i < size; i++)
        *(array + i) = i + 1;

    //*(array + 1) = 100;


    for (int i{}; i < size; i++)
        std::cout << array[i] << " ";
    std::cout << "\n";

    delete[] array;
    array = nullptr;

    if (array != nullptr)
        std::cout << array << "\n";
    else
        std::cout << "not null\n";

    //array = nullptr;
}
