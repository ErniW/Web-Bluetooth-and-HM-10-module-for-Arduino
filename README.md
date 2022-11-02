## Web Bluetooth and HM-10 Bluetooth LE.
**Simple boilerplate to send and return back a message between web app and Arduino through Bluetooth LE. We have a few of them in our workshop so I had to make a basic usage example.**

### Circuit:
Connect module RX to `pinno` and TX to `otherpinno`. The Arduino Sketch uses Software Serial.

*Technically the modules use 3.3V logic but I've never had issues with any Bluetooth LE modules (like HC-05, HC-06) which also uses same logic.*

### Connection:
- Pair your device, the default password should be `000000`.
- Open the app and click connect to initialize the connection.

*Default settings are enough so you don't need to use AT-Mode.*

### Notes:
- *Tested with Chrome browser and Arduino Uno. The Web Bluetooth is not supported on IOS.*
- *It's just a HC-05 but with Low Energy.*
- *Personally I don't like using Bluetooth LE as a Serial Communication port, it's just a cheap trick to use it on mobile devices that can be useful only in some cases. It's not the way Bluetooth Low Energy should work. Furthermore constant streaming of data is not so "Low Energy". To compare, check my* [Web Bluetooth and Arduino Nano BLE repo.](https://github.com/ErniW/Web-bluetooth-and-Arduino-Nano-33-BLE)
- *For other notes check the metioned repository.*
