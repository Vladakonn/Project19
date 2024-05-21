//#include <iostream>
//
//int main() 
//{
//    setlocale(LC_ALL, "ru");
//    int count = 0;
//    for (int i = 100; i < 1000; i++)
//    {
//        int a = i / 100; // сотни
//        int b = (i / 10) % 10; // десятки
//        int c = i % 10; // единицы
//
//        if (a == b || b == c || c == a)
//        {
//            count++;
//        }
//
//    }
//
//    std::cout << "Количество целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры: " << count << std::endl;
//
//    return 0;
//}
//

/*#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        int hundreds = i / 100;
        int tens = (i / 10) % 10;
        int units = i % 10;

        if (hundreds != tens && hundreds != units && tens != units)
        {
            count++;
        }
    }

    std::cout << "Количество целых чисел со всеми разными цифрами в диапазоне от 100 до 999: " << count << std::endl;

    return 0;
}*/


#include <iostream>
#include <string>

int main() 
{
    setlocale(LC_ALL, "ru");
    int num;
    std::cout << "Введите целое число: ";
    std::cin >> num;

    std::string strNum = std::to_string(num);
    std::string result = "";

    for (char digit : strNum) 
    {
        if (digit != '3' && digit != '6')
        {
            result += digit;
        }
    }

    std::cout << "Результат: " << result << std::endl;

    return 0;
}










/*#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");
    int A;

    std::cout << "Введите целое число A: ";
    std::cin >> A;

    std::cout << "Целые числа B, такие, чтобы A делилось на B ^ 2, но не делилось на B ^ 3: ";
    for (int B = 1; B <= A; B++) 
    {
        if (A % (B * B) == 0 && A % (B * B * B) != 0) 
        {
            std::cout << B << " ";
        }
    }

    return 0;
}*/


//#include <iostream>
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    int A, sum = 0;
//
//    std::cout << "Введите целое число A:";
//    std::cin >> A;
//
//    int temp = A;
//    while (temp != 0)
//    {
//        sum += temp % 10;
//        temp /= 10;
//    }
//
//    if (sum * sum * sum == A * A)
//    {
//        std::cout << "Куб суммы цифр числа" << A << " равно" << A << " возведенный в квадрат.\n";
//    }
//    else 
//    {
//        std::cout << "Куб суммы цифр числа " << A << " равно " << A << " возведенный в квадрат.\n";
//    }
//
//    return 0;
//}
//#include <iostream>
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    int num;
//
//    std::cout << "Введите целое число: ";
//    std::cin >> num;
//
//    std::cout << "Числа, на которые " << num << " делится без остатка:" << std::endl;
//    for (int i = 1; i <= num; i++) 
//    {
//        if (num % i == 0) 
//        {
//            std::cout << i << std::endl;
//        }
//    }
//
//    return 0;
//}
//

//#include <iostream>
//
//int main()
//{
//    setlocale(LC_ALL, "ru");
//    int a, b;
//
//    std::cout << "Введите два целых числа:";
//    std::cin >> a >> b;
//
//    std::cout << "Числа, которые оба" << a << " и " << b << "делятся на: ";
//
//    int minNum = (a < b) ? a : b;
//
//    for (int i = 1; i <= minNum; i++) 
//    {
//        if (a % i == 0 && b % i == 0) 
//        {
//            std::cout << i << " ";
//        }
//    }
//
//    return 0;
//}