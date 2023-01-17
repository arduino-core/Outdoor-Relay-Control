> **Note**
>  This file is not up to date with `README.md` - **[`Help translating this file`](/CONTRIBUTING.md)**

## Ganze Zahlen

Ganze Zahlen `Integers` bestehen aus einer negativen oder positiven Zahl sowie der Zahl Null.

```cpp
int year = 2023;
```

### Beispiele

```cpp
int negative = -3;
```
```cpp
int positive = 8;
```
```cpp
int zero = 0;
```

## Funktionen

Mit Funktionen kannst du deinen Code optimieren.

```cpp
void serial_print(text){
  Serial.begin(9600);
  Serial.println(text);
}
```

Dieser Code würde mit `serial_print(text)` aufgerufen werden, wodurch `text` durch deinen eigenem Text ersetzt werden müsste.

```cpp
serial_print("Hello World!");
```
