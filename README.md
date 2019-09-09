# bitcoin ascii art.

```

 _   _ _           _                _   
| |_|_| |_ ___ ___|_|___    ___ ___| |_ 
| . | |  _|  _| . | |   |  | .'|  _|  _|
|___|_|_| |___|___|_|_|_|  |__,|_| |_|

```

## Compile ##
```sh
$ git clone https://github.com/stackiller/bitcoin_art.git
$ cd bitcoin_art && gcc -c main.c core.c && gcc main.o kernel.o -o bitcoin_art
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
