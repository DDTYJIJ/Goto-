#include <iostream>
#include <Windows.h>
#include <ctime>
/*int main()
{
	std::cout << "Hello World and Surzh Denis";

	return 0;
}*/
/*int main()   ----Скипайте это я через нейронку пытался понять а она фулл ответ дала я понял как это сделать. Не знал или прослушал о sum += number; сумма в начале ровна нулю как и число, через цикл мы указываем что сумма + число равна сумме она сохранеяться и если мы введем 0 цикл оборветься
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int number = 0;
    int sum = 0;

    std::cout << "Введите числа (0 для выхода):\n";

    // Считываем первое число
    std::cin >> number;

    // Цикл работает, пока пользователь НЕ ввел 0
    while (number != 0)
    {
        sum += number;     // Прибавляем число к общей сумме (то же самое, что sum = sum + number)
        std::cin >> number; // Считываем следующее число
    }

    std::cout << "Сумма всех введенных чисел: " << sum << std::endl;

    return 0;
}*/
/* Мне помогла нейронка и опять показала фулл ответ но перефрозированый. 
Я взял int choice хранитель целых чисел и правильный порядок кода а все остальное написал сам */
/*
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int choice;

        do
        {
            std::cout << " 1) Новая игра";
            std::cout << " 2) Настройки";
            std::cout << " 3) Выход";

            std::cin >> choice;

            if (choice != 1 && choice != 2 && choice != 3)
            {
                std::cout << "Неправильно";
            }

        } while (choice != 1 && choice != 2 && choice != 3);

        if (choice == 1) {
            std::cout << "Запущена новая игра" << std::endl;
        }
        else if (choice == 2) {
            std::cout << "Выбраны настройки" << std::endl;
        }
        else if (choice == 3) {
            std::cout << "Выход из программы" << std::endl;
        }





        return 0;
}


*/
/*int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int count = 0;

    // а) PIN-коды из разных цифр

    std::cout << "а) PIN-коды из разных цифр:" << std::endl;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    if (a != b && a != c && a != d &&
                        b != c && b != d &&
                        c != d)
                    {
                        count++;

                        // Первые 10
                        if (count <= 10)
                        {
                            std::cout << a << b << c << d << " ";
                        }
                    }
                }
            }
        }
    }

    std::cout << std::endl;
    std::cout << "Количество: " << count << std::endl;

    // Последние 10 кодов
    std::cout << "Последние 10: ";

    count = 0;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    if (a != b && a != c && a != d &&
                        b != c && b != d &&
                        c != d)
                    {
                        count++;

                        if (count > 5030)
                        {
                            std::cout << a << b << c << d << " ";
                        }
                    }
                }
            }
        }
    }

    std::cout << std::endl << std::endl;


    // б) PIN-коды с повторяющимися цифрами

    std::cout << "б) PIN-коды с повторяющимися цифрами:" << std::endl;

    count = 0;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    count++;

                    // Первые 10
                    if (count <= 10)
                    {
                        std::cout << a << b << c << d << " ";
                    }
                }
            }
        }
    }

    std::cout << std::endl;
    std::cout << "Количество: " << count << std::endl;

    // Последние 10
    std::cout << "Последние 10: ";

    count = 0;

    for (int a = 0; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    count++;

                    if (count > 9990)
                    {
                        std::cout << a << b << c << d << " ";
                    }
                }
            }
        }
    }

    std::cout << std::endl;

    return 0;
}*/


