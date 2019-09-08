# bitcoin ascii art.

```
 ____         __                                                   __      
/\  _`\    __/\ \__                __                             /\ \__   
\ \ \L\ \ /\_\ \ ,_\   ___    ___ /\_\    ___          __     _ __\ \ ,_\  
 \ \  _ <'\/\ \ \ \/  /'___\ / __`\/\ \ /' _ `\      /'__`\  /\`'__\ \ \/  
  \ \ \L\ \\ \ \ \ \_/\ \__//\ \L\ \ \ \/\ \/\ \    /\ \L\.\_\ \ \/ \ \ \_ 
   \ \____/ \ \_\ \__\ \____\ \____/\ \_\ \_\ \_\   \ \__/.\_\\ \_\  \ \__\
    \/___/   \/_/\/__/\/____/\/___/  \/_/\/_/\/_/    \/__/\/_/ \/_/   \/__/
```

## Compile ##
```sh
$ git clone https://github.com/stackiller/bitcoin_art.git
$ cd bitcoin_art && gcc -c main.c core.c
$ gcc main.o kernel.o -o bitcoin_art
```

## How to use ##
```sh
$ ./bitcoin_art <color-id: 0-7> <invert rotation: 0 or 1 / false - true>
```

## Colors id ##
```
0 - Black;
1 - Red;
2 - Green;
3 - Yellow;
4 - Blue;
5 - Magenta;
6 - Cyan;
7 - White;
```