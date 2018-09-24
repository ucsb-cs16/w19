import java.util.ArrayList;
import java.util.Comparator;

public class Student implements Comparable<Student> {

    public Student(int perm, String name, double gpa, String major) {
	this.perm = perm; this.name=name;
	this.gpa = gpa; this.major=major;
    }

    private String name;
    private int perm;
    private double gpa;
    private String major;
    
    public String getName() {return this.name; }
    public int getPerm()    {return this.perm; }
    public double getGpa()  {return this.gpa;  }
    public String getMajor()  {return this.major;  }

    public static void sortByName(ArrayList<Student> roster) {
	java.util.Collections.sort(roster);
    }

    public static void sortByMajorThenName(ArrayList<Student> roster) {
	roster.sort( new Comparator<Student>() {
		
		public int compare(Student o1, Student o2) {
		    if (o1.major == o2.major) {
			return o1.name.compareTo(o2.name);
		    } else {
			return o1.major.compareTo(o2.major);
		    }
		}

	    });
    }

    public static void sortByGPADesc(ArrayList<Student> roster) {
	roster.sort( (s1,s2)-> (int) Math.signum(s2.gpa - s1.gpa) );
	// ask for lambda
    }

    public static void sortByPerm(ArrayList<Student> roster) {
	roster.sort( (s1,s2)-> s1.perm - s2.perm );
	// ask for lambda
    }

    
    @Override
    public String toString() {
    	return "Student(" + perm + ",\"" + name + "\"," + String.format( "%.2f", gpa) + "," + major + ")";
    }       

    public int compareTo(Student o) {
	return this.name.compareTo(o.name);	// ASK FOR IT
    }
}
