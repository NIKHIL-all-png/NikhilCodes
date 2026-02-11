class Student:
    #default constructors
    def __init__(self):
        pass

    #parameterized constructors
    def __init__(self,name,marks):
        self.name=name
        self.marks=marks
        self.college="Akgec"
        print("Adding new student in Database..")
    

S1=Student("Nikhil_Gupta",97)
print(S1.name,S1.marks,S1.college)
# print(S1.name)    
# print(S1.college)

S2=Student("arjun",88)
print(S2.name,S2.marks)
