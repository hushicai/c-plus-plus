## 练习3.11

> 下面的范围for语句合法吗？如果合法，c的类型是什么？
>
> ```cpp
> const string s = "Keep out!";
> for(auto &c : s) {/*...*/}
> ```

合法，c的类型是一个`const char`的引用，不能修改。