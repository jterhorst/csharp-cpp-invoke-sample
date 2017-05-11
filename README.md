# C# C++ invoke sample

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

+ Visual Studio 2017 with C# + Native Cpp + Cpp/CLI support

## Screenshot

![image](https://cloud.githubusercontent.com/assets/22494815/25910859/5d4f13ec-35e4-11e7-8179-f64df419605f.png)
![qq 20170511204800](https://cloud.githubusercontent.com/assets/22494815/25949734/24e09dee-368b-11e7-8af9-70fe9bffa097.jpg)

## Authors

* **Chijun Sima**

## License

Copyright (c) 2017 Chijun Sima

Licensed under the [MIT](LICENSE) License.
