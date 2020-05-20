# cMD5

Implement MD5 encryption using c without openssl and extra library.

**Objective of this repository:** To work on Windows and Linux operating systems

## Features

- Small, Tiny, Pure `c` code
- Not depends on `openssl` and other
- Works as well in `Linux` and `Windows`

## MD5

The MD5 message-digest algorithm is a widely used hash function producing a 128-bit hash value. Although MD5 was initially designed to be used as a cryptographic hash function, it has been found to suffer from extensive vulnerabilities.

## Algorithms

- We need to prepare a table values

**Formula**: `0 < i < 64 : | sin(1+i) | * (2 ^ 32)`

__More details will be written soon.__

## Compile

```
gcc example.c -o md5 -lm
./md5
```

## Tested on

- Gnu/Linux gcc
- Windows Mingw

## More examples

- https://github.com/BaseMax/GuessPasswordC/

## Main Implement

- MD5 Crypto in Linux: https://code.woboq.org/linux/linux/crypto/md5.c.html
- https://people.csail.mit.edu/rivest/Md5.c

## References

It's not a own work, and depends on MD5 algorithms.
It's only a test purpose to implement md5 algorithm in c without extra library. Tested on for windows and linux.

- https://en.wikipedia.org/wiki/MD5
- https://rosettacode.org/wiki/MD5/Implementation#C
- https://people.csail.mit.edu/rivest/Md5.c

### More read about MD5:

- https://tools.ietf.org/html/rfc1321

## More Videos

I have not seen the following videos, But they must be useful:

- https://www.youtube.com/watch?v=53O9J2J5i14
- https://www.youtube.com/watch?v=F9apz7nKvzQ
- https://www.youtube.com/watch?v=af3ORsj_k7w

---------

# Max Base

My nickname is Max, Programming language developer, Full-stack programmer. I love computer scientists, researchers, and compilers. ([Max Base](https://maxbase.org/))

## Asrez Team

A team includes some programmer, developer, designer, researcher(s) especially Max Base.

[Asrez Team](https://www.asrez.com/)
