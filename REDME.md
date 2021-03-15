# Dallas Adress

Скетч позволяет узнать адрес датчика DS18B20 через монитор порта на платах с ESP8266 (NodeMCU Wemos D1 mini)
В репозитории все файлы для использования в VSCode, библиотеки прописаны, качать дополнительно ничего не нужно

Для работы с Arduino IDE, вам нужно:
* Поменять расширение файла main.cpp в .ino  переименовать по желанию/
* Установить библиотеки DallasTemperature и OneWire и при необходимости прописать и установить биьлиотеки для работы с вышеуказанными платами.
* Установить драйверы, смотря на каком коныернторе ваша плата c ESP

## КАК ПОЛЬЗОВАТЬСЯ
* Собрать все на макетке
* Подключить тестируемый датчик с подтяжкой по питанию 4,7к к пину D4, его можно поменять в скетче
* Залить скетч в плату, в VSCode это иконка галки в нижнем левом углу
* После успешной заливки, там же в левом углу ткнуть иконку вилки, так вы откроете монитор порта
* Перезапустить плату с ESP кнопкой RST на самой плате, в мониторе порта увидите адрес датчика, его можно скопировать

### ВИДЕО
* <a href="https://www.youtube.com/channel/UCzI016x7MItBtQCJiSWI7yA">Канал YouTube</a>

### Связь
Вопросы, обсуждения, предложения через следующие сообщества:
* [Telegram группа](https://t.me/technarr)
* [Группа в VK](https://vk.com/technarrus)