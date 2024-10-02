students = ["Abhi", "Ankit", "Aman", "Rohan"]
def find_student(students, name):
    if name in students:
        return f"Student {name} is present in the list"
    else:
        return f"Student {name} is not present in the list"

print(find_student(students, "Rahul"))
