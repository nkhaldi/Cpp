/*
 * Условие:
 *    Восстановите строку по её коду и беспрефиксному коду символов.
 *    В первой строке входного файла заданы два целых числа 𝑘 и 𝑙
 *    через пробел — количество различных букв, встречающихся в строке,
 *    и размер получившейся закодированной строки, соответственно.
 *    В следующих 𝑘 строках записаны коды букв в формате "letter: code".
 *    Ни один код не является префиксом другого. Буквы могут быть перечислены
 *    в любом порядке. В качестве букв могут встречаться лишь строчные буквы
 *    латинского алфавита; каждая из этих букв встречается в строке хотя бы один раз.
 *    Наконец, в последней строке записана закодированная строка. Исходная строка и
 *    коды всех букв непусты. Заданный код таков, что закодированная строка
 *    имеет минимальный возможный размер.
 *    В первой строке выходного файла выведите строку 𝑠.
 *    Она должна состоять из строчных букв латинского алфавита.
 *    Гарантируется, что длина правильного ответа не превосходит 104 символов.
 */

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unsigned int letters_num = 0, code_line_size = 0;
    cin >> letters_num >> code_line_size;
    unordered_map<string, char> haffman_map;

    for (unsigned int i = 0; i < letters_num; ++i)
    {
        string code;
        getline(cin, code);

        if (code.size() < 4)
        {
            i--;
            continue;
        }

        char ch = code[0];
        string cd = code.substr(3, code.size());
        haffman_map.insert(pair<string, char>(cd, ch));
    }
    string code_line;
    getline(cin, code_line);
    string code;
    for (auto ch : code_line)
    {
        code += ch;
        if (haffman_map.find(code) != haffman_map.end())
        {
            cout << haffman_map.at(code);
            code.erase();
        }
    }
    return 0;
}
