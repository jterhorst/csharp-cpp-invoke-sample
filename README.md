# C# C++ invoke sample

[![Build status](https://ci.appveyor.com/api/projects/status/maq5ueiqpnfv1f9r/branch/master)](https://ci.appveyor.com/project/NutshellySima/csharp-cpp-invoke-sample/branch/master)

C# C++ C++/CLI invoke samples

## What's this?

+ C# exe -> C++/CLI dll -> Native C++ dll
+ C++/CLI exe -> C++/CLI dll -> Native C++ dll
+ Native C++ exe -> Native C++ dll

## Caller

```
unmanaged(win32/native C++/dll) <-- win32invoke(win32/native C++/console)
                                <-- CLIwrapper(C++/CLI/dll) <-- cliinvoke(C++/CLI/console)
                                                            <-- csharpcppinvokesample(C#/console)
                                                            <-- Wpfinvoke(C#/WPF)
```

## Prerequisites

+ Visual Studio 2017 with C# (.Net Framework v4.7) + Native Cpp + Cpp/CLI support

## Additional Notes

+ If you want to know how to use C# to invoke something like **std::future/std::mutex/std::thread**, please search ```PImpl``` by yourself. [**However, if you need an example, feel free to open an issue here**]

## Screenshot

![qq 20170511204800](https://cloud.githubusercontent.com/assets/22494815/25949734/24e09dee-368b-11e7-8af9-70fe9bffa097.jpg)

## Authors

* **Chijun Sima**

## License

Copyright (c) 2017 Chijun Sima

Licensed under the [MIT](LICENSE) License.
