# CPP Modules 00–09

C++98 ile yazılmış 42 School C++ modülleri. Bu repo; nesne yönelimli programlama, bellek yönetimi, kalıtım, polimorfizm, exception handling, type casting, template'ler ve STL konularını kapsar.

## Modules

| Module | Topics | Status |
|--------|--------|--------|
| CPP00 | Namespaces, classes, member functions, stdio streams, initialization lists, static, const | In progress |
| CPP01 | Memory allocation, pointers to members, references, switch statement | In progress |
| CPP02 | Ad-hoc polymorphism, operator overloading, Orthodox Canonical Form | In progress |
| CPP03 | Inheritance, access specifiers, multiple inheritance, diamond problem | In progress |
| CPP04 | Subtype polymorphism, abstract classes, interfaces, deep copy | In progress |
| CPP05 | Try/catch, exceptions, nested exceptions | In progress |
| CPP06 | Static cast, reinterpret cast, dynamic cast, const cast | In progress |
| CPP07 | Function templates, class templates, template specialization | In progress |
| CPP08 | Templated containers, iterators, algorithms | In progress |
| CPP09 | STL containers, map, stack, sorting algorithms | In progress |

## Repository Structure

```text
.
├── CPP00/
│   ├── ex00/
│   ├── ex01/
│   └── ex02/
├── CPP01/
│   └── ...
├── CPP02/
│   └── ...
├── CPP03/
│   └── ...
├── CPP04/
│   └── ...
├── CPP05/
│   └── ...
├── CPP06/
│   └── ...
├── CPP07/
│   └── ...
├── CPP08/
│   └── ...
└── CPP09/
    └── ...
```

Her modül kendi egzersiz klasörlerini içerir. İlgili egzersizin dizinine girerek derleme yapabilirsin.

## Requirements

- Linux veya macOS
- `c++` / `g++` derleyici
- GNU Make
- C++98 standardı

## Build

Bir egzersiz klasörüne gir:

```bash
cd CPP00/ex00
```

Projeyi derle:

```bash
make
```

Çalıştırılabilir dosyayı çalıştır:

```bash
./<executable_name>
```

Temizle:

```bash
make clean
```

Tamamen yeniden derle:

```bash
make re
```

## Notes

- Tüm kodlar C++98 standardına uygun şekilde yazılmıştır.
- 42 Norm kurallarına uyulmuştur.
- Her egzersiz kendi `Makefile` dosyasına sahiptir.
- Bellek yönetimi ve sızıntı kontrolü için `valgrind` kullanılabilir:

```bash
valgrind --leak-check=full ./<executable_name>
```

## Author

**İbrahim Enes**  
42 Istanbul

## License

Bu proje eğitim amaçlıdır. 42 School müfredatı kapsamında geliştirilmiştir.
