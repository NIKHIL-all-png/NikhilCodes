class Student:
    def __init__(self,fullname):
        self.name=fullname


    def hello(self):
        print("Hello",self.name)

S1=Student("Karan")
S1.hello()