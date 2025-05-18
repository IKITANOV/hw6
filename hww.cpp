# hw6
//1
//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//
//sum_numbers = 0
//for i in range(1, 11) :
//    sum_numbers += i
//    print("Сума чисел від 1 до 10:", sum_numbers)
//
//    # Завдання 2
//    start_celsius = 0
//    end_celsius = 100
//    step = 10
//    print("Цельсій\tФаренгейт")
//    for celsius in range(start_celsius, end_celsius + 1, step) :
//        fahrenheit = celsius * 9 / 5 + 32
//        print(f"{celsius}\t{fahrenheit}")
//
//        
//import random
//        positive = 0
//        negative = 0
//        zero = 0
//        even = 0
//        odd = 0
//        total = 100
//        for _ in range(total) :
//            num = random.randint(-100, 100)
//            if num > 0:
//positive += 1
//elif num < 0 :
//    negative += 1
//            else:
//zero += 1
//if num % 2 == 0 :
//    even += 1
//else :
//    odd += 1
//    print(f"Відсоток позитивних чисел: {positive / total * 100}%")
//    print(f"Відсоток негативних чисел: {negative / total * 100}%")
//    print(f"Відсоток нулів: {zero / total * 100}%")
//    print(f"Відсоток парних чисел: {even / total * 100}%")
//    print(f"Відсоток непарних чисел: {odd / total * 100}%")
//
//    # Завдання 4
//    n = int(input("Введіть число для обчислення факторіалу: "))
//    factorial = 1
//    i = 1
//    while i <= n:
//factorial *= i
//i += 1
//print(f"Факторіал числа {n}: {factorial}")
//
//# Завдання 5
//number = int(input("Введіть ціле число: "))
//num_digits = 0
//sum_digits = 0
//temp = abs(number)
//while temp > 0:
//sum_digits += temp % 10
//num_digits += 1
//temp //= 10
//print(f"Кількість цифр: {num_digits}")
//print(f"Сума цифр: {sum_digits}")
//
//# Завдання 6
//number = int(input("Введіть ціле число: "))
//i = 1
//print(f"Числа, на які {number} ділиться без залишку:")
//while i <= abs(number) :
//    if number% i == 0 :
//        print(i, end = " ")
//        i += 1
//        print()
