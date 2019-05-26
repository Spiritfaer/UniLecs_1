# UniLecs_1

The task: to write a function that checks whether all characters in the string occur once.
Задача: написать функцию, ктр проверяет все ли символы в строке встречаются один раз.

The function takes a string, and returns a positive response (1) if all of the characters in it are unique.
The function creates an array equal to the count of possible characters in a string.
Further in the loop, we iterate the string character-by-character using the simval code (ASCII),
we refer to the array and increase its value by one.
If the array is an element larger than one, then the string has a non-unique character.

Функция принимает строку, и возвращает положительный ответ (1) если в ней все символы уникальные.
В функции создается масив равный кол-ву возможных символов в строке.
Далее в цикле мы перебераем посимвольно строку, используя код симвала (ASCII),
мы обращаемся к массиву и увеличиваем его значение на один.
Если в массиве будет елемент размером более одного, значит строка имеет не уникальный символ.
