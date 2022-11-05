## Web Bluetooth and HM-10 Bluetooth LE.
**Simple boilerplate to send and return back a message between web app and Arduino through Bluetooth LE. We have a few of them in our workshop so I had to make a basic usage example.**

### Circuit:
Connect module RX to pin `11` and TX to pin `10`. The Arduino Sketch uses Software Serial.

*Technically the modules use 3.3V logic but I've never had issues with any Bluetooth LE modules (like HC-05, HC-06) which also uses same logic.*

### Connection:
1. Pair your device, the default password should be `000000`. *Default settings are enough so you don't need to use AT-Mode.*
2. Open the app and click connect to initialize the connection.
3. Arduino sketch uses `readStringUntil('\n');`so the `\n` endline character is appended to each message. *There are various way to handle the communication and its buffer, if character is missing the buffer will wait until timeout.*

### Notes:
- *Tested with Chrome browser and Arduino Uno. The Web Bluetooth is not supported on IOS.*
- *It's just a HC-05 but with Low Energy instead of BT 2.0.*
- *Personally I don't like using Bluetooth LE as a Serial Communication port, it's just a cheap trick to use it on mobile devices that can be useful only in some cases. It's not the way Bluetooth Low Energy should work. Furthermore constant streaming of data is not so "Low Energy". To compare, check my* [Web Bluetooth and Arduino Nano BLE repo.](https://github.com/ErniW/Web-bluetooth-and-Arduino-Nano-33-BLE)
- *For other notes check the metioned repository.*
- *The web app lacks of proper error handling - it's a boilerplate I decided to make understandable as much as possible for my students not because I don't know how to do it.*