//----------------------------------------------------------------------\\
// Задание 1
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));
    
    int number123;
    int number123A;
    int number123B;
    int numberB;
    int number123C;

    int number456;
    int number456A;
    int number456B;
    int numberBR;
    int number456C;


    int number;
    int number1;
    int number2;
    

    std::cout << "Введите счастливое число из 6 символов числа\n";
    std::cin >> number;
    if (number > 999999 || number < 100000)
    {
        std::cout << "Ошибка введите корректно\n";
    }
    else
    {
        number123 = number / 1000; //Первые три числа
        
        number123A = number123 / 100;
        
        numberB = number123 / 10;
        number123B = numberB % 10;

        number123C = number123 % 10;

        number1 = number123A + number123B + number123C;

        //--------------------\\

        number456 = number % 1000; //Последнии три числа

        number456A = number456 / 100;

        numberBR = number456 / 10;
        number456B = numberBR % 10;

        number456C = number456 % 10;


        number2 = number456A + number456B + number456C;

        //--------------------\\

        if (number1 == number2)
        {
            std::cout << "Это число счастливое\n";
        }
        else
        {
            std::cout << "Это число не счастливое\n";
        }     
    }

    return 0;
}


//----------------------------------------------------------------------\\


// Задание 2

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));

    int number;

    int number12;
    int number12A;
    int number12B;

    int number34;
    int number34A;
    int number34B;



    std::cout << "Введите четырехзначное число\n";
    std::cin >> number;

    if (number > 9999 || number < 1000)
    {
        std::cout << "Ошибка введите корректно";
    }
    else
    {
        number12 = number / 100;

        number12A = number12 / 10;

        number12B = number12 % 10;


        number34 = number % 100;

        number34A = number34 / 10;

        number34B = number34 % 10;


        std::cout << number34A << number34B << number12A << number12B;

    }




    return 0;
}


//----------------------------------------------------------------------\\
// Задание 3

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); //		1251
    srand(time(NULL));

    int number1234;
    int number1234A;

    int number1234B;
    int numberB;

    int number1234C;
    int numberC;

    int number1234D;

    int number567;
    int number567A;

    int number567B;
    int numberBR;

    int number567C;

    int number;



    std::cout << "Введите семезначное число\n";
    std::cin >> number;

    if (number > 9999999 || number < 1000000)
    {
        std::cout << "Ошибка введите корректно";
    }
    else
    {
        number1234 = number / 1000;


   

        number1234A = number1234 / 1000;

        numberB = number1234 / 100;
        number1234B = numberB % 10;

        numberC = number1234 % 100;
        number1234C = numberC / 10;

        number1234D = number1234 % 10;

        //-------------------------\\

        number567 = number % 1000;


        number567A = number567 / 100;

        numberBR = number567 / 10;

        number567B = numberBR % 10;

        number567C = number567 % 10;


        if (number1234A > number1234B && number1234A > number1234C && number1234A > number1234D && number1234A > number567A && number1234A > number567B && number1234A > number567C)
        {
            std::cout << "Самое большое число " << number1234A;
        }
        else if (number1234B > number1234A && number1234B > number1234C && number1234B > number1234D && number1234B > number567A && number1234B > number567B && number1234B > number567C)
        {
            std::cout << "Самое большое число " << number1234B;
        }
        else if (number1234C > number1234A && number1234C > number1234B && number1234C > number1234D && number1234C > number567A && number1234C > number567B && number1234C > number567C)
        {
            std::cout << "Самое большое число " << number1234C;
        }
        else if (number1234D > number1234A && number1234D > number1234B && number1234D > number1234C && number1234D > number567A && number1234D > number567B && number1234D > number567C)
        {
            std::cout << "Самое большое число " << number1234D;
        }
        else if (number567A > number1234A && number567A > number1234B && number567A > number1234C && number567A > number1234D && number567A > number567B && number567A > number567C)
        {
            std::cout << "Самое большое число " << number567A;
        }
        else if (number567B > number1234A && number567B > number1234B && number567B > number1234C && number567B > number1234D && number567B > number567A && number567B > number567C)
        {
            std::cout << "Самое большое число " << number567B;
        }
        else if (number567C > number1234A && number567C > number1234B && number567C > number1234C && number567C > number1234D && number567C > number567A && number567C > number567B)
        {
            std::cout << "Самое большое число " << number567C;
        }
       

    }
    


    return 0;
}
