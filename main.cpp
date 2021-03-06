#include <iostream>
#include <fstream>

int main() {
  std::ifstream words;
  int counter = 0;
  std::string buff, word;
  
  std::cout << "Enter a search word: ";
  std::getline(std::cin, word);
  words.open("words.txt");

  while (!words.eof()) {
    words >> buff;
    if (buff == word) {
      ++counter;
    }
  }

  words.close();

  std::cout << "The word " << word << " meets " << counter << " times";
}

/*
Задание 1. Разработка программы поиска слов в файле
Что нужно сделать
Составьте небольшой текстовый файл «words.txt», в котором последовательно, через пробелы и переносы строк расположены различные слова. Можете использовать любые англоязычные слова. Разработайте программу, которая искала бы среди этих слов нужное пользователю и выводила бы общее количество повторений этого слова. 0 — если слово вообще не присутствует в файле.

Что оценивается
Корректность работы программы на созданных вами вводных данных. Число найденных слов должно соответствовать.
*/