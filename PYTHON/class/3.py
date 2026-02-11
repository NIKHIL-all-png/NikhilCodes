class Student:
    college_name="ABC College"
    name="Anoysk" #class attr
    def __init__(self,name,marks):
        self.name=name #obj attr > class attr
        self.marks=marks
        
    def hello(self):
        print("welcome student",self.name)  

    def get_marks(self):
        return self.marks     
    

S1=Student("Nikhil_Gupta",97)
S1.name="Bhanu"
print(S1.name)
S1.hello()
print(S1.get_marks())

