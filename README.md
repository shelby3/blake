# blake

BLAKE2 cryptographic hash functions.

### Build

Emscripten compile with:

```sh
emcc blake/blake.c byteio/byteio.c main.c -o main.html
```

### Added Subrepositories

Subrepository   | [Added] As |                Revision
----------------|------------|-----------------------------------------
shelby3/byteio  | /byteio    | 0efcdb9515fd453fbeef6d698280508a175f3413
shelby3/cmacros | /cmacros   | 5915517379ab3e412843f6cf1ba7efd6fb14c565

[Added]: https://gist.github.com/shelby3/f69c969ecaa3ecfbe579#subrepositories
