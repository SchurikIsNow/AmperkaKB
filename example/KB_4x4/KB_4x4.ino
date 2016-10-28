// подключаем библиотеку для работы с матричной клавиатурой
#include <AmperkaKB.h>

// создаём объект для работы с матричной клавиатурой
// указывая номера arduino подключенные к шлейфу клавиатуры
// начиная с первого вывода шлейфа
AmperkaKB KB(7, 6, 5, 4, 3, 2, 1, 0);

void setup()
{
  // открываем монитор Serial порта
  Serial.begin(9600);
  // указываем тип клавиатуры
  KB.begin(KB4x4);
}

void loop()
{
  // если нажимается кнопка
  if (KB.check(KEY_DOWN)) {
    // печатаем номер кнопки и её символ в последовательный порт
    Serial.print("Key is press ");
    Serial.print(KB.getNum);
    Serial.print(" = \"");
    Serial.print(KB.getChar);
    Serial.println("\"");
  }
}
