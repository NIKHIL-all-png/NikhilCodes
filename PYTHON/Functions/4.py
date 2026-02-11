def f():
    def g():
        print("g")
    g()
    print("f")
f()
