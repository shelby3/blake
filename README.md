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
shelby3/byteio  | /byteio    | 3340d7315979a74fa01192b97cd5c7e667c6b114
shelby3/cmacros | /cmacros   | bd4ea5bcb796c38e90f3f52b6552696667401e8d

[Added]: https://gist.github.com/shelby3/f69c969ecaa3ecfbe579#subrepositories
