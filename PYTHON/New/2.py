class Car:
    def __init__(self,type):
        print("Electric Car")
        self.type=type

    @staticmethod
    def start():
        print("car started")

    @staticmethod
    def stop():
        print("Car stopped")


class ToyotaCar(Car):
    def __init__(self,name, type):
        super().__init__(type)
        self.name=name
        super().start()
        


car1=ToyotaCar("pirus","Electric")
print(car1.name)
print(car1.type)       