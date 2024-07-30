/* Here, Box uses a constructor to initialize the
 dimensions of a box.
*/
class Student {
    double age;
    double regNo;
    double year;
    // This is the constructor for Box.
    Student() {
    System.out.println("Constructing Box");
    age = 10;
    regNo = 10;
    year = 10;
    }
    // compute and return volume
    double volume() {
    return age + regNo + year;
    }
   }
   
   public class Student1 {
    public static void main(String args[]) {
    // declare, allocate, and initialize Box objects
    Student student1 = new Student();
    Student student2 = new Student();
    double vol;
    // get volume of first box
    vol = student1.volume();
    System.out.println("Volume is " + vol);
    // get volume of second box
    vol = student2.volume();
    System.out.println("Volume is " + vol);
    }
   }   