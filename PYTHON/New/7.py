class Employee:
    def __init__(self,role,dept,sal):
        self.role=role
        self.dept=dept
        self.sal=sal


    def showDetail(self):
        print("role=",self.role)
        print("dept=",self.dept)
        print("sal=",self.sal)


class Engineer(Employee):
    def __init__(self,name,age):
        self.name=name
        self.age=age
        super().__init__("Engineer","IT","75000")      



e2=Engineer("Nikhil","50")
e2.showDetail()