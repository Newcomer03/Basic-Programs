student = []
n = int(input("Enter the number of Students whose info you wanna store:\n"))
for num in range(n):
    indiv_Student = []
    print("Please Enter the data for Student Number: ",num+1)
    student_name = input("Enter Student's Name: ")
    indiv_Student.append(student_name)
    roll_number = int(input("Enter Student's Roll No.: "))
    indiv_Student.append(roll_number)
    avg_marks = float(input("Enter Student's Average Marks: "))
    indiv_Student.append(avg_marks)
    student.append(indiv_Student)
print(student)
