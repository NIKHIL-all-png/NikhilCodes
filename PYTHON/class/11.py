class Car:
    def __init__(self,type):
        self.type=type

    @staticmethod
    def start():
        print("Car started")

    @staticmethod
    def stop():
        print("car stopped")

class ToyotaCar(Car):
    def __init__(self,name):
        self.name=name               