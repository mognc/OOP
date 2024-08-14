

class Student:
    def __init__(self, name, roll_number, grade):
        self.name = name
        self.roll_number = roll_number
        self.grade = grade

    def display(self):
        print("Student name is:", self.name)
        print("Student roll number is:", self.roll_number)
        print("Student grade is:", self.grade)