---
layout: examHandoutNoName
num: e01
ready: true
desc: "Midterm Exam Handout"
exam_date: 2016-07-07 09:30:00.00-7
---

## INSTRUCTIONS FOR QUESTION 1

The `Aircraft` class is intended to represent one of the rows in the table shown here,
which is a portion of the United Airlines fleet:

<style>
  div.aircraft {
    margin: 1em; padding: 1em;
  }
  div.aircraft table * td {
    font-family: Arial Narrow, sans-serif;
    font-size: 90%;
    padding: 3px;
  }

</style>

<div class="aircraft" markdown="1">

| Boeing 747-400 (744) | wifi | 52 Business First | 240 Economy | 70 Economy Plus | 12 Global First |
| Boeing 767-300 (763) | wifi | 26 BusinessFirst| 80 Economy| 71 Economy Plus| 6 Global First |
| Boeing 787-8 (788) | wifi |  36 BusinessFirst | 113 Economy | 70 Economy Plus |
| Boeing 787-9 (789) | wifi | 48 BusinessFirst | 116 Economy | 88 Economy Plus |
| Embraer EMB 170  |  wifi | 48 Economy | 16 Economy Plus| 6 First |
| Embraer EMB 175 |  no wifi |  48 Economy | 16 Economy Plus| 12 First |
| Bombardier CRJ-200 | no wifi | 46 Economy| 4 Economy Plus
| Bombardier CRJ-700 | no wifi | 28 Economy | 32 Economy Plus | 6 First

</div>

As you can see, for each Aircraft in a fleet, we need to be able to store:

* a `name`, such as `"Boeing 747-400 (744)"`<br> or `"Embraer EMB 175"`
* an indication of whether the plane has wifi or not
* a collection of Cabins

For your convenience, you may assume that there is a `Cabin` class available to you with:

* a constructor: `public Cabin(String name, int seats)`
* public getter methods:<br> `String getName()` and `int getSeats()`
* a public `String toString()` method that returns a cabin in the format shown in the table, e.g. `"28 Economy"`

Your job is to write the public class `Aircraft`, with all of the following:

<style>
  div.enclosed-list-uses-lower-alpha ol li {
  list-style-type: lower-alpha;
  }
</style>

<div class="enclosed-list-uses-lower-alpha" markdown="1">

1. (10 pts) Correct syntax and structure of a Java class.
1. (8 pts) Private instance variables for the data members (attributes)
1. (8 pts) A two-argument constructor that takes arguments for the name of the aircraft, and
   whether or not the aircraft has wifi: 
   Example invocation:
   
   ```java
       Aircraft a = new Aircraft("Boeing 747-400 (744)",true);
       Aircraft b = new Aircraft("Embraer EMB 175",false);
   ```
   
1. (8 pts) getter methods called `getName` and `hasWifi` that return appropriate values
1. (8 pts) a method `addCabin` that adds a Cabin object to the aircraft.  For example,

   ```java
       Aircraft a = new Aircraft("Boeing 747-400 (744)",true);
       Cabin bf = new Cabin("Business First",52);
       a.addCabin(bf);
       Cabin e = new Cabin("Economy",240);
       a.addCabin(e);
   ```

1.  (8 pts) a correct `toString()` method.  The method should return a representation of
    the aircraft object in a format that follows these examples.   

    ```
    Boeing 747-400 (744) (Capacity: 374 )
    Bombardier CRJ-200 V1 (Capacity: 50)
    ```

    The capacity should be the
    sum of the capacities of all cabins that have been added to the Aircraft.
   
</div>

Note that for *this* exam, you do NOT need to include Javadoc comments
or write a `.equals` method.

Total Points: <span class="pointCount">Total points: ?</span>

<div style="font-size: 10px; font-family: Arial Narrow, sans-serif;">
The list contains data for the United Airlines fleet as shown on the website
SeatGuru, Copyright © TripAdvisor LLC, 2016.  Reproduced here under "fair use" doctrine
for classroom use.
</div>

<h2 class="page-break-before">Code for Question 6</h2>

```java

public class Dog {

    private static Dog dogOfTheWeek = null;
    
    private String name;
    
    public void setAsDogOfTheWeek() {
	dogOfTheWeek = this;
    }

    public static Dog getDogOfTheWeek() {
	return dogOfTheWeek;
    }
    
    public Dog(String name) { this.name = name;}

    public static void main(String [] args) {

	Dog d1 = new Dog("Snoopy"); 
	Dog d2 = new Dog("Princess"); 
	Dog d3 = new Dog("Rover");
	Dog d4 = new Dog("Spot"); 
	Dog d5 = new Dog("Fido"); 


	d5.setAsDogOfTheWeek();    /*  1 */
	d2 = d1;                   /*  2 */
	Dog d3 = d6;               /*  3 */ 
	Dog temp = d2;             /*  4 */
	d2 = d5;                   /*  5 */
	d5 = temp;                 /*  6 */
	d3 = getDogOfTheWeek();    /*  7 */
	d1.setAsDogOfTheWeek();    /*  8 */
	d1 = null;                 /*  9 */
	d2 = null;                 /* 10 */
	d3 = null;                 /* 11 */
	d4 = null;                 /* 12 */
	d5 = null;                 /* 13 */
	temp = null;               /* 14 */
    }                              /* 15 */
}
```
