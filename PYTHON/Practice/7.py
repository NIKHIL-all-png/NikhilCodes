class Bird:
    def speak(self):
        print("Nikhil")

class Parrot(Bird):
    #Overridding the speak method
    def speak(self):
        print("Gupta")

bird=Bird()
parrot=Parrot()

bird.speak()
parrot.speak()