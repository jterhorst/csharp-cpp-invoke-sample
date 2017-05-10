# C# C++ invoke sample

C# C++ C++/CLI invoke samples

## What's this?

+ C# exe -> C++/CLI dll -> Native C++ dll
+ C++/CLI exe -> C++/CLI dll -> Native C++ dll
+ Native C++ exe -> Native C++ dll

## Caller

```
**unmanaged(win32/native C++/dll)** <-- **win32invoke(win32/native C++/console)**
                                    <-- **CLIwrapper(C++/CLI/dll)** <-- **cliinvoke(C++/CLI/console)**
                                                                    <-- **csharpcppinvokesample(C#/console)**
                                                                    <-- **Wpfinvoke(C#/WPF)**
```

## Prerequisites

+ Visual Studio 2017 with C# + Native Cpp + Cpp/CLI support

## Authors

* **Chijun Sima**

## License

Copyright (c) 2017 Chijun Sima

Licensed under the [MIT](LICENSE) License.
