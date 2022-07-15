
# GET ENV VARIABLES

small c programe to read ENV variables and print theme without using getenv() or printf()... functions

## Inspiration
I got the idea of making this programe after watching this video on youtube.

[![Video](https://i.ytimg.com/vi/eTcVLqKpZJc/maxresdefault.jpg)](https://youtu.be/eTcVLqKpZJc "Video on youtub")

## Usage/Examples

to run the programe
compile the surce first
```bash
  make
```
make sure tho have make and gcc

to get the list of all your env vars
run:
```bash
  ./env
```
to get the value of a spesefic variable
for example to get the value of PATH

run:
```bash
  ./env PATH
```
you will get somthing like
```bash
  /usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
```