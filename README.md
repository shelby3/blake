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
shelby3/byteio  | /byteio    | 060aa5315a99cf2ec0f12a658f15346fe8eca1fd
shelby3/cmacros | /cmacros   | b817c6cc5a0231a0ad9bb1e71a69a15df05e4d80

[Added]: https://gist.github.com/shelby3/f69c969ecaa3ecfbe579#subrepositories
