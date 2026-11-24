

## UML Class Diagram

``` mermaid
classDiagram
    class Student {
        -string name
        -int age
        -int studentID
        -string email
        -string department
        -string course
        -string password
        +Student(n, a, id, e, dept, c, p)
        +getStudentID() int
        +getEmail() string
        +displayInfo() void
    }

    class StudentManager {
        -vector~Student~ students
        +isIDUnique(id) bool
        +isEmailUnique(email) bool
        +addStudent(student) bool
    }

  

```
